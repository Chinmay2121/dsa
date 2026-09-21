#include<bits/stdc++.h>
using namespace std;
struct Node{
    string data;
    Node* next;

    Node(string x){
        data = x;
        next = nullptr;
    }
    
};


void display(Node* head){
    Node* temp = head;
    cout <<"Head Pointer->"<< temp << endl;
    while(temp!=nullptr){
        cout << temp->data <<"->" << temp->next << endl;
        temp = temp->next;
    }
}



int main(){
    Node* head = new Node("hello World");
    head->next = new Node("How are you");
    head->next->next = new Node("Are you fine");
    head->next->next->next = new Node("Thank You");

    display(head);
    return 0;
}