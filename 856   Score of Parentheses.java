class Solution {

    public int scoreOfParentheses(String s) {

        Stack<Integer> st = new Stack<>();

        int ans = 0;

        for(int i = 0; i < s.length(); i++){

            char c = s.charAt(i);

            if(c == '('){

                st.push(ans);

                ans = 0;

            }

            else {

                ans = st.pop() + Math.max(2 * ans, 1);

            }

        }

        return ans;

    }

}
