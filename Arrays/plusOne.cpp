<<<<<<< HEAD
vector<int> Solution::plusOne(vector<int> &arr) {
    vector<int> ans;
    int add=1;
    for(int i=arr.size()-1; i>=0; i--){
        if(arr[i]==9 && add==1){
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[i] + add);
            add = 0;
        }
    }
    if(add == 1) ans.push_back(1);
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        if(ans[i] == 0){
            ans.erase(ans.begin());
            i--;
        }
        else break;
    }
    return ans;
}
=======
vector<int> Solution::plusOne(vector<int> &arr) {
    vector<int> ans;
    int add=1;
    for(int i=arr.size()-1; i>=0; i--){
        if(arr[i]==9 && add==1){
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[i] + add);
            add = 0;
        }
    }
    if(add == 1) ans.push_back(1);
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        if(ans[i] == 0){
            ans.erase(ans.begin());
            i--;
        }
        else break;
    }
    return ans;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
