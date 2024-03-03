 C
3.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n+i-1; j++){
			if(j<=n-i) cout <<' ';
			else cout <<'*';
		}
		cout <<endl;
	}
}
4.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++){
	    cout <<' ';
	}
	    for(int j=1; j<=2*(n-i+1)-1; j++){
	    	cout <<'*';
		}
			cout <<endl;
	}
}
6.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin >> n >> m;
	for(int i=1; i<=n; i++){
		int kt=i;
		for(int j=1; j<=m; j++){
	    cout << kt << ' '; kt++;
	    if(kt>10) kt-=10;
	}
	cout <<endl;
}
}
7.
#include <iostream>
using namespace std;
int main() {
  int prev = -1, cur;
  while (cin >> cur) {
    if (cur == prev) {
      continue;
    }
    prev = cur;
    cout << cur << " ";
  }
  cout << "-1" << endl;
  return 0;
}
7.
#include <iostream>
using namespace std;
int main() {
  float a1, b1, c1, a2, b2, c2;
  cout << "Nhap he so a1, b1, c1: ";
  cin >> a1 >> b1 >> c1;
  cout << "nhap he so a2, b2, c2: ";
  cin >> a2 >> b2 >> c2;
  float D = a1 * b2 - a2 * b1;
  float Dx = c1 * b2 - c2 * b1;
  float Dy = a1 * c2 - a2 * c1;
  if (D == 0) {
    if (Dx == 0 && Dy == 0) {
      cout << "He co vo so nghiem" << endl;
    } else {
      cout << "He vo nghiem" << endl;
    }
  } else {
    float x = Dx / D;
    float y = Dy / D;
    cout << "He co nghiem duy nhat " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
  return 0;
}
16.
#include <iostream>
using namespace std;
int main() {
  int n;
  do {
    cout << "Nhap so tu 0...9: ";
    cin >> n;
    if (n >= 0 && n <= 9) {
      switch (n) {
        case 0:
          cout << "Vua nhap so khong" << endl;
          break;
        case 1:
          cout << "Vua nhap so mot" << endl;
          break;
        case 2:
          cout << "Vua nhap so hai" << endl;
          break;
        case 3:
          cout << "Vua nhap so ba" << endl;
          break;
        case 4:
          cout << "Vua nhap so bon" << endl;
          break;
        case 5:
          cout << "Vua nhap so nam" << endl;
          break;
        case 6:
          cout << "Vua nhap so sau" << endl;
          break;
        case 7:
          cout << "Vua nhap so bay" << endl;
          break;
        case 8:
          cout << "Vua nhap so tam" << endl;
          break;
        case 9:
          cout << "Vua nhap so chin" << endl;
          break;
      }
    } else {
      cout << "Gia tri nhap khong hop le" << endl;
    }
  } while (n >= 0 && n <= 9);

  return 0;
}