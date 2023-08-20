<<<<<<< HEAD
vector<string> addChar(vector<string> &A, string &s){
    if(s.length()<=0) return A;
    vector<string> v;
    int sa=A.size();
    int ls=s.length();
    int temp;
    for(int i=0; i<sa; i++){
        temp=i+1;
        while(temp<sa && A[temp]==A[temp-1]) temp++;
        for(int j=0; j<ls; j++){
            for(int k=0; k<temp-i; k++){
                v.push_back(A[i]+s[j]);
            }
        }
        i=temp-1;
    }
    return v;
}

vector<string> Solution::specialStrings(vector<string> &A) {
    int s=A.size();
    for(int i=0; i<s; i++) sort(A[i].begin(), A[i].end());
    vector<string> ans;
    ans.push_back("");
    for(int i=0; i<s; i++) ans=addChar(ans,A[i]);
    return ans;
=======
vector<string> addChar(vector<string> &A, string &s){
    if(s.length()<=0) return A;
    vector<string> v;
    int sa=A.size();
    int ls=s.length();
    int temp;
    for(int i=0; i<sa; i++){
        temp=i+1;
        while(temp<sa && A[temp]==A[temp-1]) temp++;
        for(int j=0; j<ls; j++){
            for(int k=0; k<temp-i; k++){
                v.push_back(A[i]+s[j]);
            }
        }
        i=temp-1;
    }
    return v;
}

vector<string> Solution::specialStrings(vector<string> &A) {
    int s=A.size();
    for(int i=0; i<s; i++) sort(A[i].begin(), A[i].end());
    vector<string> ans;
    ans.push_back("");
    for(int i=0; i<s; i++) ans=addChar(ans,A[i]);
    return ans;
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
}