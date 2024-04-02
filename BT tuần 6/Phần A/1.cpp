#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10; 
const int MAX_MINES = 9;
void initMap(vector<vector<char>>& map, int m, int n, int K) {
    map.assign(m, vector<char>(n, '.'));
    srand(time(nullptr));
    for (int i = 0; i < K; ++i) {
        int x = rand() % m;
        int y = rand() % n;
        map[x][y] = 'M';
    }
}
void printMap(const vector<vector<char>>& map) {
    for (const auto& row : map) {
        for (char cell : row) {
            cout << cell << ' ';
        }
        cout << endl;
    }
}

bool hasMine(const vector<vector<char>>& map, int x, int y) {
    return map[x][y] == 'M';
}

int main() {
    int m, n, K;
    cin >> m >> n >> K;

    vector<vector<char>> mineMap;
    initMap(mineMap, m, n, K);
    printMap(mineMap);

    while (true) {
        int x, y;
        cin >> x >> y;

        if (hasMine(mineMap, x, y)) {
            cout << "YOU'RE DEAD!" << endl;
            printMap(mineMap);
            break;
        } else {
            int mineCount = 0;
            for (int dx = -1; dx <= 1; ++dx) {
                for (int dy = -1; dy <= 1; ++dy) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && nx < m && ny >= 0 && ny < n && hasMine(mineMap, nx, ny)) {
                        ++mineCount;
                    }
                }
            }
            mineMap[x][y] = '0' + mineCount; 
            printMap(mineMap);
        }
    }
    return 0;
}
