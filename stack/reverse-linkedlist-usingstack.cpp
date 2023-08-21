#include <iostream>
#include <stack>
using namespace std;
struct Node {
	int data;
	Node* next;
};
Node* head;
void reverse() {
	if (head == NULL) {
		return;
	}
	else {
		stack <struct Node*> s;
		Node* temp = head;
		while (temp != NULL) {
			s.push(temp);
			temp = temp->next;
		}
		Node* temp2 = s.top();
		head = temp2;
		s.pop();
        cout<<"reversed";
		while (!s.empty()) {
			temp2->next = s.top();
			s.pop();
			temp2 = temp2->next;
		}
		temp2->next = NULL;
	}
}
void Insert(int data) { //Insert an integer at the beginning of list
	Node* temp1 = new Node;
	temp1->data = data;
	temp1->next = head;
	head = temp1;
}
void print() {
	Node* temp = head;
cout<<"the list is:";
	while (temp != NULL) {
		cout << temp->data <<" ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	head = NULL;
	Insert(5);
	Insert(8);
	Insert(6);
	print();
	reverse();
	print();
} 