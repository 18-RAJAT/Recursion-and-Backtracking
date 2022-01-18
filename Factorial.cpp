//1.st way

#include<bits/stdc++.h>
using namespace std;

int fact ( int n)
{
    //base case
    if(n == 1)
    {
        return 1;
    }

    //recursive assumption
    int subproblem = fact(n-1);

    //selfwork
    return n * subproblem;

}


//2.nd way


#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return (n<=1) ? 1 : n * (fact(n-1));
}

int main()
{
    cout << fact(5); 
}

