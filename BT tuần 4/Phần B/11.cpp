#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<string> words(N);
    for (int i = 0; i < N; ++i) {
        cin >> words[i];
    }
    string password;
    for (const auto& word : words) {
        string reversed_word = word;
        reverse(reversed_word.begin(), reversed_word.end());
        if (find(words.begin(), words.end(), reversed_word) != words.end()) {
            password = word;
            break;
        }
    }
    cout << password.size() << " " << password[password.size() / 2] << endl;
    return 0;
}
