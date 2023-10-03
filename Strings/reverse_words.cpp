string Solution::solve(string str) {
    stack<string> st;
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' ') continue;
        string temp = "";
        while(str[i] != ' ' && i<str.size()){
            temp += str[i];
            i++;
        }
        st.push(temp);
    }
    string ans = "";
    while(!st.empty()){
        if(ans != "") ans += " ";
        ans += st.top();
        st.pop();
    }
    return ans;
}
