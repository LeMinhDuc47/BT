#include<bits/stdc++.h>
using namespace std;
const int N=10000;
bool a[N+1];
void check(){
	for(int i=0; i<=N; i++) a[i]=true;
	a[0]=a[1]=false;
	for(int i=2; i<=N; i++){
		if(a[i]==true){
			for(int j=i*i; j<=N; j+=i){
				a[j]=false;
			}
		}
	}
}
int main(){
	check();
	int n; cin >> n;
	for(int i=0; i<=n; i++){
		if(a[i]==true) cout << i << " ";
	}
	return 0;
}
