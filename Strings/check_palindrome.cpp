int Solution::solve(string str) {
    map<char, int> m;
    for(int i=0; i<str.size(); i++){
        m[str[i]]++;
    }
    int odd=0;
    for(auto itr : m){
        if(itr.second%2 != 0) odd++;
        // cout << itr.first << " " << itr.second << endl;
    }
    if(odd <= 1) return 1;
    else return 0;
}
