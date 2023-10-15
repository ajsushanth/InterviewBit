void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//push the larger element to the end of the array
//by comparing adjacent elements
// if adjacent element is smaller then swap
// else increment the pointer to the next element
// Complexity: O(n2, 1) -> Worst, Avg
// Best -> O(n,1) : sorted array, if we put a swap_check flag at the beginning of the inner loop