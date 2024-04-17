#include <iostream>
using namespace std;
int binary_search(int* a, int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (*(a + mid) == x)
            return mid;
        if (*(a + mid) > x)
            return binary_search(a, left, mid - 1, x);
        return binary_search(a, mid + 1, right, x);
    }
    return -1;
}

int main() {
    int a[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(a) / sizeof(a[0]);
    int result = binary_search(a, 0, n - 1, x);
    return 0;
}
