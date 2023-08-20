<<<<<<< HEAD
int Solution::diffPossible(vector<int> &A, int B) {
    int diff, count=0, i=0, j=1;
    while(i < A.size() && j < A.size()){
        diff = A[j] - A[i];
        if(i!=j && diff == B) return 1;
        else if(diff > B) i++;
        else j++;
    }
    return 0;
}
=======
int Solution::diffPossible(vector<int> &A, int B) {
    int diff, count=0, i=0, j=1;
    while(i < A.size() && j < A.size()){
        diff = A[j] - A[i];
        if(i!=j && diff == B) return 1;
        else if(diff > B) i++;
        else j++;
    }
    return 0;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
