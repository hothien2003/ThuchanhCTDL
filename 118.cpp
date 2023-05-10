#include <iostream>
#include <string>
using namespace std;

#define MAX 100

class Stack
{
    int top;

    public:
        int a[MAX];

        Stack() {
            top = -1;
        }

        bool push(int x) {
            if(top >= (MAX - 1)) {
                cout << " Ngan xep da day!" << endl;
                return false;
            } else {
                a[++top] = x;
                cout << x << " Dua vao ngan xep!" << endl;
                return true;
            }
        }

        int pop() {
            if(top < 0) {
                cout << " Ngan xep rong!" << endl;
                return 0;
            } else {
                int x = a[top--];
                cout << x << " Xoa khoi ngan xep!" << endl;
                return x;
            }
        }

        void display() {
            cout << "Cac phan tu hien co trong ngan xep la: " << endl;
            for(int i = top; i >= 0; i--) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    Stack myStack;
    int arr[] = {41, 23, 4, 14, 56, 1};

    for(int i = 0; i < 6; i++) {
        myStack.push(arr[i]);
    }

    cout << "Vi tri tren cung cua ngan xep la: " << myStack.pop() << endl;

    myStack.display();

    return 0;
}
