class Solution {
    public String getSmallestString(int n, int k) {
        char[] ans = new char[n];
        
        Arrays.fill(ans, 'a');
        
        k -= n;
        
        int i = n-1;
        
        while(k>0){
            
            int x = Math.min(25, k);
            
            ans[i] += x;
            k -= x;
            i--;
        }
        
        
        return new String(ans);
    }
}
