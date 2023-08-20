int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> arr;
    for(int i=0; i<A.size(); i++){
        if(A[i] != B){
            arr.push_back(A[i]);
        }
    }
    for(int i=0; i<arr.size(); i++){
        A[i] = arr[i];
    }
    return arr.size();
}
