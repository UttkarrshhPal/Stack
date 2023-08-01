// Observation 1:
// Stock span  = (index of curr element) - (index of closest greater element of left side)
// we have to find closest day preceding i,such that 
// price is greater than price of day i
// if such a day exists let's call it h(i)
// span now will be computed as S[i]=i-h(i)
#include<iostream>
#include<stack>
using namespace std;
void calculateSpan(int price[],int S[],int n)
{
   stack<int>st;
   st.push(0);
   S[0]=1;
   for(int i = 1;i<n;i++)
   {
    while(!st.empty() && price[st.top()]<=price[i])
    {
        st.pop();
    }
    S[i] = (st.empty()?(i+1):(i-st.top()));
    st.push(i);
    cout<<S[i]<<endl;
   }
}
int main()
{
    int price[]={55,10,20,40,35,30,50,60,65};
    int n = 9;
    int S[n];
    calculateSpan(price,S,n);
    for(int i = 0;i<n;i++)cout<<S[i]<<" ";
}