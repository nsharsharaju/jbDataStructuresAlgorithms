#include<bits/stdc++.h>
using namespace std;

int timeToType(string keyboard, string word){
    unordered_map<char,int> pos;
    for(int p=0;p<keyboard.length();p++){
        pos[keyboard[p]] = p;
    }
    int prevPos = 0;
    int timeToType = 0;
    for(auto c:word){
        timeToType+=abs(pos[c] - prevPos);
        prevPos = pos[c];
    }
    return timeToType;
}

int main(){
    string a,b;
    cin>>a>>b;
    cout << "Time Taken :" << timeToType(a,b) << endl;
    return 0;
}