#include <iostream>
using namespace std;

int countPositive(float arr[], int n) {
    if (n == 0) {
        return 0; // điều kiện dừng của đệ quy
    } else {
        int count = countPositive(arr, n - 1); // gọi đệ quy trên n - 1 phần tử còn lại
        if (arr[n - 1] > 0) {
            count++; // nếu phần tử cuối cùng là giá trị dương, tăng biến đếm lên 1
        }
        return count;
    }
}

int main() {
    float arr[] = {-1.5, 2.3, 0, -4.5, 6.7, 8.0, -9.2, 10.1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = countPositive(arr, n);
    cout << "So luong gia tri duong trong mang la: " << count << endl;

    return 0;
}
