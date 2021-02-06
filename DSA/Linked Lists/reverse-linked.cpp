#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct Node {
	int data;
	Node* next;
	};

Node* head;

void insert(int x, int n) {
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if(n == 1) {
		temp->next = head;
		head = temp;
		return;
	}
	Node* temp1 = head;
	for(int i=1; i<n-1; i++) {
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}

void print() {
	Node* temp2=head;
	while(temp2 != NULL) {
		cout << temp2->data << " ";
		temp2 = temp2->next; 
	}
	cout << endl;
}

void reverseIterative() {
	Node *dummy = NULL;

	while(head != NULL) {
		Node *Next = head->next;
		head->next = dummy;
		dummy = head;
		head = Next;
	}
	head = dummy;
}

void reverseRecursive(Node* p) {
	if(p->next == NULL) {
		head = p;
		return;
	}
	reverseRecursive(p->next);
	Node *q = p->next;
	q->next = p;
	p->next = NULL;
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	head = NULL;
	insert(1,1);
	insert(2,2);
	insert(3,3);
	insert(4,4);
	print();
	reverseIterative();
	print();
	// reverseRecursive(head);
	print();

   return 0;
}