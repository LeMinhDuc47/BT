#include<iostream>
using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point p;
    cout << &p << endl;
    cout << &(p.x) << endl;
    cout << &(p.y) << endl;
    return 0;
}
//địa chỉ của biến p sẽ bằng địa chỉ của trường x.Địa chỉ của trường y sẽ lớn hơn địa chỉ của x.