#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void displayLL(Node *head){
    Node *trav = head;
    while(trav){
        cout << trav->data <<  " ";
        trav = trav->next;
    }
    cout << endl;
    return;
}

Node *insertAtEndLL(int val,Node *head){
    if(head == NULL)
    {
        return createNode(val);
    }
    Node *trav = head;
    while (trav->next)
    {
        trav = trav->next;
    }
    trav->next = createNode(val);
    return head;
}

int countNodesLL(Node *head){
    Node* trav = head;
    int count = 0;
    while(trav){
        count++;
    }
    return count;
}

Node* deleteNthNodeEndLL(int pos, struct Node* head) {
    //TODO: Need to Complete this piece of Code
    return deleteNthNodeLL(countNodesLL(head)-pos+1, head);
}

int main(){
    Node *head = NULL;
    head = insertAtEndLL(4, head);
    head = insertAtEndLL(3, head);
    head = insertAtEndLL(2, head);
    head = insertAtEndLL(1, head);
    displayLL(head);
    return 0;
}