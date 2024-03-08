#include<bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

void passByValue(Point p) {
   cout << &p << endl;
}

void passByReference(Point &p) {
    cout << &p << endl;
}

int main() {
    Point p{10, 15};
    cout << &p << endl;
    passByValue(p);
    passByReference(p);
    return 0;
}
