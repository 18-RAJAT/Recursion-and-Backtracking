class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==1 || n==2)
        {
            return true;
        }
        
        else
        {
            if(n%2!=0 || n==0)
            {
                return false;
            }
        }
        
         return  isPowerOfTwo(n/2);
        
    }
};