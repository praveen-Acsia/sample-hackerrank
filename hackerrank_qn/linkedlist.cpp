#include<iostream>
#include<math.h>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node() {
		data = 0;
		next = NULL;
	}

	Node(int data) {

		this->data = data;
		this->next = NULL;
	}
};

class linkedList {
	Node* head;

public:

	linkedList() { head = NULL; }

	Node* getHead() {
		return head;
	}

	void insertNode(int data) {
		Node* newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			return;
		}

		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}

	void printlst() {

		Node* temp = head;
		if (head == NULL) {
			cout << "list is empty." << endl;
			return;
		}
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void eraseNode(int nodeoffset) {

		Node* temp = head;
		Node* temp1 = NULL;
		int listlen = 0;

		if (temp->next == NULL) {
			cout << "empty list." << endl;
			return;
		}
		while (temp->next != NULL) {
			temp = temp->next;
			listlen++;
		}
		if (nodeoffset > listlen) {
			cout << "out of range." << endl;
		}
		temp = head;
		if (nodeoffset == 1) {
			head = head->next;
			delete temp;
			return;
		}
		while (nodeoffset-- > 1) {
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = temp->next;
		delete temp;
	}
};

int bintoint(linkedList& llist, int len) {

	Node* temp = llist.getHead();
	long num = 0;

	while (temp != NULL) {

		num += (temp->data * pow(2, --len));
		temp = temp->next;
	}
	return num;
}
int main() {
	linkedList llist;
	int ele;
	int size;

	cout << "enter the size of the binary : ";
	cin >> size;
	cout << "enter the binary : ";
	for (int i = 0; i < size; i++) {
		cin >> ele;
		llist.insertNode(ele);
	}

	cout << bintoint(llist, size);
}
