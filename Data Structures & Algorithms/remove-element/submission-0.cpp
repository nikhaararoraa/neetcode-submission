class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a=0;
        int b=0;
        while(b<nums.size()){
            if(a==b && nums[b]!=val){
                a++;
                b++;
            }else if(nums[b]==val){
                b++;
            }else {
                nums[a]=nums[b];
                a++;
                b++;
            }

        }
        return a;


        
    }
};