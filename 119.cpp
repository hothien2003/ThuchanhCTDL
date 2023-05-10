#include <iostream>
using namespace std;

#define MAX_QUEUE_SIZE 100 // định nghĩa kích thước tối đa của hàng đợi

class Queue {
    int queue[MAX_QUEUE_SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1; // khởi tạo giá trị -1 cho front và rear để biểu thị hàng đợi trống
    }

    bool isFull() {
        return rear == MAX_QUEUE_SIZE - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    // thêm một phần tử vào hàng đợi
    void enQueue(int data) {
        if (isFull()) {
            cout << "Hang doi day!\n";
        } else {
            rear++;
            queue[rear] = data;
            if (front == -1) {
                front = 0;
            }
        }
    }

    // lấy một phần tử ra khỏi hàng đợi
    int deQueue() {
        if (isEmpty()) {
            cout << "Hang doi rong!\n";
            return -1; // trả về giá trị -1 để biểu thị hàng đợi rỗng
        } else {
            int data = queue[front];
            front++;
            return data; // trả về dữ liệu của phần tử bị loại bỏ khỏi hàng đợi
        }
    }

    // hiển thị toàn bộ hàng đợi
    void show() {
        if (isEmpty()) {
            cout << "Hang doi rong!\n";
        } else {
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    // nhập queue 6 phần tử { 41, 23, 4, 14, 56, 1 }
    q.enQueue(41);
    q.enQueue(23);
    q.enQueue(4);
    q.enQueue(14);
    q.enQueue(56);
    q.enQueue(1);

    // thêm vào phần tử {55}
    q.enQueue(55);

    // loại bỏ phần {23}
    q.deQueue();

    // in hàng đợi sau khi thêm và bỏ
    q.show();

    return 0;
}
