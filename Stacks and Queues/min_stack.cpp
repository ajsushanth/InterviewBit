stack<int> st, min_st;
MinStack::MinStack() {
    while(st.size()!=0){
        st.pop();
    }
    while(min_st.size()!=0){
        min_st.pop();
    }
}

void MinStack::push(int x) {
    st.push(x);
    if(min_st.empty()) min_st.push(x);
    else if(x <= min_st.top()) min_st.push(x);
    else min_st.push(min_st.top());
    return;
}

void MinStack::pop() {
    if(!st.empty()) st.pop();
    if(!min_st.empty()) min_st.pop();
    return;
}

int MinStack::top() {
    if(!st.empty()) return st.top();
    else return -1;
}

int MinStack::getMin() {
    if(!min_st.empty()) return min_st.top();
    else return -1;
}

