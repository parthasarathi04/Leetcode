class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        
        Stack<Integer> st = new Stack();

        int x = 0;

        for(int z:pushed){

            st.push(z);

            while(!st.empty() && st.peek() == popped[x]){

                st.pop();
                
                x++;

            }

        }

        return st.empty();
    }
}
