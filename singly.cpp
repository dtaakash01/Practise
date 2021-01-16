#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Node{
    public:
        int data;
        Node *next;
};

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

