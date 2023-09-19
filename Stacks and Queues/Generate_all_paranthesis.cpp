int Solution::isValid(string A) {
    stack<char> st;
    for(int i=0; i<A.length(); i++){
        if(A[i] == '(' || A[i] == '[' || A[i] == '{'){
            st.push(A[i]);
        }
        else{
            if(st.size() == 0) return 0;
            else if(A[i] == ')' && st.top() != '(') return 0;
            else if(A[i] == ']' && st.top() != '[') return 0;
            else if(A[i] == '}' && st.top() != '{') return 0;
            else st.pop();
        }
    }
    return !st.size();
}
