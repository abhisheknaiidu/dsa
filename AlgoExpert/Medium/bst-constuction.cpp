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

struct BstNode
	{
		int data;
		BstNode* left;
		BstNode* right;
	};

	BstNode* rootptr = NULL;

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode(); // returns back the address the new node
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode; // address of newNode
}

void insert(BstNode* &rootptr, int data) {
	if(rootptr == NULL) {
		rootptr = GetNewNode(data);
		return;
	}
	else if(data < rootptr->data) {
		insert(rootptr->left,data);
	}
	else {
		insert(rootptr->right, data);
	}
	// (data > rootptr->data)? insert(rootptr->right,data) : insert(rootptr->left, data);
}

void min(BstNode* &rootptr) {
	while(rootptr->left != NULL) {
		rootptr = rootptr->left;
	}
	// rootptr = rootptr->right;
}

bool search(BstNode* rootptr, int data) {
	// cout << data << endl;
	if(rootptr == NULL) return false;
	if(rootptr->data == data) return true;
	else if(data <= rootptr->data) return search(rootptr->left,data);
	else return search(rootptr->right, data);
}

void Delete(BstNode* &rootptr, int data) {
	if(rootptr == NULL ) return;
	else if(data < rootptr->data) Delete(rootptr->left, data);
	else if(data > rootptr->data) Delete(rootptr->right, data);
	else {  // Wohoo, we finally found the node, now we can delete it 😈
		// Case 1: No Child

		if(rootptr->left == NULL && rootptr->right == NULL)  {
			delete rootptr;
			rootptr = NULL;
		}
		// Case 2: One Child
		else if(rootptr->left == NULL) {
			BstNode* temp = rootptr;
			// delete rootptr;
			rootptr = rootptr->left;
			delete temp;
		}
		else if(rootptr->right == NULL) {
			BstNode* temp = rootptr;
			rootptr = rootptr->right;
			delete temp;
		}
		// Case 3: Two Children
		else {
			BstNode* temp = min(rootptr->right);
			rootptr->data = temp->data;
			Delete(rootptr->right, temp->data);
		}
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

    insert(rootptr, 5);
    insert(rootptr, 3);
    insert(rootptr, 1);
    insert(rootptr,10); 
	insert(rootptr,4); 
	insert(rootptr,11); 
	int n;
    cin >> n;
    if(search(rootptr, n) == true) cout << "Found" << endl;
    else cout << "Not Found";
    Delete(rootptr, n)

    // search(rootptr, 20);

// Iterative Version:
//    Node *newNode(int key)
// {
//     Node *node = new Node;
//     node->data = key;
//     node->left = node->right = nullptr;

//     return node;
// }

// void insert(Node **headref, int data)
// {

//     if (*headref == NULL)
//     {
//         *headref = newNode(data);
//         return;
//     }

//     Node *travptr = *headref;
//     Node *parentNode = NULL;

//     while (travptr != NULL)
//     {
//         parentNode = travptr;
//         travptr = (data > travptr->data) ? travptr->right : travptr->left;
//     }

//     if (data > parentNode->data)
//         parentNode->right = newNode(data);

//     else
//         parentNode->left = newNode(data);
// }

// bool find(Node **headref, int data)
// {
//     Node *travptr = *headref;

//     if (data == (*headref)->data)
//         return true;

//     while (travptr != NULL && travptr->data != data)
//         travptr = (data > travptr->data) ? travptr->right : travptr->left;

//     if (travptr == NULL)
//     {
//         return false;
//     }
//     return true;
// }

   return 0;
}