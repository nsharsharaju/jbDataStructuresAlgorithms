#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void displayLL(Node* head) {
    Node* trav = head;
    while(trav) {
        cout << trav->data << " ";
        trav = trav->next;
    } 
    cout << endl;
    return;
}

Node* insertNodeAtEndLL(int val,Node* head){
    if(head == NULL) return createNode(val);
    Node* trav = head;
    while(trav->next) trav = trav->next;
    trav->next = createNode(val);
    return head;
}

Node* deleteNthNodeEndLL2(int pos, struct Node* head){
    Node* trav1 = head;
    Node* trav2 = head;
    for(int i=0;i<pos+1;i++){
        if(trav1 == NULL) {
            // Delete first node from front
            //return deleteAtBeginLL(head)
            return head;
        }
        trav1 = trav1->next;
    }
    //inc both pointers till trav1 becomes NULL
    while(trav1!=NULL){
        trav1 = trav1->next;
        trav2 = trav2->next;
    }
    //trav2 points to (pos+1)th position
    Node* temp = trav2->next;
    trav2->next = trav2->next->next;
    free(temp);
    return head;
}

int main(){
    Node* head = NULL;
    head = insertNodeAtEndLL(4,head);
    head = insertNodeAtEndLL(5,head);
    head = insertNodeAtEndLL(3,head);
    head = insertNodeAtEndLL(2,head);
    head = insertNodeAtEndLL(1,head);
    displayLL(head);
    return 0;
}