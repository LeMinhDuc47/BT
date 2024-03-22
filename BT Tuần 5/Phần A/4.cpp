#include <iostream>
#include <string>
using namespace std;
void arrayParameter(int arr[]) {
    cout << &arr << std::endl;
}

void stringParameter(string str) {
    cout << &str << endl;
}

int main() {
    int a[10];
    string s = "Hello, World!";

    cout  << &a << endl;
    cout<< &s << endl;

    arrayParameter(a);
    stringParameter(s);

    /* Nhận xét:
    - Khi mảng được truyền vào hàm như một tham số, nó được truyền theo cơ chế pass-by-reference. Điều này được chứng minh bằng việc địa chỉ của arr trong hàm arrayParameter giống với địa chỉ của a trong hàm main.
    - Khi string được truyền vào hàm như một tham số, nó được truyền theo cơ chế pass-by-value. Điều này được chứng minh bằng việc địa chỉ của str trong hàm stringParameter khác với địa chỉ của s trong hàm main.
    */
    return 0;
}
