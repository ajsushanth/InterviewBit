<<<<<<< HEAD
int Solution::isPalindrome(int A) {
    if(A<0) return 0;
    int n = A, rev=0;
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(rev == A) return 1;
    return 0;
}
=======
int Solution::isPalindrome(int A) {
    if(A<0) return 0;
    int n = A, rev=0;
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    if(rev == A) return 1;
    return 0;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
