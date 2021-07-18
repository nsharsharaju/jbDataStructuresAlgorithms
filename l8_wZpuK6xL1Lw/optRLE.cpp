#include <bits/stdc++.h>
using namespace std;

//TODO: This code is may be not working, need to work on it
void solve()
{
    string s;
    cin >> s;
    string opt;
    opt += s[0];
    int cnt = 0;
    string tempCnt = "";
    for (int i = 1; i < s.length(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            tempCnt += s[i];
        }
        else
        {
            cnt += stoi(tempCnt);
            if (opt[opt.length() - 1] != s[i])
            {
                opt += to_string(cnt);
                opt += s[i];
                cnt = 0;
            }
        }
        tempCnt = "";
    }
    cnt += stoi(tempCnt);
    opt += to_string(cnt);
    cout << opt << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
