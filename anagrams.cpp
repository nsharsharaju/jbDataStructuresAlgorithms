#include<bits/stdc++.h>
using namespace std;

//TODO: Need to test this code
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
    vector<string> myStrings = {"harsha","anjani"};
    string word = "arshah";
    cout << numAnagrams(myStrings,word);
    return 0;
}