#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
    
    Node(int val){
        data = val;
        right = nullptr;
        left = nullptr;
    }
};
void print(Node* root){
    if(root == NULL){
        return;
    }
    print(root->left);
    print(root->right);
    cout << root->data;
}
int main(){

    Node* root = new Node(5);
    Node* first = new Node(10);
    Node* second = new Node(15);
    root->left = first;
    root->right = second;

    print(root);
    cout << endl;
    return 0;
}