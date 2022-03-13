class Solution {

public:

    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {

        vector<int> v;

        

        vector<int> a(nums.size(),0);

        

        for(int i=0;i<nums.size();i++){

            if(nums[i]==key){

                for(int j=max(0,i-k);j<=min(i+k,(int)nums.size()-1);j++) a[j]=1;

            }

        }

        for(int i=0;i<nums.size();i++) {

            if(a[i]==1) v.push_back(i);

        }

        

        return v;

    }

};
