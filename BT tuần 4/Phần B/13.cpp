#include <bits/stdc++.h>
using namespace std;

string Sums(vector<int> a) {
    int sum = 0;
    for(int i = 0; i < a.size(); i++) {
        sum += a[i];
    }

    int leftsum = 0;
    for(int i = 0; i < a.size(); i++) {
        sum -= a[i];
        if(leftsum == sum) {
            return "YES";
        }
        leftsum += a[i];
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout <<Sums(a) << endl;
    }
    return 0;
}