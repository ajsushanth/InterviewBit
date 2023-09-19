int countStudents(vector<int> &books, long long pages, int s){
    int students = 1;
    long long student_pages=0;
    for(int i=0; i<books.size(); i++){
        if(student_pages + books[i] <= pages) student_pages += books[i];
        else{
            students++;
            student_pages = books[i];
        }
    }
    return students;
}

int Solution::books(vector<int> &books, int s) {
    if(s > books.size()) return -1;
    int pmin=0;
    long long pmax=0;
    for(int i=0; i<books.size(); i++){
        pmin = max(pmin, books[i]);
        pmax += books[i];
    }
    //answer lies between pmin and pmax
    long long l=pmin, h=pmax;
    while(l <= h){
        long long m = (l+h)/2;
        int students = countStudents(books, m, s);
        if(students > s){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return l;
}
