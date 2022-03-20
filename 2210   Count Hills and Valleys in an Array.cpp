class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans = 0;
        
        for(int i=1;i<nums.size()-1;i++){
            if(i==0){
                if(nums[1]!=nums[0]) ans++;
            }
            else if(i==nums.size()-1){
                if(nums[nums.size()-2]!=nums[i]) ans++;
            }
            else{
                if(nums[i]==nums[i+1]){
                    nums[i] = nums[i-1];
                    continue;
                }
                if(nums[i]<nums[i-1] && nums[i+1]>nums[i]) ans++;
                else if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) ans++;
                //cout<<ans;
            }
        }
        
        return ans;
    }
};
