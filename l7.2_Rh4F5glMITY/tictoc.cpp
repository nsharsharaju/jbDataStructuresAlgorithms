#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int gridSize, x, y;
    char c;
    cin >> gridSize;
    // In Difference Array we are storing the Difference
    // between the number X's and 0's i.e |X| - |0|
    vector<int> diffRows(gridSize,0);
    vector<int> diffCols(gridSize,0);
    int diffDiag1 = 0, diffDiag2 = 0;
    bool winnerFound = false;
    //TODO :- Need to write conditions for this.
    while(!winnerFound){
        cin >> x >> y >> c;
        if(c == 'X') {
            diffRows[x-1] ++;
            diffCols[y-1] ++;
            if(x == y) diffDiag1 ++;
            if(x+y == gridSize+1) diffDiag2++;
        }
        if(c == 'O') {
            diffRows[x-1] --;
            diffCols[y-1] --;
            if(x == y) diffDiag1 --;
            if(x+y == gridSize+1) diffDiag2 --;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    while(t--)
        solve();
    return 0;
}