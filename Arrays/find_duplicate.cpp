<<<<<<< HEAD
int Solution::repeatedNumber(const vector<int> &A) {
    int count[A.size()] = {0};
    for(int i=0; i<A.size(); i++){
        count[A[i]]++;
    }
    for(int i=0; i<A.size(); i++){
        if(count[i] > 1) return i;
    }
    return -1;
}

=======
int Solution::repeatedNumber(const vector<int> &A) {
    int count[A.size()] = {0};
    for(int i=0; i<A.size(); i++){
        count[A[i]]++;
    }
    for(int i=0; i<A.size(); i++){
        if(count[i] > 1) return i;
    }
    return -1;
}

>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
