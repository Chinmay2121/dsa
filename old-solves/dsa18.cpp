#include<bits/stdc++.h>
using namespace std;
struct Node{

    string data;
    Node*next;

    Node(string x){
        data = x;
        next = NULL;
    }
};
void display(Node* head){
    Node* curr= head;
    while(curr){
        cout << curr->data << " " << endl;
        curr=curr->next;

    }
    cout << "\n";

}
int main(){


    Node* head = new Node("Hello");
    Node* temp1=new Node("How are you");
    Node* temp2 = new Node("Are you fine?");
    head->next=temp1;
    temp1->next=temp2;
    display(head);

    return 0;
}