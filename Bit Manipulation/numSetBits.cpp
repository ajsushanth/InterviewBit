int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int a = A;
    int count = 0;
    while(A!=0){
        a = a/2;
        if(a*2 == A - 1) count++;
        A = A/2;
    }
    return count;
}
