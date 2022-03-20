class Solution {
public:
    vector<int> maximumBobPoints(int W, vector<int>& a) {
        
        int val[12],wt[12];
        
        for(int i=0;i<12;i++){
            wt[i] = a[i]+1;
            val[i] = i;
        }
        
       int n = 12;
        
        
        
        int dp[n+1][W+1];
        int v[n+1][W+1];
         
        for(int i=0;i<=n;i++){
             for(int j=0;j<=W;j++){
                 v[i][j] = j;
                 if(i==0||j==0) dp[i][j]=0;
                 else if(wt[i-1]<=j){
                     dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                     if(dp[i][j]!=dp[i-1][j]) v[i][j] = j-wt[i-1];
                 }
                 else dp[i][j]=dp[i-1][j];
             }
         }
        // cout<<dp[n][W];
         vector<int> ans(n,0);
        
        int i = n, j = W;
        
        while(j>0){
            while(i>0 && j>0 && dp[i][j] == dp[i-1][j]) i--;
            i--;
            
            if(i<0) break;
            
            ans[i] = wt[i];
            j = v[i+1][j];
        }
        
        int z = 0;
        
        for(int i=0;i<12;i++) z+=ans[i];
        
        if(z<W) ans[0]+=(W-z);
        
         return ans;
        
    }
};
