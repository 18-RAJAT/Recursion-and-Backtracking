#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    //base case
    if(n==0 or n==1)
    {
        return n;
    }

    //recursive assumption
    int subproblem1 = fibonacci(n-1);
    int subproblem2 = fibonacci(n-2);
   
    //selfwork
    
    return subproblem1 + subproblem2;

}

int main()
{
    cout<<fibonacci(5)<<endl;
}