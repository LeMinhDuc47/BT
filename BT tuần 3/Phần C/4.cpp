#include <iostream>
#include <vector>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<char>> check(m, vector<char>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> check[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(check[i][j] == '*') {
                cout << '*'<<' ';
            } else {
                int count = 0;
                for(int k = 0; k < 8; k++) {
                    int ni = i + dx[k], nj = j + dy[k];
                    if(ni >= 0 && ni < m && nj >= 0 && nj < n && check[ni][nj] == '*') {
                        count++;
                    }
                }
                cout << count<<' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
