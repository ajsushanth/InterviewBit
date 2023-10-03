string Solution::solve(string str) {
    unordered_map<char, int> m;
    for(int i=0; i<str.size(); i++){
        m[str[i]]++;
    }
    string ans = "";
    for(int i=0; i<str.size(); i++){
        if(m[str[i]] == -1) continue;
        ans += str[i];
        ans += to_string(m[str[i]]);
        m[str[i]] = -1;
    }
    return ans;
}
