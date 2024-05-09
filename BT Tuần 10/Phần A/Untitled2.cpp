int* p = new int; 
int* p2 = p; 
*p = 10;
delete p; 

// Lỗi: sau khi giải phóng, p và p2 trở thành con trỏ treo 
*p2 = 100; // Gán giá trị cho vùng nhớ đã được giải phóng gây ra lỗi undefined behavior
cout << *p2; // In giá trị tại vùng nhớ đã được giải phóng gây ra lỗi undefined behavior

// Lỗi: giải phóng vùng nhớ đã được giải phóng trước đó gây ra lỗi double free
delete p2;
