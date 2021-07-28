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

void displayLL(Node* head){
    Node* trav = head;
    while(trav){
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
    return;
}

Node* insertNodeAtEndLL(int val,Node* head) {
    if(head == NULL) return createNode(val);
    Node* trav = head;
    while(trav->next)
        trav = trav->next;
    trav->next = createNode(val);
    return head;
}

Node* reverseLLInPlace(Node* head) {
    if(head == NULL || head->next == NULL) return head;
    Node* prevPtr = NULL;
    Node* temp = NULL;
    Node* trav = head;
    while(trav->next) {
        temp = trav->next;
        trav->next = prevPtr;
        prevPtr = trav;
        trav = temp;
    }
    trav->next = prevPtr;
    return trav;
}

Node* reverseInPlaceRecersive(Node* currNode, Node* prevNode) {
    if(currNode == NULL) return prevNode;
    Node* temp = currNode->next;
    currNode->next = prevNode;
    return reverseInPlaceRecersive(temp,currNode);
}

Node* mergeSortedLL(Node* head1, Node* head2) {
    Node* newLL = NULL;
    Node* trav1 = head1;
    Node* trav2 = head2;
    Node* travNew = newLL;

    while(trav1 !=NULL && trav2 != NULL){
        if(trav1->data <= trav2->data) {
            newLL = insertNodeAtEndLL(trav1->data,newLL);
        }
    }
    return newLL;
    //TODO: Need to complete this code
}

//ToDo: Need to complete this code
Node* mergedSortedLLInPlace(Node* head1, Node* head2);

int main(){
    Node* head = NULL;
    head = insertNodeAtEndLL(1,head);
    head = insertNodeAtEndLL(2,head);
    head = insertNodeAtEndLL(3,head);
    head = insertNodeAtEndLL(4,head);
    displayLL(head);
    head = reverseLLInPlace(head);
    displayLL(head);
    head = reverseInPlaceRecersive(head, NULL);
    displayLL(head);
    return 0;
}