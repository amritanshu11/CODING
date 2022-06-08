#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n ;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
stack<int>st;
for (int i = 0; i < n; i++)
{
    st.push(arr[i]);
}
while(!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}