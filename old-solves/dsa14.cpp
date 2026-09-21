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
void search(Node*head,int key){
    int count=1;
    Node*curr=head;
    bool flag=0;
    while(curr!=NULL){
        if(curr->data==key){

            cout << "The element is present in the node numeber " << count << endl;
            flag=1;
            break;
        }
        count++;
        curr=curr->next;
    }
    if(flag!=1){
        cout << "The element is not found in the given linked list data structure" << endl;
    }
   
    
    
}  
int main(){
    int key;
    cin >> key;


    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    search(head,key);



    return 0;
}