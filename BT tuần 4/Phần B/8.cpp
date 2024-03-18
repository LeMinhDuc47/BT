#include <iostream>
using namespace std;
void sort(double a[], int N) {
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (a[j] > a[j+1]) {
                double temp = a[j];
                a[j] = arr[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    double men[N], women[N];
    for (int i = 0; i < N; i++) {
        cin >> men[i] >> women[i];
    }
    sort(men, N);
    sort(women, N);

    for (int i = 0; i < N; i++) {
        if (men[i] <= women[i]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
