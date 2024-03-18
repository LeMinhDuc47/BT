#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a(10000);
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n - 2; ++i) {
        for(int j = i + 1; j < n - 1; ++j) {
            for(int k = j + 1; k < n; ++k) {
                if(a[i] + a[j] + a[k] == 0) {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                    return 0;
                }
            }
        }
    }
    cout <<"khong tim thay";
    return 0;
}
