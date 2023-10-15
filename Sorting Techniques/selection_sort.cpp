void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int min_idx = i;
        for(int j=i; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
//Select min element and swap it with the front part of the array
// and repeat the same on the remaining part of the array
// Complexity: O(n2, 1) -> Worst, Avg, Best
// min_idx = i;