bool Solution::hotel(vector<int> &arr, vector<int> &dep, int c) {
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i=0, j=0;
    int rooms = 0;
    while(i<arr.size() && j<dep.size()){
        while(arr[i] <= dep[j] && i<arr.size()){
            rooms++;
            i++;
            if(rooms > c) return false;
        }
        while(arr[i] > dep[j] && j<dep.size()){
            rooms--;
            j++;
        }
    }
    return true;
}