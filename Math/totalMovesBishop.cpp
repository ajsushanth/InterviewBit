int min(int a, int b){
    return (a < b) ? a : b;
}

int Solution::solve(int a, int b) {
    int ru = a - 1;
    int rd = 8 - a;
    int cl = b - 1;
    int cr = 8 - b;
    
    return min(ru, cl) + min(ru, cr) + min(rd, cl) + min(rd, cr);
}
