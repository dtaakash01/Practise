#include<iostream>
#include<climits>

using std::cin;
using std::cout;
using std::endl;

class StackNode{
    public:
        int data;
        StackNode *next;
};

StackNode *newNode(int data){
    StackNode *new_node = new StackNode();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

bool isEmpty(StackNode *root){
    return !root;
}

void push(StackNode **root, int data){
    StackNode *new_node = newNode(data);
    new_node->next = *root;
    *root = new_node;
    cout<<data<<" pushed to stack"<<endl;
}

int pop(StackNode **root){
    if(isEmpty(*root)){
        return INT_MIN;
    }
    StackNode *temp = *root;
    *root = (*root)->next;
    int popd = temp->data;
    free(temp);

   return popd;

}

int main(){
    StackNode *p1 = NULL;

    push(&p1, 88);
    cout<<pop(&p1);
}