class FreqStack {
    
    private class P implements Comparable<P>{
        
        int val, freq, index;
        
        P(int v,int f,int i){
            val = v;
            freq = f;
            index = i;
        }
        
        @Override
        public int compareTo(P p){
            
            if(freq == p.freq) return p.index - index;
            
            return p.freq - freq;
            
        }
        
    }
    
    
    
    private Queue<P> q;
    
    private Map<Integer,Integer> map;
    
    private int index;
    

    public FreqStack() {
        
        q = new PriorityQueue<>();
        
        map = new HashMap<>();
        
        index = 0;
        
    }
    
    public void push(int val) {
        
        map.put(val, 1 + map.getOrDefault(val, 0));
        
        q.add(new P(val, map.get(val), index++));
        
    }
    
    public int pop() {
        
        int val = q.poll().val;
        
        map.put(val, map.get(val)-1);
        
        return val;
        
    }
}

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack obj = new FreqStack();
 * obj.push(val);
 * int param_2 = obj.pop();
 */
