#include <iostream>
using namespace std;

#define MAX 100 // kích thước của hàng đợi

class Queue {
private:
    int front, rear; // chỉ số phía trước và phía sau của hàng đợi
    int arr[MAX]; // mảng lưu trữ các phần tử hàng đợi
public:
    Queue() { // constructor, khởi tạo hàng đợi rỗng
        front = -1;
        rear = -1;
    }

    bool isFull() { // kiểm tra hàng đợi đã đầy chưa
        return rear == MAX - 1;
    }

    bool isEmpty() { // kiểm tra hàng đợi có rỗng không
        return front == -1 || front > rear;
    }

    void enqueue(int x) { // thêm phần tử vào cuối hàng đợi
        if (isFull()) {
            cout << "Hang doi da day!";
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = x;
        cout << "Da them phan tu " << x << " vao hang doi." << endl;
    }

    void dequeue() { // loại bỏ phần tử ở đầu hàng đợi
        if (isEmpty()) {
            cout << "Hang doi rong!";
            return;
        }
        int x = arr[front++];
        cout << "Da xoa phan tu " << x << " khoi hang doi." << endl;
    }

    void display() { // hiển thị các phần tử trong hàng đợi
        if (isEmpty()) {
            cout << "Hang doi rong!";
            return;
        }
        cout << "Cac phan tu trong hang doi la: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int arr[6] = {41, 23, 4, 14, 56, 1};
    for (int i = 0; i < 6; i++) {
        q.enqueue(arr[i]);
    }
    q.enqueue(55); // thêm phần tử 55 vào hàng đợi
    q.dequeue(); // loại bỏ phần tử đầu tiên (23) trong hàng đợi
    q.display(); // hiển thị các phần tử còn lại trong hàng đợi
    return 0;
}
