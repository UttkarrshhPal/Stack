#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // creation of stack
    stack<int>s;
    // push operation 
   cout<<"element inserted";
    s.push(2);
    s.push(3);
    // pop operation
    s.pop();
    // peak operation 
    cout<<"print top element";
    cout<<s.top();

    cout<<"size of stack";
    cout<<s.size();



    return 0;
}
