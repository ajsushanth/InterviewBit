int Solution::solve(string str) {
    stack<char>st;
    for(int i=0; i<str.length(); i++){
        if(st.empty()){
            if(str[i] == ')') return 0;
            else st.push(str[i]);
        }
        else{
            if(str[i] == ')'){
                if(st.top() == '(') st.pop();
                else st.push(str[i]);
            }
            else{
                st.push(str[i]);
            }
        }
    }
    if(st.empty()) return 1;
    else return 0;
}
