#include<bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node* next;
};

struct Node* createNode(int val) {
    struct Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

struct Node* insertAtEndLL(int val, struct Node* head){
    struct Node* newNode = createNode(val);

    if(head == NULL){
        return newNode;
    }
    struct Node* trav = head;
    while(trav->next) {
        trav = trav->next;
    }
    trav->next = newNode;
    return head;
}

void displayLL(struct Node* head) {
    struct Node* trav = head;
    while(trav != NULL){
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
    return;
}

int main(){
    struct Node* head = NULL; // Empty Linked List(Head is denoted by ptr "head")
    head = insertAtEndLL(3,head);
    head = insertAtEndLL(7,head);
    head = insertAtEndLL(1,head);
    head = insertAtEndLL(5,head);
    displayLL(head);
    return 0;
}
