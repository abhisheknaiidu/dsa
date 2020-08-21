class BST { 
public:

int value; 
BST *left; 
BST *right;

BST(int val);

BST &insert(int val);

 };


int findClosestValueInBst(BST *tree, int target);

int findClosestValueInBstHelper(BST *tree, int target, double closest)
// Average: O(log(n)) time | O(log(n)) space
// Worst: O(n) time | O(n) space
int findClosestValueInBst(BST *tree, int target) {

return findClosestValueInBstHelper(tree, target, DBL_MAX); 

}
int findClosestValueInBstHelper(BST *tree, int target, double closest) {

if(tree == NULL) return closest;

if (abs(target - closest) > abs(target - tree->value)) {
    closest = tree->value; 
}
if (target < tree->value && tree->left != NULL)  {
    return findClosestValueInBstHelper(tree->left, target, closest);
}

else if (target > tree->value && tree->right != NULL) {
    return findClosestValueInBstHelper(tree->right, target, closest);
}
else {
	return closest;
}
}

// Iterative Solution 
int findClosestValueInBst(BST *tree, int target) {
	return findClosestValueInBstHelper(tree, target, DBL_MAX)
}

int findClosestValueInBstHelper(BST *tree, int target, double closest) {
	BST *curr = tree;
	while(root!= NULL) {
		if(abs(target - closest) > abs(target - curr->value)) {
			closest = tree->value;
		}
		if(target > cur->value) {
			cur = cur->right;
		}
		else if(target < cur->value) {
			cur  = cur->left;
		}
		else {
			break;
		}
	}
	return closest;
}


