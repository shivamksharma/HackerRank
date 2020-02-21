/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include <iostream>
#include <cstddef>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root){
            if(root== NULL){
        return -1;
    }
    else{
        int  a = getHeight(root->left);
        int b = getHeight(root->right);
        if(a>b)
            return 1+a;
        else
            return 1+b;
    }
}
}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
