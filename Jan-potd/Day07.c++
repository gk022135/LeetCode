// 1408. String Matching in an Array

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> res;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    res.push_back(words[i]);
                    break;
                }
            }
        }

        return res;
    }
};
int main(){
    Solution obj;
    vector<string>words = {"mass","as","hero","superhero"};
    vector<string>word;

    word = obj.stringMatching(words);
    for(string dt: word) cout<<dt<<", ";
    cout<<endl;

    return 0;
}