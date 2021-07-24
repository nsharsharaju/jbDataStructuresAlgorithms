#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

Node* insertNodeAtEndLL(int val, Node* head) {
    if(head == NULL){
        return createNode(val);
    }
    Node* trav = head;
    while(trav->next) {
        trav = trav->next;
    }
    trav->next = createNode(val);
    return head;
}

void displayLL(Node* head) {
    Node* trav = head;
    while(trav){
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
}

Node* reverseLLUsingStack(Node* head) {
    stack<int> s;
    Node* trav = head;
    while(trav){
        s.push(trav->data);
        trav = trav->next;
    }
    Node* newHead = NULL;
    while(!s.empty()) {
        newHead = insertNodeAtEndLL(s.top(),newHead);
        s.pop();
    }
    return newHead;
}

Node* reverseLLInPlace(Node* head) {
    Node* prevPtr = NULL;
    Node* temp = NULL;
    Node* trav = head;
    if(trav == NULL || trav->next == NULL) return trav;
    while(trav->next) {
        temp = trav->next;
        trav->next = prevPtr;
        prevPtr = trav;
        trav = temp;
    }
    trav->next = prevPtr;
    return trav;
}

int main(){
    Node* head = NULL;
    head = insertNodeAtEndLL(1,head);
    head = insertNodeAtEndLL(2,head);
    head = insertNodeAtEndLL(3,head);
    head = insertNodeAtEndLL(4,head);
    displayLL(head);
    head = reverseLLInPlace(head);
    displayLL(head);
    return 0;
}