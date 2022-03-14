class Solution {

    public String simplifyPath(String path) {

        String[] a = path.trim().split("/+",-1);

        

        

        Stack<String> st = new Stack<>();

        

        

        for(int i=0;i<a.length;i++){

           

            if(a[i].length()==0) continue;

            

            if(a[i].compareTo(".")==0) continue;

            if(a[i].compareTo("..")==0){

                if(!st.empty()) st.pop();

                continue;

            }

            

            st.push(a[i]);

        }

        

        String ans = "";

        

        while(!st.empty()){

            

            ans = "/"+st.peek()+ans;

            

            st.pop();

        }

        

        if(ans.length()==0) ans = "/";

        

        return ans;

    }
    
    
}
