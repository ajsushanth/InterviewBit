vector<int> Solution::twoSum(const vector<int> &arr, int k) {
    unordered_map<int, int> mp;
    vector<int> ans;
    mp[arr[0]] = 1;
    int i=1;
    for(i=1; i<arr.size(); i++){
        int x = k - arr[i];
        if(mp[x] != 0){
            ans.push_back(mp[x]);
            ans.push_back(i+1);
            return ans;
        }
        if(mp[arr[i]] == 0) mp[arr[i]] = i+1;
    }
    return ans;
}
