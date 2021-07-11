#include<bits/stdc++.h>
using namespace std;

int missingConvict(vector<int> &v, int n){
    int missingConvict = 0;
    for(int i=1;i<=n;i++){
        missingConvict^=i;
    }
    for(int i=0;i<v.size();i++){
        missingConvict^=v[i];
    }
    return missingConvict;
}

int main(){
    vector<int> input = {1,2,3,4};
    cout << missingConvict(input,5) << endl;
    return 0;
}