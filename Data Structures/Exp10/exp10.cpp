#include <iostream>
using namespace std;

class TreeNode{
	public:
		int data;
		TreeNode *left;
		TreeNode *right;
		TreeNode (int value){
			data = value;
			left = right = NULL;
		}
};

class BST{
	private:
		TreeNode *root;
	public:
		BST(){
			root = NULL;
		}
		
		void insert(int value){
			root = insertRecursive(root, value);
		}
		
		void preOrderTraversal(){
			preOrderRecursive(root);
		}
		
		void inOrderTraversal(){
			inOrderRecursive(root);
		}
		
		void postOrderTraversal(){
			postOrderRecursive(root);
		}
		
		int countNodes(){
			return countNodesRecursive(root);
		}
		
	private:
		TreeNode* insertRecursive(TreeNode* root, int value){
			if (root==NULL){
				return new TreeNode(value);
			}
			
			if(value<root->data){
				root->left = insertRecursive(root->left,value);
			}
			else if(value>root->data){
				root->right = insertRecursive(root->right,value);
			}
			return root;
		}
		
		void preOrderRecursive(TreeNode* root){
			if(root!=NULL){
				cout<<root->data<<" ";
				preOrderRecursive(root->left);
				preOrderRecursive(root->right);
			}
		}
		
		void inOrderRecursive(TreeNode* root){
			if(root!=NULL){
				inOrderRecursive(root->left);
				cout<<root->data<<" ";
				inOrderRecursive(root->right);
			}
		}
		
		void postOrderRecursive(TreeNode* root){
			if(root!=NULL){
				postOrderRecursive(root->left);
				postOrderRecursive(root->right);
				cout<<root->data<<" ";
			}
		}
		
		int countNodesRecursive(TreeNode* root){
			if(root==NULL){
				return 0;
			}
			
			return 1 + countNodesRecursive(root->left) + countNodesRecursive(root->right);
		}
};

int main(){
	BST bst;
	
	int size;
    cout << "How many numbers do you want to insert? :";
    cin >> size;

    for (int i = 0; i < size; i++) {
        int element;
        cout << "Enter the element: ";
        cin >> element;
        bst.insert(element);
    }

	cout << "In-Order Traversal: ";
    bst.inOrderTraversal();
    cout <<endl;

    cout << "Pre-Order Traversal: ";
    bst.preOrderTraversal();
    cout <<endl;

    cout << "Post-Order Traversal: ";
    bst.postOrderTraversal();
    cout <<endl;

    cout << "Number of nodes in the BST: " << bst.countNodes() << endl;

    return 0;
}
