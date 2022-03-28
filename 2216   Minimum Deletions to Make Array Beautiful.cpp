class Solution {
public:
    int minDeletion(vector<int>& a) {
        int ans = 0;
        int i=0;
        int k = 0;
        int n = a.size();
        
        while(i<n){
            if(k%2==0){
                int j = i+1;
                while(j<n && a[i]==a[j]) j++;
                i = j;
            }
            else{
                i++;
            }
            k++;
          //  cout<<i<<k<<" ";
        }
        
        ans = k - (k%2);
        
        return n - ans;
    }
};
