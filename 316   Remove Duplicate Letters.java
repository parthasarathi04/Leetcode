class Solution {
    public String removeDuplicateLetters(String s) {
    
        int[] last = new int[128];

        for (int i = 0; i < s.length(); i++){

            last[s.charAt(i)] = i;
        }

        

        boolean[] vis = new boolean[128];

        Stack<Integer> st = new Stack();

        

        for (int i = 0; i < s.length(); i++) {

            int c = s.charAt(i);

            if (vis[c]) continue;

            while (!st.isEmpty() && st.peek() > c && i < last[st.peek()]){

                vis[st.peek()] = false;
                st.pop();

            }

            st.push(c);

            vis[c] = true;

        }

        StringBuilder sb = new StringBuilder();

        while (!st.isEmpty()){

            sb.append((char)(int)st.peek());
                      
            st.pop();
        }

        return sb.reverse().toString();
    }
}
