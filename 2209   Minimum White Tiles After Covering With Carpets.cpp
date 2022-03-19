class Solution {
public:
    int minimumWhiteTiles(string f, int nc, int c) {
        if(nc*c>=f.length()) return 0;
        
        int n = f.length();
        
        int dp[nc][n];
        
        memset(dp,0,sizeof(dp));
        
        int w = 0;
        
        for(char c:f) w+=(c=='1');

        int a[n];
        
        int x = 0;
        for(int i = n - 1; i>=0;i--){
           x+=f[i]=='1';
           if(i+c<n) x-=f[i+c]=='1';
           dp[nc-1][i]=w-x;
           a[i]=x;
        }
        
        for(int i = nc-2;i>=0;i--){
            int mx = n;
            for(int j=n-1;j>=0;j--){
                //mx = max(mx,dp[i+1][j]);
                if(j+c>=n) dp[i][j] = dp[i+1][j];
                else{
                    mx = min(mx,dp[i+1][j+c]);
                    
                    dp[i][j] = max(0,mx - a[j]);
                    
                }
            }
        }
        
        
        int ans = n;
        
        for(int i=0;i<n;i++) ans = min(ans,dp[0][i]);
        
        return ans;
    }
};
