class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums) mp[x]++;
        
        for(auto p:mp){
            if(p.second%2) return false;
        }
        
        return true;
    }
};
