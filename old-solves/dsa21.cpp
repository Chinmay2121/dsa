#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
void search(Node* head,int ele){
    Node* temp = head;
    int count=1;
    while(temp){
        if((temp->data)==ele){
            cout << "The element is present at positon " << count << endl;
            return;
            }
            count++;
            temp = temp->next;
    }
    cout << "The element is not present" << endl;
}
int main(){

    Node* head = new Node(6);
    Node* first = new Node(8);
    Node* second = new Node(10);
    
    head->next = first;
    first->next = second;
    
    int ele;
    cin >> ele;


    search(head,ele);
    return 0;
}