class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.find(nums[i])!=ans.end()){
                return true;
            }else{
                ans[nums[i]]++;
            }
        }
        return false;


        

        
    }
};