class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        
        if(nums.size()==1 && k%2==1) return -1;
        
        vector<int> v;
        
        int t = 0;
        int n = nums.size();
        k--;
        
       
       int m = 0;
        
        for(int i=0;i<min(k,n);i++) m = max(m,nums[i]);
        
        
        if(k+1<n) m = max(m,nums[k+1]);
        
        return m;
        
        
    }

};
