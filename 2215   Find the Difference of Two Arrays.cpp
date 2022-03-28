class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        for(int x:nums1) m1[x]++;
        for(int x:nums2) m2[x]++;
        
        vector<vector<int>> ans(2);
        
        for(auto i:m1){
            if(m2[i.first]==0) ans[0].push_back(i.first);
        }
           for(auto i:m2){
            if(m1[i.first]==0) ans[1].push_back(i.first);
        }
        
        return ans;
        
    
    }
};
