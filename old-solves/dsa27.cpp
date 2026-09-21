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
void display(Node* head){
    if(head == nullptr){
        return;
    }
    cout << head->data << endl;
    display(head->next);

}
int main(){
    Node* head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(20);

    display(head);

    return 0;
}