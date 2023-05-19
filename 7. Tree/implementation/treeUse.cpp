#include <iostream>
#include "tree.h"
using namespace std;

void printTree(TreeNode<int>* root) {
    // edge case, not base case
    if(root == NULL){
        cout << "Empty Root" << endl;
        return;
    }
    cout << root->data << " : ";
    for(int i=0; i<root->children.size(); i++){
        cout << root->children[i]->data << ",";
    }
    cout << endl;
        for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}

TreeNode<int>* takeInput() {
    cout << "Enter data : " ;
    int value;
    cin >> value;
    TreeNode<int>* root = new TreeNode<int>(value);

    int totalChild;
    cout << "How many children " << root->data << " have? : ";
    cin >> totalChild;

    for(int i=0; i<totalChild; i++){
        TreeNode<int>* temp = takeInput();
        root->children.push_back(temp);
    }
    
    return root;
}

int countNodes(TreeNode<int>* root) {
    if(root == NULL) {
        return 0;
    }
    int ans = 1;
    for(int i=0; i<root->children.size(); i++){
        ans += countNodes(root->children[i]);
    }
    return ans;
}

int countSumOfNodes(TreeNode<int>* root) {
    int sum = 0;
    sum += root->data;

    for(int i=0; i<root->children.size(); i++){
        sum += countSumOfNodes(root->children[i]);
    }

    return sum;
}

int main() {

    // TreeNode<int>* root = new TreeNode<int>(99);
    // TreeNode<int>* node1 = new TreeNode<int>(1);
    // TreeNode<int>* node2 = new TreeNode<int>(2);
    // TreeNode<int>* node3 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // node1->children.push_back(node3);
    // printTree(root);    

    TreeNode<int>* root2 = takeInput();
    printTree(root2);
    cout << "Count of Nodes : " << countNodes(root2) << endl;
    cout << "Sum of Nodes : " << countSumOfNodes(root2) << endl;
    return 0;
}