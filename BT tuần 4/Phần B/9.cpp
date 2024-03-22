#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for(int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        for(int j = 0; j < i; j++) {
            if(X[i] == X[j] || Y[i] == Y[j] || abs(X[i] - X[j]) == abs(Y[i] - Y[j])) {
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
    return 0;
}
