#include <iostream>
using namespace std;
int giaiThua(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int toHop(int k, int n) {
    return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}
int kiemTra(int k, int n) {
    if (0 <= k && k <= n && 1 <= n && n <= 20) {
        return 1;
    }
    return 0;
}

void nhapKN(int k[], int n[], int *soPhanTu) {
    int i = 0;
    while (true) {
        cin >> k[i] >> n[i];
        if (k[i] == -1 && n[i] == -1) {
            break;
        }
        i++;
    }
    *soPhanTu = i;
}

int main() {
    int k[20], n[20], soPhanTu;
    nhapKN(k, n, &soPhanTu);
    for (int i = 0; i < soPhanTu; i++) {
        if (kiemTra(k[i], n[i])) {
            cout << toHop(k[i], n[i]) <<endl;
        }
    }
    return 0;
}
