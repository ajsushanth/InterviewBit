<<<<<<< HEAD
int Solution::trailingZeroes(int A) {
    int count=0;
    for(int i=5; i<=A; i=i*5){
        count += A/i;
    }
    return count;
}
=======
int Solution::trailingZeroes(int A) {
    int count=0;
    for(int i=5; i<=A; i=i*5){
        count += A/i;
    }
    return count;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
