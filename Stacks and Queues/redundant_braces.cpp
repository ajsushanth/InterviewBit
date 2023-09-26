bool isOp(char ch){
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int Solution::braces(string str) {
    stack<char> st;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '(' || isOp(str[i])) st.push(str[i]);
        else if(str[i] == ')'){
            if(st.top() == '(') return true;
            while(isOp(st.top())) st.pop();
            st.pop();
        }
    }
    return false;
}
