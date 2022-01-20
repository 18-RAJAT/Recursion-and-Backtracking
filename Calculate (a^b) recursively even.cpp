#include<bits/stdc++.h>
using namespace std;

int PowerRecuriveEven(int a,int b)
{
    //Base case
    if(b == 0)
    {
     return 0;
    }

    if(b == 1)
    {
        return a;
    }

    //recursive Assumption
    int temp = PowerRecuriveEven(a,b/2);

    //Self Work
    if(b%2 == 0)
    {
        return temp * temp;
    }

    else
    {
        return a * temp * temp;
    }

}

int main()
{
    cout<<PowerRecuriveEven(5,2);
    return 0;
}