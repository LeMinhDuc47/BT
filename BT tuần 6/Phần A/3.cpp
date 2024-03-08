#include<iostream>
using namespace std;

struct Point {
    double x, y;
};

Point mid_point(const Point &p1, const Point &p2) {
	Point res;
	res.x=(p1.x + p2.x) / 2;
	res.y=(p1.y + p2.y) / 2;
    return res;
}

int main() {
    Point p1{1, 2}, p2{3, 4};
    Point mid = mid_point(p1, p2);
    cout << '('<< mid.x << ", " << mid.y << ")" << endl;
    return 0;
}
