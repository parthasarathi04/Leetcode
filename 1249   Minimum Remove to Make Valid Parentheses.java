class Solution {

    public String minRemoveToMakeValid(String s) {

        

        Stack<Integer> st = new Stack<>();

        StringBuilder ans = new StringBuilder();

        for (int i = 0; i < s.length(); i++){

            char c = s.charAt(i);

            if (c == '('){

                st.push(ans.length());

            } else if (c == ')'){

                if (st.isEmpty()){

                    continue;

                } else{

                    st.pop();

                }

            } 

            ans.append(c);

        }

        while (!st.isEmpty()){

            int i = st.pop();

            ans.deleteCharAt(i);

        }

        

        return ans.toString();

    }

}
