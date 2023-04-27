#include <iostream>
using namespace std;
//Hàm swap được triển khai để hoán đổi giá trị của hai biến được truyền vào bởi con trỏ
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//Hàm partition sử dụng phân hoạch để sắp xếp các phần tử trong mảng. Một pivot được chọn từ cuối mảng và các phần tử nhỏ hơn pivot được đưa vào bên trái pivot, và các phần tử lớn hơn pivot được đưa vào bên phải pivot. Hàm partition trả về chỉ số của phần tử pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
//Hàm quickSort sắp xếp mảng arr theo phương pháp quick sort. Đầu tiên, phân hoạch mảng và sau đó đệ qui sắp xếp trái và phải của mảng chia thành các mảng con
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
//Trong hàm main(), ta tạo một mảng có giá trị như yêu cầu đề bài, sau đó tính kích thước của mảng n. Tiếp theo, ta sắp xếp mảng arr bằng cách gọi hàm quickSort(). Sau đó, ta xuất ra mảng đã sắp xếp để kiểm tra kết quả
int main() { 
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Mang da sap xep la: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
