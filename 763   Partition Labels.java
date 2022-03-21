class Solution {
    public List<Integer> partitionLabels(String s) {
        
        List<Integer> ans = new ArrayList<>();
        
        Map<Character,Integer> map = new HashMap<>();
        
        for(int i=0; i<s.length(); i++){
            map.put(s.charAt(i), i);
        }
        
        
        
        int i = 0;
        
        while(i<s.length()){
            
            int j = i;
            int k = map.get(s.charAt(i));
            
            while(j<k){
                k = Math.max(k, map.get(s.charAt(j)));
                j++;
            }
            
            ans.add(k-i+1);
            
            i = k+1;
            
        }
        
        return ans;
    }
}
