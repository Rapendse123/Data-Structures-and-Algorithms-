//#include <iostream>
//
//using namespace std;
//
//class Queue {
//private:
//    int front, rear;
//    int arr[5];
//
//public:
//
//    Queue() {
//        front = -1;
//        rear = -1;
//        for (int i = 0; i < 5; i++) {
//            arr[i] = 0;
//        }
//    }
//
//    bool isEmpty() {
//        if (front == -1 && rear == -1) {
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    bool isFull() {
//        if (rear == 4) {
//            return true;
//        } else {
//            return false;
//        }
//    }
//
//    void enqueue() {
//        int data=0;
//        if (isFull()) {
//            cout << "Queue is full" << endl;
//        } else if (isEmpty()) {
//            cout<<"Enter data value to enqueue:"<<endl;
//            cin>>data;
//            front = rear = 0;
//            arr[rear] = data;
//            cout << "data enqueued" << endl;
//        } else {
//            cout<<"Enter data value to enqueue:"<<endl;
//            cin>>data;
//            rear++;
//            arr[rear] = data;
//            cout << "data enqueued" << endl;
//        }
//    }
//
//    int dequeue() {
//        int x = 0;
//        if (isEmpty()) {
//            cout << "Queue is empty" << endl;
//        }else if (front == rear) {
//            x = arr[front];
//            arr[front] = 0;
//            front = rear = -1;
//            cout << "data dequeued of value:" << x << endl;
//        } else {
//            x = arr[front];
//            arr[front] = 0;
//            front++;
//            cout << "data dequeued of value:" << x << endl;
//        }
//        return x;
//    }
//
//    int count() {
//        if (!isEmpty()) {
//            return rear - front + 1;
//        } else {
//            return 0;
//        }
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty" << endl;
//        } else {
//            for (int i = front; i <= rear; i++) {
//                cout << arr[i] << " ";
//            }
//        }
//        cout << endl;
//    };
//
//
//};
//
//int main() {
//
//    Queue q;
//    int ch;
//
//    while (true) {
//        cout << "Enter your choice:" << endl;
//        cout << "Press: \n1 enqueue \n2 dequeue \n3 isEmpty \n4 isFull \n5 count \n6 display \n7 To exit" << endl;
//        cin >> ch;
//        switch (ch) {
//            case 1:;
//                q.enqueue();
//                cout << endl;
//                break;
//            case 2:
//                q.dequeue();
//                cout << endl;
//                break;
//            case 3:
//                if(q.isEmpty()){
//                    cout<<"Queue is empty"<<endl;
//                } else{
//                    cout<<"Queue is not empty"<<endl;
//                }
//                cout << endl;
//                break;
//            case 4:
//                if(q.isFull()){
//                    cout<<"Queue is Full"<<endl;
//                } else{
//                    cout<<"Queue is not full"<<endl;
//                }
//                cout << endl;
//                break;
//            case 5:
//                cout<<"count:"<<q.count();
//                cout << endl;
//                break;
//            case 6:
//                q.display();
//                cout << endl;
//                break;
//            case 7:
//                _Exit(0);
//            default:
//                cout << "Enter a valid choice" << endl;
//                break;
//        }
//    }
//}