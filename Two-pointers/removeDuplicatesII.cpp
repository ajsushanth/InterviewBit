int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int k=1, c=1, flag=0;
    for(int i=1; i<A.size(); i++){
        if(A[i] == A[i-1]){
            if(c>2) continue;
            c++;
            if(c==2){
                A[k] = A[i];
                k++;
            }
        }
        else{
            A[k] = A[i];
            k++;
            c=1;
        }
    }
    return k;
}
