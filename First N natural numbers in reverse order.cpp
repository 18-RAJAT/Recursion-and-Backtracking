#include<bits/stdc++.h>
using namespace std;

void decreasing_order(int n)
{
    decreasing_order(n-1);
    
    if(n==5)
    {
        return;
    }
    cout <<n<<endl;
}

int main()
{
    decreasing_order(5);
}