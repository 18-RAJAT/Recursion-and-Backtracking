class Solution {
    
private:
    void permutation(vector<int>nums,vector<vector<int>>& ans,int index)
    {
        //Base case
        if(index >=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=index;i<nums.size();++i)
        {
            swap(nums[index],nums[i]);
                
            permutation(nums,ans,index+1);
            
            //Backtracking 
            
            swap(nums[index],nums[i]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
     
        vector<vector<int>>ans;
        int index = 0;
        
        permutation(nums,ans,index);
        
        return ans;
    }
};