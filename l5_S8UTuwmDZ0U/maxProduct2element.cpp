#include<bits/stdc++.h>
using namespace std;

long long maxProductOfTwoIntegers(vector<int> &v) {
    // returns the maximum product of two integers in v
    long long max1 = INT_MIN, max2 = INT_MIN;
    long long min1 = INT_MAX, min2 = INT_MAX;

    for(auto n:v) {
        //Maximum
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
        {
            max2 = n;
        }

        //Minimum
        if (n < min1)
        {
            min2 = min1;
            min1 = n;
        }
        else if (n < min2)
        {
            min2 = n;
        }
        return max(max1*max2,min1*min2);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}