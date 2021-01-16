#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;
};

void push(Node **Head, int data){
    Node *new_node = new Node;

    new_node->data = data;
    new_node->next = (*Head);
    new_node->prev = NULL;

    if(*Head != NULL)

         (*Head)->prev = new_node;

    *Head = new_node;
     
}

int main(){
    Node *head = NULL;

    push(&head, 88);
    push(&head,99);
    push(&head,989);
    push(&head,999);


    cout<<head->data<<endl;

    Node *x = head->next;
    cout<<x->data<<endl;

    Node *y = x->next;
    Node *u = y->prev;
    cout<<u->data<<endl;
    
}