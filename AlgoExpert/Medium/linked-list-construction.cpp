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

void del(int d) {
	Node* temp3 = head;
	if(d == 1) {
		head = temp3->next;
		free(temp3); // free the memory which is being pointed to this variable temp3
	    return;
	}
	for(int i=1; i<d-1; i++) {
		temp3 = temp3->next;
	}
	Node* temp4 = temp3->next;
	temp3->next = temp4->next;
	free(temp4);
}

void print() {
	Node* temp2=head;
	while(temp2 != NULL) {
		cout << temp2->data << " ";
		temp2 = temp2->next; 
	}
	cout << endl;
}



int main(int argc, char* argv[]) {
	abhisheknaiidu();

	head = NULL; // empty list

		insert(2,1); // 2
		insert(4,2); // 2,4
		insert(3,1); // 3,2,4
		insert(6,4); // 3,2,4,6
		print();
        // For Deleteing, we can either -
		// 1. fix the links - it's not alone favourable because node as we know node allocates
		// space what we call dyanamic memory/ heap section of the memory.
		// 2. free the space 
		int x = 2;

		del(4);
		print();



   return 0;
}