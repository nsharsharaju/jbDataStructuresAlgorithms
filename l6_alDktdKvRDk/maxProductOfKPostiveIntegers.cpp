#include<bits/stdc++.h>
using namespace std;


int maxProdKIntegers(vector<int> &v,int k) {
    if(v.size()<k) return 0;
    priority_queue<int,vector<int>, greater<int>> q;
    //minimum priority queue
    int i = 0;
    for(;i<k;i++){
        q.push(v[i]);
    }
    for(;i<v.size();i++){
        if(q.top()<v[i]){
            q.pop();
            q.push(v[i]);
        }
    }
    int product = 1;
    while(!q.empty()){
        product*=q.top();
        q.pop();
    }
    return product;
}

int main(){
    vector<int> input = {3,1,10,20,12,18,14,100};
    cout << maxProdKIntegers(input,3) << endl;
    return 0;
}