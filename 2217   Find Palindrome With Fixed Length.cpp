class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& q, int l) {
        vector<long long> ans(q.size());
        
        long long int mx = 9;
        if(l>1) mx *= pow(10, l/2 - (l%2==0));
        
        for(int i=0;i<q.size();i++){
            if(q[i]>mx) ans[i] = -1;
            else{
                long long int k = l;
                long long int t = k&1 ? k/2 : k/2-1;
                long long int p = pow(10,t);
                //cout<<p;
                p+=q[i]-1;
                long long int z = p;
                //cout<<z<<" ";
                if(k%2==1){
                    p/=10;
                    k--;
                }
                while(p>0){
                    z=z*10+p%10;
                    p/=10;
                }
                ans[i]=z;
            }
        }
        
        return ans;
    }
    
};
