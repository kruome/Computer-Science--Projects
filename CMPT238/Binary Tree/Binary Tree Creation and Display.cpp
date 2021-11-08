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

int main() {
	TreeNode* root = nullptr;
	insert(root, 10);
	insert(root, 8);
	insert(root, 2);
	insert(root, 3);
	insert(root, 30);
	insert(root, 20);
	displayInOrder(root);
	std::cout << "\n";
	displayPreOrder(root);
	std::cout << "\n";
	displayPostOrder(root);
}

void insert(TreeNode* &p, int i)
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
	if(i > p->data) {
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
