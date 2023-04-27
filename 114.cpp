#include <iostream>
using namespace std;
//Hàm swap được triển khai để hoán đổi giá trị của hai biến được truyền vào bởi con trỏ
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//Hàm insertionSort sắp xếp mảng arr kích thước n theo phương pháp sắp xếp chọn trực tiếp. Đầu tiên, chúng ta chọn một phần tử từ mảng đầu vào và đặt nó vào vị trí đúng trong mảng kết quả đã sắp xếp. Vị trí đúng là vị trí sao cho tất cả các phần tử bên trái đều đã được sắp xếp và nhỏ hơn phần tử đang được chọn, và tất cả các phần tử bên phải đều lớn hơn phần tử đang được chọn. Lặp lại quá trình này cho đến khi tất cả các phần tử đã được chọn và đặt vào vị trí đúng
void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
//Trong hàm main(), ta tạo một mảng có giá trị như yêu cầu đề bài, sau đó tính kích thước của mảng n. Tiếp theo, ta sắp xếp mảng arr bằng cách gọi hàm insertionSort(). Sau đó, ta xuất ra mảng đã sắp xếp để kiểm tra kết quả
int main() {
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Mang da sap xep la: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
