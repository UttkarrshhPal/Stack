// position wise closest
// left to it 
// and greater
#include<iostream>
#include<stack>
using namespace std;
void prevGreater(int price[],int S[],int n)
{
   stack<int>st;
   st.push(price[0]);
   cout<<-1<<" ";
   for(int i = 1;i<n;i++)
   {
    while(st.empty()==false && st.top()<=price[i])
    st.pop();

    int pg = (st.empty()?-1:st.top());
    cout<<pg<<" ";
    st.push(price[i]);// we need previous greater so pushing them is imp
   }
}
int main()
{
   int price[] = {20,30,10,5,15};
   int n = 5;
   int S[n];
   prevGreater(price,S,n); 
}