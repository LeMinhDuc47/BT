#include <iostream>
using namespace std;
bool check(int n){
	int s=n;
	int c=0;
	while(n){
		c=(c*10+(n%10));
		n/=10;
	}
	if(s==c) return true;
	return false;
}
int main() {
    int n; cin >>n;
    while(n--){
    	int dem=0;
    	int a,b; cin >> a >> b;
    	for(int i=a; i<=b; i++){
    		if(check(i)) dem++;  
		}
		cout <<dem<<endl;
	}
    
}
