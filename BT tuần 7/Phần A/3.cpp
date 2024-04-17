#include <iostream>
using namespace std;
int count(int* arr, int size) {
    int c = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            c++;
        }
    }
    return c;
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << count(A, 5) << endl;
    cout << count(A + 5, 5) << endl;

    return 0;
}

