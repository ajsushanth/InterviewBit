int Solution::lengthOfLastWord(const string str) {
    int len=0, i=str.length()-1;
    while(i != -1){
        if(str[i] == ' ') i--;
        else{
            while(str[i] != ' ' && i != -1){
                len++;
                i--;
            }
            break;
        }
    }
    return len;
}
