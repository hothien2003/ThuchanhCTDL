#include <iostream>
using namespace std;
//Cấu trúc dữ liệu Node được sử dụng để đại diện cho một nút trong cây nhị phân và bao gồm giá trị data của nút, con trỏ left trỏ tới cây con bên trái của nút hiện tại và con trỏ right trỏ tới cây con bên phải của nút hiện tại
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};
//Hàm inorder đệ qui được triển khai để duyệt cây theo thứ tự trung tâm để xuất ra các phần tử đã sắp xếp
void inorder(Node* node) {
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
//Hàm insert được sử dụng để chèn phần tử data vào cây root
void insert(Node*& root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return;
    }
    if (data < root->data)
        insert(root->left, data);
    else
        insert(root->right, data);
}
//Trong hàm main(), ta tạo một cây rỗng root. Sau đó, ta chèn từng phần tử của mảng arr vào cây bằng cách gọi hàm insert(). Cuối cùng, ta xuất ra các phần tử đã sắp xếp bằng cách duyệt cây theo thứ tự trung tâm sử dụng hàm inorder()
int main() {
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = NULL;
    for (int i = 0; i < n; i++)
        insert(root, arr[i]);

    inorder(root);

    return 0;
}
