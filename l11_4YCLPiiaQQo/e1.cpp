//In this file we are doing LinkedList Operations
//There may be some issues in the code
#include<bits/stdc++.h>
using namespace std;

struct Node
{
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

struct Node *deleteAtEndLL(struct Node *head)
{
    if (head == NULL)
    {
        cout << "This is a empty Linked List" << endl;
        return NULL;
    }
    struct Node *trav = head;
    if (trav->next == NULL)
    {
        free(trav);
        return NULL;
    }
    while (trav->next->next)
    {
        trav = trav->next;
    }
    free(trav->next);
    trav->next = NULL;
    return head;
}

Node *insertAtBeginLL(int val, Node *head)
{
    Node *newNode = createNode(val);
    newNode->next = head;
    return newNode;
}

Node *deleteAtBeginLL(Node *head){
    if(head == NULL){
        cout << "Can't delete, Empty LinkedList!" << endl;
        return head;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *insertAtNthPositionLL(int val, int pos, Node *head){
    //We are assuming that pos will be given correct
    if(pos == 1) return insertAtBeginLL(val, head);
    Node* trav = head;
    for (int i = 0; i < pos - 2; i++)
    {
        trav = trav->next;
    }
    Node* newNode = createNode(val);
    newNode->next = trav->next;
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