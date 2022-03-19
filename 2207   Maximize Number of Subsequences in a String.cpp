class Solution {
public:
    long long maximumSubsequenceCount(string s, string p) {
        int n = s.length();
        long long dp[n+1][2];
        
        dp[n][0]=dp[n][1] = 0;
        
        for(int i=n-1;i>=0;i--){
            dp[i][0] = (s[i]==p[0]) + dp[i+1][0];
            dp[i][1] = (s[i]==p[1]) + dp[i+1][1];
           // cout<<dp[i][0]<<dp[i][1]<<endl;
        }
        
        
        
        
        long long int ans = 0,x=0,y=0,a=0,b=0;
        
        for(int i=0;i<n;i++){
            if(dp[i][0]!=dp[i+1][0]){
                x+=dp[i][1];
                a++;
            }
            if(dp[i][1]!=dp[i+1][1]){
                //y+=dp[i][0];
                b++;
            }
        }
        
        
        if(p[0]==p[1]){
            y = (a*(a+1))/2;
            return y;
        }
        
        y = x;
        //cout<<x<<y<<a<<b;
        return max(y+a,y+b);
        
    }
};
