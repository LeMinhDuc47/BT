#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void generate(vector<vector<int>>& b, int K) {
    srand(time(0));
    while (K > 0) {
        int x = rand() % b.size();
        int y = rand() % b[0].size();
        if (b[x][y] != -1) {
            b[x][y] = -1;
            K--;
        }
    }
}

int count(vector<vector<int>>& b, int x, int y) {
    int c = 0;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < b.size() && ny >= 0 && ny < b[0].size() && b[nx][ny] == -1)
            c++;
    }
    return c;
}

void prin(vector<vector<int>>& b) {
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b[0].size(); j++) {
            if (b[i][j] == -1)
                cout << "* ";
            else if (b[i][j] == 0)
                cout << ". ";
            else
                cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int m, n, K;
    cout << "Enter m, n, K: ";
    cin >> m >> n >> K;

    vector<vector<int>> b(m, vector<int>(n, 0));
    generate(b, K);

    while (true) {
        int x, y;
        cin >> x >> y;
        if (b[x][y] == -1) {
            cout << "YOU'RE DEAD!\n";
            print(b);
            break;
        } else {
            b[x][y] = count(b, x, y);
            print(b);
        }
    }

    return 0;
}
