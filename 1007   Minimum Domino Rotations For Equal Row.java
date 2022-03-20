class Solution {
    public int minDominoRotations(int[] tops, int[] bottoms) {
        
       int[] top = new int[7];
       int[] bottom = new int[7];
       int[] both = new int[7];
        
       for(int i=0; i<tops.length; i++){
           
           top[ tops[i] ]++;
           bottom[ bottoms[i] ]++;
           
           both[tops[i]] += tops[i]==bottoms[i] ? 1 : 0;
           
       }
        
       
        for(int i=1; i<=6; i++){
            
            int z = (top[i] + bottom[i]) - both[i];
            
            if(z == tops.length){
                
                return Math.min(top[i],bottom[i]) - both[i];
                
            }
            
        }
        
        
        return -1;
        
    }
}
