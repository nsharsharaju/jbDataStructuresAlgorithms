#include<bits/stdc++.h>
using namespace std;

void solve(){
    string input,output = "";
    cin >> input;
    if(input.length() == 1){
        cout << input+"1" << endl;
        return;
    }
    char prevC = input[0];
    int count = 1;
    for(int i=1;i<input.length();i++){
        if(prevC == input[i]) count++;
        else{
            output += prevC;
            output += to_string(count);
            count = 1;
            prevC = input[i];
        }
    }
    output += prevC;
    output += to_string(count);
    cout << output << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}