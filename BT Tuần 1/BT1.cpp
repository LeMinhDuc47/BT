 B
14.
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a;
  if (a >= 50) {
    b = 0;
  } else {
    b = 1;
  }
  cout << b << endl;
  return 0;
}
15.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	string f[n];
	f[0]='a'; f[1]='b';
	for(int i=2; i<n; i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(string x:f) cout << x <<' ';
}
17.
#include <iostream>
using namespace std;
int main() {
  int year;
  cin >> year;
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  return 0;
}
23.
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;

  int max = (a + b + abs(a - b)) / 2;

  cout << max << endl;

  return 0;
}
24.
	#include <iostream>
	#include <stdio.h>
	
	using namespace std;	
	int main() {
	  int day, month, year;
	  cin >> day >> month >> year;	
	  int d = (day + ((month + 1) * 26) / 10 + year + year / 4 + year / 400 - year / 100) % 7
	  switch (d) {
	    case 0:
	      cout << "Monday" << endl;
	      break;
	    case 1:
	      cout << "Tuesday" << endl;
	      break;
	    case 2:
	      cout << "Wednesday" << endl;
	      break;
	    case 3:
	      cout << "Thursday" << endl;
	      break;
	    case 4:
	      cout << "Friday" << endl;
	      break;
	    case 5:
	      cout << "Saturday" << endl;
	      break;
	    case 6:
	      cout << "Sunday" << endl;
	      break;
	  }
	
	  return 0;
 C
28.
#include <iostream>
using namespace std;
int main() {
  for (int i = 0; i < 24; i++) {
    if (i == 0) {
      cout << "12 midnight" << endl;
    } else if (i < 12) {
      cout << i << "am" << endl;
    } else if (i == 12) {
      cout << "12 noon" << endl;
    } else {
      cout << i - 12 << "pm" << endl;
    }
  }
  return 0;

