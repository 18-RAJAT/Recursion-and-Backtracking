// //Recursive Solution But  0 <= n <= 37 this constraints give Time limit exceed

class Solution {
public:
    int tribonacci(int n) 
    {
	if(n == 0) 
    return 0;
        
    if(n == 1 or n == 2) 
    return 1;

    
      return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};



//Dyanmic Programming
class Solution {
public:
     int tribonacci(int n) 
     {
         int Dynamic_P[40];
         
          Dynamic_P[0] = 0;
          Dynamic_P[1] = 1;
          Dynamic_P[2] = 1;
         
         for(int i=3;i<=n;++i)
         {
          Dynamic_P[i] = Dynamic_P[i-1] + Dynamic_P[i-2] +  Dynamic_P[i-3];
         }
         
         return  Dynamic_P[n];
     }
};