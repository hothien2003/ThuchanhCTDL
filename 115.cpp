#include <iostream>
using namespace std;
//Hàm swap được triển khai để hoán đổi giá trị của hai biến được truyền vào bởi con trỏ
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//Hàm bubbleSort sắp xếp mảng arr kích thước n theo phương pháp sắp xếp nổi bọt. Đầu tiên, nó so sánh phần tử thứ nhất và thứ hai, nếu phần tử thứ nhất lớn hơn phần tử thứ hai, thì đổi chỗ chúng. Sau đó nó so sánh phần tử thứ hai và thứ ba, và tiếp tục quá trình này cho đến khi so sánh phần tử thứ n - 1 và thứ n. Lặp lại quá trình này cho đến khi không có bất kỳ đổi chỗ nào được thực hiện
void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
//Trong hàm main(), ta tạo một mảng có giá trị như yêu cầu đề bài, sau đó tính kích thước của mảng n. Tiếp theo, ta sắp xếp mảng arr bằng cách gọi hàm bubbleSort(). Sau đó, ta xuất ra mảng đã sắp xếp để kiểm tra kết quả
int main() {
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Mang da sap xep la: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
