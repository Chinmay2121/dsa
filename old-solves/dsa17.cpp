#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        if((temp->data)%2==0){
            cout << temp->data << endl;
            temp=temp->next;
        }
    }
}
int main(){
    Node *head = new Node(12);
    head->next=new Node(19);
    head->next->next= new Node(26);
    display(head);
    return 0;

    
}