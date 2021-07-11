#include<bits/stdc++.h>
using namespace std;

int Stoi(string s){
    int n = 0;
    for(auto c: s) {
        n*=10;
        // adding the integer equivalent of character c
        n += (c - '0');
    }
    return n;
}

string Itos(int n) {
    //Integer n converted to String equivalent s
    if(n==0)
        return "0";
    string s = "";
    while (n)
    {
        s += char(n%10+'0');
        n /= 10;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    cin >> input;
    cout << Stoi(input) << endl;
    int t;
    cin >> t;
    cout << Itos(t) << endl;
    return 0;

}