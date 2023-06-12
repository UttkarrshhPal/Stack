#include<iostream>
#include<stack>
using namespace std;
class Stack{

    // properties:
    public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }
    void push (int element)
    {
          // overflow 
          if(size-top>1){
             top++;
             arr[top] = element;
          }
          else{
            cout<<"Stack Overflow"<<endl;
          }
    }
    int pop()
    {
       // pop empty se toh nahi kar rhe
       // stack underflow
       int temp = 0;
       if(top>=0)
       {
          temp = arr[top];
          top--;
          return temp;
       }
       else{
         cout<<"Underflow"<<endl;
          return -1;
       }
    }
    int peek()
    {
        if(top>=0)
        {
           return arr[top]; 
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
       
    }
    bool isEmpty()
    {
        if(top == -1)
        return 1;
        else
        return 0;
    }
};
int main()
{
    Stack st(5);

    st.push(19);
    st.push(17);
    st.push(12);
    st.push(11);
    st.push(28);
    st.push(29);
    cout<<st.peek()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.peek()<<endl;
   // cout<<st.peek()<<endl;
    
}