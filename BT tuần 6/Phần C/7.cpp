#include<bits/stdc++.h>
using namespace std;
int print(int n){
	for(int i=1; i<=n; i++){
		for(int j=1;j<=n-1; j++){
			cout <<" ";
		}
		for(int j=1; j<=2*i-1; j++){
			cout <<"*";
		}
		cout <<endl;
	}
}
int main(){
	int n; cin >> n;
	print(n);
}