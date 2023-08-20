<<<<<<< HEAD
vector<int> Solution::addArrays(vector<int> &a, vector<int> &b) {
    vector<int> ans;
    long long i=a.size()-1, j=b.size()-1, k=0, carry=0, sum=0;
    while(i>=0 && j>=0){
        sum = a[i--] + b[j--] + carry;
        carry=0;
        if(sum>=10){
            carry = sum/10;
            sum = sum%10;
        }
        ans.push_back(sum);
        sum=0;
    }
    while(i>=0){
        sum = a[i--] + carry;
        carry=0;
        if(sum>=10){
            carry = sum/10;
            sum = sum%10;
        }
        ans.push_back(sum);
        sum=0;
    }
    while(j>=0){
        sum = b[j--] + carry;
        carry=0;
        if(sum>=10){
            carry = sum/10;
            sum = sum%10;
        }
        ans.push_back(sum);
        sum=0;
    }
    if(carry>0) ans.push_back(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}
=======
vector<int> Solution::addArrays(vector<int> &a, vector<int> &b) {
    vector<int> ans;
    long long i=a.size()-1, j=b.size()-1, k=0, carry=0, sum=0;
    while(i>=0 && j>=0){
        sum = a[i--] + b[j--] + carry;
        carry=0;
        if(sum>=10){
            carry = sum/10;
            sum = sum%10;
        }
        ans.push_back(sum);
        sum=0;
    }
    while(i>=0){
        sum = a[i--] + carry;
        carry=0;
        if(sum>=10){
            carry = sum/10;
            sum = sum%10;
        }
        ans.push_back(sum);
        sum=0;
    }
    while(j>=0){
        sum = b[j--] + carry;
        carry=0;
        if(sum>=10){
            carry = sum/10;
            sum = sum%10;
        }
        ans.push_back(sum);
        sum=0;
    }
    if(carry>0) ans.push_back(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}
>>>>>>> 13c5de8cfb1461e5003fe768e660951192c08054
