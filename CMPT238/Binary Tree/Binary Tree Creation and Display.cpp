#include <iostream>

struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int i, TreeNode* p = nullptr, TreeNode* q = nullptr) {
		data = i;
		left = p;
		right = q;
	}
};

void insert(TreeNode*&, int);
void displayInOrder(TreeNode*);
void displayPreOrder(TreeNode*);
void displayPostOrder(TreeNode*);
void dbst(TreeNode*&);
void makeDeletion(TreeNode*);
void remove(TreeNode*& root, int num);
bool search(TreeNode*, int);

int main() {
	TreeNode* root = nullptr;
	insert(root, 10);
	insert(root, 8);
	insert(root, 20);
	insert(root, 2);
	insert(root, 3);
	insert(root, 30);
	displayInOrder(root);
	std::cout << "\n";
	displayPreOrder(root);
	std::cout << "\n";
	displayPostOrder(root);
	std::cout << std::endl;
	std::cout << std::endl;
	if (search(root, 20)) {
		std::cout << "The value is in the binary tree.";
	}
	dbst(root);
}

void insert(TreeNode*& p, int i)
{
	if (p == nullptr) {
		p = new TreeNode(i);
		return;
	}

	if (i < p->data) {
		insert(p->left, i);
		return;
	}
	if (i == p->data) {
		return;
	}
	if (i > p->data) {
		insert(p->right, i);
		return;
	}
}
void displayInOrder(TreeNode* root) {
	if (root) {
		displayInOrder(root->left);
		std::cout << root->data << " ";
		displayInOrder(root->right);
	}
}
void displayPreOrder(TreeNode* root) {
	if (root) {
		std::cout << root->data << " ";
		displayPreOrder(root->left);
		displayPreOrder(root->right);
	}
}
void displayPostOrder(TreeNode* root) {
	if (root) {
		displayPostOrder(root->left);
		displayPostOrder(root->right);
		std::cout << root->data << " ";
	}
}

bool search(TreeNode* root, int value) {
	TreeNode* temp = root;
	while (temp) {
		if (temp->data == value) {
			return true;
		}
		else if(value < temp->data){
			temp = temp->left;
		}
		else {
			temp = temp->right;
		}
	}
	return false;
}
void dbst(TreeNode*& root) {
	if (root) {
		dbst(root->left);
		dbst(root->right);
		delete root;
	}
}

void remove(TreeNode*& root, int num) {
	if (root == nullptr) {
		return;
	}
	if (num < root->data) {
		remove(root->left, num);
	}
	else if (num > root->data) {
		remove(root->right, num);
	}
	else {
		makeDeletion(root);
	}
}

void makeDeletion(TreeNode* root) {
	TreeNode* temp = root;
	if (root->left == nullptr) {
		root = root->right;
	}else if(root->right == nullptr){
		root = root->left;
	}
	else {
		TreeNode* attachPoint = root->right;
		while (attachPoint) {
			attachPoint = attachPoint->left;
		}
		attachPoint = root->left;
		root = root->right;
	}
	delete temp;
}
