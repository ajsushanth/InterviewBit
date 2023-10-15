/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int arr[], int low, int high) {
	// Write your code here
	int i = low;
	int j = high;
	int pivot = arr[low];
	while(i < j){
		while(arr[i] <= pivot && i < high) i++;
		while(arr[j] > pivot && j > low) j--;
		if(i < j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start < end){
		int pIndex = partitionArray(input, start, end);
		quickSort(input, start, pIndex-1);
		quickSort(input, pIndex+1, end);
	}
}
// Divide and Conquer Algorithm
// Pick a pivot and place it in the correct place in the sorted order
// pivot: is random element of the array
// first or last element of the array
// middle element or median of the array
// now shift all the elements smaller than pivot to left of the pivot
// and larger elements than pivot to right of the pivot
// now we will repeat the same steps recursively on left and right parts of the pivot
// Complexity: O(nlogn, 1)
// Space Complexitty: internal recusrion stack but no extra space => O(1)
// Slightly better than MergeSort
// Best for arrays or vectors