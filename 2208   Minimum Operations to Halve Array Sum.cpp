class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> p;
        
        double z = 0;
        
        
        for(auto x:nums){
            p.push(x);
             z+=x;
        }
        
        double y = z/2.0;
        
        int ans = 0;
        
        while(z>y){
            double t = p.top(); p.pop();
            t/=2.0;
            z-=t;
            p.push(t);
            ans++;
        }
        
        
        return ans;
        
    }
};
