#include <iostream>
using namespace std;
//Hàm linearSearch cần truyền vào một mảng arr kích thước n, và giá trị cần tìm x. Hàm này sẽ duyệt qua từng phần tử trong mảng để tìm giá trị x. Nếu tìm thấy thì trả về vị trí của giá trị cần tìm trong mảng. Nếu không tìm thấy thì trả về giá trị -1
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    
    return -1;
}
//Trong hàm main(), tạo một mảng có giá trị như yêu cầu đề bài, sau đó tính kích thước của mảng n. Tiếp theo, ta tìm kiếm giá trị x = 10 trong mảng bằng cách gọi hàm linearSearch(). Nếu trả về giá trị -1 thì xuất ra dòng chữ "Phan tu khong co trong mang", ngược lại thì xuất ra vị trí của phần tử cần tìm trong mảng
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = linearSearch(arr, n, x);
    
    (result == -1) ? cout << "Phan tu khong co trong mang\n"
                   : cout << "Phan tu nam o vi tri: " << result << endl;
    
    return 0;
}
