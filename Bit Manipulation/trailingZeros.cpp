<<<<<<< HEAD
int Solution::solve(int a) {
    int n = a;
    int count=0;
    while(n!=0){
        a = a/2;
        if(a*2 == n) count++;
        else{
            return count;
        }
        n = n/2;
        a = n;
    }
    return 0;
}
=======
int Solution::solve(int a) {
    int n = a;
    int count=0;
    while(n!=0){
        a = a/2;
        if(a*2 == n) count++;
        else{
            return count;
        }
        n = n/2;
        a = n;
    }
    return 0;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
