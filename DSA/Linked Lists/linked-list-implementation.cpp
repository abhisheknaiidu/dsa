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

void insert(int x, int pos) {
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if(pos == 1) {
		temp->next = head;
		head = temp;
		return;
	}
	Node *temp1 = head;
	for(int i=1; i<pos-1; i++) {
		temp1 = temp1->next;
	}
	temp->next = temp1->next;
	temp1->next = temp;
}

void del(int pos) {
	Node *temp3 = head;
	if(pos == 1) {
		head = temp3->next;
		free(temp3);
		return;
	}
	for(int i=1; i<pos-1; i++) {
		temp3 = temp3->next;
	}
	Node *temp4 = temp3->next;
	temp3->next = temp4->next;
	free(temp4);
	// without using extra variable
	//	temp3->next = temp3->next->next;
}


void print() {
	Node *temp2 = head;
	while(temp2 != NULL) {
		cout << temp2->data << " ";
		temp2=temp2->next;
		cout << endl;
	}
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();
	head = NULL;
	insert(2,1);
	insert(4,2);
	insert(3,1);
	del(2);
	print();

   return 0;
}