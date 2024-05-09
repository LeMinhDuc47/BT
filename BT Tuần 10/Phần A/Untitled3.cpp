char* a = new char[10]; // cấp phát bộ nhớ
char* c = a + 3; // c không được cấp phát bởi new
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c; // lỗi ở đây: c không được cấp phát bởi new
cerr << "a after deleting c:" << "-" << a << "-" << endl; // không xác định sau khi c đã bị delete
