class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& a, vector<vector<int>>& d) {
        
        int g[n][n];
        
        memset(g,-1,sizeof(g));
          
        
        int m = a.size();
        for(int i=0;i<m;i++){
            for(int j=a[i][0];j<=a[i][2];j++){
                for(int k=a[i][1];k<=a[i][3];k++){
                    g[j][k]=i;
                }
            }
        }
        
        vector<int> v(m,0);
        
        
        for(int i=0;i<d.size();i++){
            int x = d[i][0], y = d[i][1];
            
            if(g[x][y]==-1) continue;
            
            v[g[x][y]]=1;
            
            g[x][y]=-1;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]!=-1) v[g[i][j]]=0;
            }
        }
        
            
         int ans = 0;
               
             
         for(int i=0;i<m;i++) ans+=v[i];      
               
               
        return ans;
        
    }

};
