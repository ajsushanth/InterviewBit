<<<<<<< HEAD
void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0, j=0;
    vector<int> C;
    while(i<A.size() && j<B.size()){
        if(A[i] <= B[j]) C.push_back(A[i++]);
        else C.push_back(B[j++]);
    }
    while(i<A.size()) C.push_back(A[i++]);
    while(j<B.size()) C.push_back(B[j++]);
    A.clear();
    for(int i=0; i<C.size(); i++){
        A.push_back(C[i]);
    }
}
=======
void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0, j=0;
    vector<int> C;
    while(i<A.size() && j<B.size()){
        if(A[i] <= B[j]) C.push_back(A[i++]);
        else C.push_back(B[j++]);
    }
    while(i<A.size()) C.push_back(A[i++]);
    while(j<B.size()) C.push_back(B[j++]);
    A.clear();
    for(int i=0; i<C.size(); i++){
        A.push_back(C[i]);
    }
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
