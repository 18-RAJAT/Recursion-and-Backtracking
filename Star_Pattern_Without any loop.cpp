#include<bits/stdc++.h>
using namespace std;

void pattern1(int n,int i)
{
    if(n == 0)
    return;

    if(i<n)
    {
        //Print column
        cout<<"*";       //self work
        pattern1(n,i+1); //recursion
    }
    else
    {
        //We will change the row

         cout<<endl;   //self work
        pattern1(n-1,0); //recursion
    }
       
}

int main()
{
    pattern1(7,0);
}