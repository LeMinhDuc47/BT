#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x, y;
};
void nhap(Point &p){
	cin >> p.x >> p.y;
}
void print(Point p){
	cout <<'('<<p.x<<','<<p.y<<')';
}
int main(){
	Point p;
	nhap(p);
	print(p);
}