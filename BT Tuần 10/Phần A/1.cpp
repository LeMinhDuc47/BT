#include<bits/stdc++.h>
using namespace std;
char* concat(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char* result = new char[len1 + len2 + 1];
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main() {
    const char* s1 = "Hello";
    const char* s2 = "World";
    char* s = concat(s1, s2);
    cout << s <<endl;
    delete[] s;
    return 0;
}
