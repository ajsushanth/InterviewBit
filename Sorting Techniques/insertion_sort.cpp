void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
//takes an element and places it in correct position
// right shifts each and every element untill the inserted element is in the correct position
// Complexity: O(n2, 1) -> Worst, Avg
// Best -> O(n,1) : Sorted array