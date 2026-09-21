#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void reverse(Node* head){
    if(head == NULL){
        return ;
    }
    reverse(head->next);
    cout << head->data << " ";
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    reverse(head);
    cout << "\n";

    return 0;

}