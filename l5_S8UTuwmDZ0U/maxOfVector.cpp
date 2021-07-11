#include<bits/stdc++.h>
using namespace std;

int MaxVector(vector<int> &v) {
    int cm = INT_MIN;
    for(auto n:v){
        if(n > cm) {
            cm = n;
        }
    }
    return cm;
}

int main(){
    vector<int> input = {1,2,3};
    cout << MaxVector(input) << endl;
    return 0;
}