class Solution {
public:
    int countCollisions(string s) {
        int ans = 0;
        
        int i = 0;
        
        int n = s.length();
        
        stack<int> st,v;
        
        for(int i=0;i<n;i++){
          //  cout<<ans;
            char c = s[i];
            
            if(c=='R'){
                if(st.empty()){
                    st.push(2);
                    v.push(1);
                    continue;
                }
                else{
                    int x = st.top();
                    
                    if(x==2){
                        int z = v.top(); v.pop();
                        v.push(z+1);
                    }
                    else if(x==1){
                        int z = v.top(); v.pop();
                        st.pop();
                        ans+=z+1;
                        st.push(0);
                        v.push(1);
                    }
                    else{
                       // ans++;
                        st.pop();
                        v.pop();
                        st.push(2);
                        v.push(1);
                    }
                }
                
            }
            else if(c=='L'){
               if(st.empty()){
                  //  st.push(1);
                   // v.push(1);
                  // cout<<"*";
                   continue;
                }
                else{
                    int x = st.top();
                   // cout<<"*";
                    if(x==1){
                        int z = v.top(); v.pop();
                        v.push(z+1);
                        //cout<<"#";
                    }
                    else if(x==2){
                        int z = v.top(); v.pop();
                        st.pop();
                        ans+=z+1;
                        st.push(0);
                        v.push(1);
                        //cout<<z;
                    }
                    else{
                        ans++;
                        //st.pop();
                       // v.pop();
                       // st.push(1);
                        //v.push(1);
                    }
                }
                
            
            }
            else{
                   if(st.empty()){
                    st.push(0);
                    v.push(1);
                }
                else{
                    int x = st.top();
                    
                    if(x==0){
                        continue;
                    }
                    else{
                        st.pop();
                        int z = v.top();
                        v.pop();
                        
                        if(x==2) ans+=z;
                        
                        
                        st.push(0);
                        v.push(1);
                    }
                }
                
            
            }
        }
        
        return ans;
    }
};
