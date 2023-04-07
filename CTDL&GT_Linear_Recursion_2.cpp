#include <stdio.h>
 
int GiaiThua(int n) {
    // Trường hợp người dùng nhập n == 1 thì thoát khỏi đệ quy
    if (n == 1)
        return 1;
    else
    //ngược lại thì gọi hàm đệ quy với tham số n - 1
        return (n * GiaiThua(n - 1));
}
 
int main(void) {
  //khai báo biến n là số cần tính giai thừa
    int n;
  //yêu cầu người dùng nhập vào số n cần tính giai thừa
    printf("Nhập số nguyên dượng n cần tính giai thừa: ");
    scanf("%d", &n);
    //hiển thị kết quả sau khi tính bằng cách gọi hàm tính giai thừa
    printf("Giai thừa của %d là: %d",n,GiaiThua(n));
 
    printf("\n---------------------------------\n");
    printf("Chương trình này được đăng tại codehow.net");
    return 0;  
}
