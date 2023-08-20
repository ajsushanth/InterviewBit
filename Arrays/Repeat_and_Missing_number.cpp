vector<int> Solution::repeatedNumber(const vector<int> &arr) {
    vector<int> sol;
    int x=arr[0];
    for(int i=1; i<arr.size(); i++){
        x = x^arr[i];
    }
    for(int i=1; i<=arr.size(); i++){
        x = x^i;
    }
    int bit=0;
    for(int i=0; i<32; i++){
        int num = x;
        num = num>>i;
        if((num&1)==1){
            bit = i;
            break;
        }
    }
    vector<int> box1, box2;;
    for(int i=0; i<arr.size(); i++){
        int num = arr[i];
        num = num>>bit;
        if(num&1) box1.push_back(arr[i]);
        else box2.push_back(arr[i]);
    }
    for(int i=1; i<=arr.size(); i++){
        int num = i;
        num = num>>bit;
        if(num&1) box1.push_back(i);
        else box2.push_back(i);
    }
    int flag=1;
    int ans1 = box1[0];
    int ans2 = box2[0];
    for(int i=1; i<box1.size(); i++) ans1 = ans1^box1[i];
    for(int i=1; i<box2.size(); i++) ans2 = ans2^box2[i];
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == ans1){
            sol.push_back(ans1);
            sol.push_back(ans2);
            flag = 0;
            break;
        }
    }
    if(flag){
        sol.push_back(ans2);
        sol.push_back(ans1);
    }
    return sol;
}
