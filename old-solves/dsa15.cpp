// print the middle of the linked list and its address

#include<bits/stdc++.h>
using namespace std;
struct Node{

    int data;
    Node *next;

    Node(int x){
        data=x;
        next=nullptr;
    }
};
void middle(Node*head){
    int count=0;
    Node* curr=head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    int loop=0;
    int mid=count/2;
    while(loop!=mid){
        head=head->next;
        loop++;
}
    cout << head->data << endl;
    cout << head << endl;
}  
int main(){
    

    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);

    middle(head);



    return 0;
}