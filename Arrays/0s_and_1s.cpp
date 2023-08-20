<<<<<<< HEAD
vector<int> Solution::solve(vector<int> &arr) {
    int i=0, j=arr.size()-1;
    while(i<j){
        while(arr[i]==0 && i<arr.size()) i++;
        while(arr[j]==1 && j>=0) j--;
        if(i>=j) break;
        arr[i++] = 0;
        arr[j--] = 1;
        
    }
    return arr;
}
=======
vector<int> Solution::solve(vector<int> &arr) {
    int i=0, j=arr.size()-1;
    while(i<j){
        while(arr[i]==0 && i<arr.size()) i++;
        while(arr[j]==1 && j>=0) j--;
        if(i>=j) break;
        arr[i++] = 0;
        arr[j--] = 1;
        
    }
    return arr;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
