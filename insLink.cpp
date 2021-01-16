#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Node{
    public:
        int data;
        Node *next;
};

void insertion(Node **Head, int data){
    Node *head = new Node;
    head->data = 6;

    head->next = *Head;
    
    *Head = head;

}

void insert(Node **prev , int data){
    Node *new_node = new Node;

    if(*prev  == NULL){
        return;
    }

    new_node->data = 76;
    new_node->next = (*prev)->next;

    (*prev)->next = new_node;
}


void append(Node **Head, int data ){
    Node *new_node = new Node;

    new_node->data = 6;
    new_node->next = NULL;

    if(*Head == NULL){
        new_node = *Head;
        return;
    }

    Node *last_node = new Node;

    last_node = *Head;

    while(last_node != NULL){
        last_node = last_node->next;
    }

    last_node->next = new_node;
}

int main(){
    Node *Head = NULL;
    Node *Second = NULL;
    Node *Third = NULL;

    Head = new Node;
    Second = new Node;
    Third = new Node;

    Head->data = 99;
    Head->next = Second;

    Second->data = 0;
    Second->next = Third;

    Third->data = 88;

}

