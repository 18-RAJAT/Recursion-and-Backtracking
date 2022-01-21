#include<bits/stdc++.h>
using namespace std;

void PrintSubset(int*arr,int i,int n,string OSF)
{
  if(i == n)
  {
      cout<<"["<<OSF<<"]\n";
      return;
  }

  //When we chose the element to be included
  PrintSubset(arr,i+1,n,OSF+to_string(arr[i]) + " ");

 //When we chose the element to be included
  PrintSubset(arr,i+1,n,OSF);
}

int main()
{
int n;
cin>>n;

int *arr = new int[n];

for(int i=0;i<n-1;++i)
{
  cin>>arr[i];
}
  PrintSubset(arr,0,n," ");   //" "initially the string is empty
}