#include <iostream>
using namespace std;

int sumEven(int arr[], int n) {
    if (n == 0) {
        return 0; // điều kiện dừng của đệ quy
    } else {
        int sum = sumEven(arr, n - 1); // gọi đệ quy trên n - 1 phần tử còn lại
        if (arr[n - 1] % 2 == 0) {
            sum += arr[n - 1]; // nếu phần tử cuối cùng là số chẵn, thêm vào tổng
        }
        return sum;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = sumEven(arr, n);
    cout << "Tong cac so chan trong mang la: " << sum << endl;

    return 0;
}
