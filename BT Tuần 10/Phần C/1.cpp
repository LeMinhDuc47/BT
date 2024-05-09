#include<bits/stdc++.h>
using namespace std;
// Hàm đảo xâu
char* reverse(const char* a) {
    int n = strlen(a);
    char* result = new char[n + 1];
    for (int i = 0; i < n; i++) {
        result[i] = a[n - i - 1];
    }
    result[n] = '\0';
    return result;
}

// Hàm xóa kí tự
char* delete_char(const char* a, char c) {
    int n = strlen(a);
    char* result = new char[n + 1];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != c) {
            result[j++] = a[i];
        }
    }
    result[j] = '\0';
    return result;
}

// Hàm độn phải
char* pad_right(const char* a, int n) {
    int length = strlen(a);
    char* result = new char[n + 1];
    strcpy(result, a);
    if (length < n) {
        for (int i = length; i < n; i++) {
            result[i] = ' ';
        }
    }
    result[n] = '\0';
    return result;
}

// Hàm độn trái
char* pad_left(const char* a, int n) {
    int length = strlen(a);
    char* result = new char[n + 1];
    for (int i = 0; i < n; i++) {
        if (i < n - length) {
            result[i] = ' ';
        } else {
            result[i] = a[i - (n - length)];
        }
    }
    result[n] = '\0';
    return result;
}

// Hàm cắt xâu
char* truncate(const char* a, int n) {
    char* result = new char[n + 1];
    strncpy(result, a, n);
    result[n] = '\0';
    return result;
}

// Hàm lọc trái
char* trim_left(const char* a) {
    while (*a == ' ') {
        a++;
    }
    char* result = new char[strlen(a) + 1];
    strcpy(result, a);
    return result;
}

// Hàm lọc phải
char* trim_right(const char* a) {
    int n = strlen(a) - 1;
    while (a[n] == ' ') {
        n--;
    }
    char* result = new char[n + 2];
    strncpy(result, a, n + 1);
    result[n + 1] = '\0';
    return result;
}
