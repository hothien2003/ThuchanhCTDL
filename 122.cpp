#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    if (n == 0) {
        return; // điều kiện dừng của đệ quy
    } else {
        printArray(arr, n - 1); // gọi đệ quy trên n - 1 phần tử còn lại
        cout << arr[n - 1] << " "; // xuất phần tử cuối cùng trong mảng
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Cac phan tu trong mang la: ";
    printArray(arr, n);

    return 0;
}
