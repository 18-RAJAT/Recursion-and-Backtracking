class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n==1 || n==4)
        {
            return true;
        }
        
        
        if(n % 4!=0 || n==0)
        {        
            return false;
        }
        
       return isPowerOfFour(n/4);
    
    }
};


