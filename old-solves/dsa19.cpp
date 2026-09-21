#include<bits/stdc++.h>
using namespace std;

//class Node creation

class Node{
    public:

        int data;
        Node* next;

        Node(int x){
            data = x;
            next = nullptr;
        }
};


//displaying the linked list by iterating through it
void display(Node* head){
    Node* temp = head;
    cout << "head pointer is " << temp <<"\n";
    while(temp!=nullptr){
        cout << temp->data << "->" <<  temp->next << "\n"; 
        temp = temp->next ;
    }
}



int main(){
    Node* head = new Node(6);
    Node* first = new Node(18);
    Node* second = new Node(10);
    Node* third = new Node(12);
    Node* fourth = new Node(14);
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    display(head);
    return 0;
}
