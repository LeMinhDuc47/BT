#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >>a[i];
	int ma=-1e9, mi=1e9;
	int s=0, t=0;
	for(int i=0; i<n; i++){
		ma=max(ma,a[i]);
		mi=min(mi,a[i]);
		if(a[i]%2==0) s++;
		else t++;
	}
	cout << ma << mi << s << t;
}
