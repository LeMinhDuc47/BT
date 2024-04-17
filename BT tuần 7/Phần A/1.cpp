#include <bits/stdc++.h>
using namespace std;
void f1(int a[]) {
    cout << sizeof(a) << endl;
}
void f2(int a[10]) {
    cout << sizeof(a) << endl;
}

int main() {
    int A[10];
    cout << sizeof(A) << endl;
    f1(A);
    f2(A);
    return 0;
}
