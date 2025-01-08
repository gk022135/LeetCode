//3042. Count Prefix and Suffix Pairs I

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2){
        int n = str1.size();
        int m = str2.size();
        // if(n>m) return false;
        string pre = str2.substr(0,n);
        string suf = str2.substr(m-n, m);

        if(pre == suf && pre == str1) return true;
        else return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt  = 0;

        for(int  i =0; i<words.size()-1; i++){
            for(int j = i+1; j<words.size();j++){
                if(words[i].size() > words[j].size()) continue;
                else if(isPrefixAndSuffix(words[i], words[j])) cnt++;
            }
        }
        return cnt;
        
    }
};
