vector<int> Solution::solve(vector<int> &arr) {
    if(arr.size()==1) return arr;
    vector<int> ans;
    int count=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0)count++;
        else ans.push_back(arr[i]);
    }
    while(count-->0) ans.push_back(0);
    return ans;
}
