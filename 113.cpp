#include <iostream>
using namespace std;
//Hàm swap được triển khai để hoán đổi giá trị của hai biến được truyền vào bởi con trỏ
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//Hàm selectionSort sắp xếp mảng arr kích thước n theo phương pháp sắp xếp đổi chỗ trực tiếp. Đầu tiên, tìm giá trị nhỏ nhất trong mảng chưa được sắp xếp, sau đó đổi chỗ giá trị nhỏ nhất đó với phần tử đầu tiên của mảng chưa được sắp xếp. Lặp lại quá trình này cho tới khi mảng được sắp xếp hoàn toàn
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}
//Trong main(), ta tạo một mảng có giá trị như yêu cầu đề bài, sau đó tính kích thước của mảng n. Tiếp theo, ta sắp xếp mảng arr bằng cách gọi hàm selectionSort(). Sau đó, ta xuất ra mảng đã sắp xếp để kiểm tra kết quả
int main() {
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Mang da sap xep : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
