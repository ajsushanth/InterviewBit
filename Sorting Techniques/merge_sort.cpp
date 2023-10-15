void merge(vector<int>& arr, int low, int mid, int high){
    int temp[high-low];
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=high){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high){
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    // Write Your Code Here
    if(low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
// Divide and Conquer algorithm
// it divides the array into smaller parts and then merges the smaller sorted parts
// it has 2 functions: mergeSort(): it divides the array into smaller parts
// merge(): it merges the smaller parts assuming the smaller parts are sorted
// we recursively split the array into smaller parts until each part/sub-array is of size 1
// in merge(): we use a int temp[high-low+1] to merge the 2 smaller parts and then tranfer the same 
// into original array
// Complexity: O(nlogn, n) ->Worst, Avg, Best
// Space Complexity: O(n)
// Best for LinkedLists