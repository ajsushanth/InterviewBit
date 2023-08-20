vector<int> Solution::findOccurences(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    vector<int> freq;
    int i, j;
    for( i=0; i<arr.size(); i++){
        int count=0;
        for( j=i; j<arr.size(); j++){
            if(arr[i] == arr[j]){
                count++;
            }
            else{
                i = j-1;
                break;
            }
        }
        freq.push_back(count);
        if(j == arr.size()) break;
    }
    return freq;
}
