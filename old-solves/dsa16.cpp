#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node* deletion(Node * head){
    Node*temp=head;
    head=head->next;
    free(temp);
    return head;
}
void display(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout << (temp->data) << endl;
        temp=temp->next;

    }
    return;

}
int main(){

    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout << deletion(head);
    cout << endl;
    return 0;
}