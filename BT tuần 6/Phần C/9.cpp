#include<bits/stdc++.h>
#define N 50 
using namespaces td;
void f(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << arr[i]<< arr[j]<< arr[k];
                }
            }
        }
    }
}

int main() {
    int arr[N];
    srand(time(0));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 50; 
    }

    f(arr, N);

    return 0;
}
