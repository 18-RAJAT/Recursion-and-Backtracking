#include<bits/stdc++.h>
using namespace std;

void incresing_decreasing(int n)
{
    if(n==5)
    {
        cout<<5<<endl;
        return;
    }

    cout<<n<<endl;
    incresing_decreasing(n+1);
    cout<<n<<endl;
}

int main()
{
    incresing_decreasing(1);
}