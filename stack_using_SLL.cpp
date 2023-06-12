#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class Stack{
    Node *top;
    public:
    Stack(){
        top = NULL;
    }

    void push(int data){
        //creating a new node
        Node *newnode = new Node(data);
        // checking overflow
        if(!newnode)
        {
          cout<<"Stack Overflow";
        }  
        newnode->data = data;
        newnode->next = top;
        top = newnode;      
    }
    void pop(){
        Node *temp;
        // stack underflow
        if(top == NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            temp  = top;
            top = top->next;
            free(temp);
        }

    }
    
};
int main()
{
   Stack s;
   s.push(4);
   s.push(5);
   s.pop();
}
