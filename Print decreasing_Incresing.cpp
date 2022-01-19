#include<bits/stdc++.h>
using namespace std;

void print_incresing_decresing(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
 
   cout<<n<<endl;
  print_incresing_decresing(n-1);
   cout<<n<<endl; 

}

int main()
{
    print_incresing_decresing(5);
}

//Output-> 5 4 3 2 1 2 3 4 5