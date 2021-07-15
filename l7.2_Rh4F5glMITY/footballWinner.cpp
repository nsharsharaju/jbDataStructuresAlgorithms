#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    //This variable denotes number of chances
    int chances;
    cin >> chances;
    int winnerFound = 0;
    int cA = chances;
    int cB = chances;
    int diffGoals = 0;
    for(int i=0;i<2*chances; i++){
        char goal,team;
        cin >> goal >> team;
        if(team == 'A'){
            cA--;
            if(goal == 'G'){
                diffGoals++;
            }
        } else {
            cB --;
            if(goal == 'G') {
                diffGoals --;
            }
        }
        if(diffGoals > cB) winnerFound = 1;
        if(-1*diffGoals > cA) winnerFound = 2;
        if(winnerFound) break;
    }
    if(winnerFound == 1) cout << "Winner is A" << endl;
    else if(winnerFound == 2) cout << "Winner is B" << endl;
    else cout << "Match is Draw" << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    while(t--)
        solve();
    return 0;
}