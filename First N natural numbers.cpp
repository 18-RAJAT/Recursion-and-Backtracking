#include<bits/stdc++.h>
using namespace std;

void printincresing (int n)
{
    //base case
    if(n == 0){
        return;
    }

    //recursive assumption
    printincresing(n-1);

    //self work 
    cout << n <<endl;
}

int main()
{
    printincresing(20);
}