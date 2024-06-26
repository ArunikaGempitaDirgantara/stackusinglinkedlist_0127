#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

//Stack class
class Stack {
private:
	Node* top; //Pointer to the top node of the stack

public:
	Stack() {
		top = NULL; //Initialize the stack with a null top pointer
	}

	//Push operation: Insert an element onto the top of the stack
	int push(int value) {
		Node* newNode = new Node(); //1. Allocate memory for the new node
		newNode->data = value; //2. Assign value
		newNode->next = top; //3. Set the next pointer of the new node to the current top node
		top = newNode; //4. Update the top pointer to the new node
		cout << "Push value: " << value << endl;
		return value;
	}

	//Pop operation: Remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Popped value: " << top->data << endl;
	}

	bool isEmpty() {
		return top == NULL; //Return true if the top pointer is NULL, indicating an empty stack
	}
	};