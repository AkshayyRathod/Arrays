vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int a;
    int b;
    for(int i=0; i<A.size(); i++){
        if(A[abs(A[i])-1] < 0){
            a=A[abs(A[i])];
        }else{
            A[abs(A[i])-1] = -A[abs(A[i])-1];
        }
    }
    for(int i=0; i<A.size(); i++){
        if(A[i]>0){
            b=A[i]+1;
            break;
        }
    }

    return vector<int> v=[a,b];
}
