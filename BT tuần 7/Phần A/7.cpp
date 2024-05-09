#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 3) {
        return 1;
    }
    char* substring = argv[1];
    char* str = argv[2];
    int count = 0;
    char* p = str;
    while ((p = strstr(p, substring)) != NULL) {
        count++;
        p++;
    }
    cout << substring <<  count << str <<endl;
    return 0;
}
