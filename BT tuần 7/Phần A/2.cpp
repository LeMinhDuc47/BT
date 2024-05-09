#include <iostream>
using namespace std;
void f(int* arr) {
    cout << sizeof(arr) << std::endl;
}
void g(int arr[10]) {
    cout << sizeof(arr) << std::endl;
}

int main() {
    int A[10];
    cout  << sizeof(A) <<endl;
    f(A);
    g(A);
    return 0;
}
