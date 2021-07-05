#include<bits/stdc++.h>
using namespace std;

int numAnagrams(vector<string> myStrings, string word){
    unordered_map<char, int> fw;
    for(char c='a';c<='z';c++)
        fw[c] = 0;
    
    for(auto c: word)
        fw[c] ++;

    unordered_map<char, int> fs;
    int noOfAnagrams = 0;
    for(auto s: myStrings) {
        for(char c='a';c<='z';c++)
        fw[c] = 0;
    
        for(auto c: word)
            fw[c] ++;

        // Compare fs and fw
        bool flag = false;
        for(char c='a';c<='z';c++){
            if(fw[c] != fs[c]){
                flag = true;
                break;
            }
        }
        if(!flag) noOfAnagrams++;
    }
    return noOfAnagrams;
}


int main(){
    return 0;
}