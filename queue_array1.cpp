#include <iostream>
#include <string>
using namespace std;

const int capcity = 100;
struct Queue
{
    int arr[capcity];
    int front = -1;
    int rear = -1;
    
    bool isEmpty() {
        if (front == -1 && rear == -1) return true;
        else return false;
    }

    bool isFull() {
        if (rear == capcity - 1) return true;
        else return false;
    }

    void enqueue(int val) {
        if (isFull()) return;
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = val;
    }
        void dequeue() {
            if (isEmpty()) return;
            else if (front == rear)
            {
                front = rear = -1;
            }
            else front++;
            
        }
        int front_val() {
            if (isEmpty()) return -1;
            else return arr[front];
        }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    while (!q.isEmpty())
    {
        cout << q.front_val() << endl;
        q.dequeue();
    }
    system("pause");
    return 0;
}

