#include <iostream>
using namespace std;

class StackInt
{
public:
	struct Node 
	{
		int data;
		Node* next;
	};
	Node* top = nullptr;
public:
	void push(int value) {
		Node* newNode = new Node;
		newNode->data = value;
		if (isEmpity()) {
			newNode->next = nullptr;
			top = newNode;
		}
		else
		{
			newNode->next = top;
			top = newNode;
		}
	}

	void pop() {
		if (isEmpity())
			return;
		Node* temp = top;
		top = top->next;
		delete temp;
	}

	bool isEmpity() {
		if (top == nullptr)
			return true;
		else
			return false;
	}
	int topValue() {
		if (isEmpity())
			return -1;
		else
			return top->data;
	}
};

int main()
{
	StackInt s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.isEmpity())
	{
		cout << s.topValue() << endl;
		s.pop();
	}

	system("pause");
	return 0;
}
