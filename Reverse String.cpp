//Goal is find the mirror image of string from mid point...!!

class Solution {
public:
    void reverseString(vector<char>& s) {
        
       int Right = s.size()-1;
       int Left = 0;
        
        while(Left < Right)
        {
            char c = s[Left];
            
            s[Left] = s[Right];
            
            s[Right] = c;

             Left+=1;
             Right-=1;
        }
        
    }
};

/*

TIME COMPLEXITY  IS -> O(n)

We don't want to use inbuilt functions
do it inplace with O(1) extra space

*/