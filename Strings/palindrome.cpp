int Solution::isPalindrome(string str) {
    string s = "";
    for(int i=0; i<str.size(); i++){
        if((tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z') || (str[i] >= '0' && str[i] <= '9')){
            s += tolower(str[i]);
        }
    }
    int i=0, j=s.size()-1;
    while(i < j){
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
