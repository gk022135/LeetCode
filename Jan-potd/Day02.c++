#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        unordered_map<char, int> vowels;
        vowels['a'] = 1;
        vowels['e'] = 1;
        vowels['i'] = 1;
        vowels['o'] = 1;
        vowels['u'] = 1;

        int N = words.size();
        vector<int> cumSum(N, 0);
        int cnt = 0;

        vector<int> result;

        for (int i = 0; i < N; i++) {
            char first = words[i][0];
            char last = words[i][words[i].size() - 1];

            if (vowels[first] && vowels[last]) {
                cnt++;
            }
            cumSum[i] = cnt;
        }

        for (auto query : queries) {
            int l = query[0];
            int r = query[1];

            result.push_back(cumSum[r] - ((l > 0) ? cumSum[l - 1] : 0));
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<string> words = {"aba", "bcb", "ece", "aa", "e"};
    vector<vector<int>> queries = {{0, 2}, {1, 4}, {1, 1}};

    vector<int> res;

    res = obj.vowelStrings(words, queries);

    cout << "Words that start and end with vowels in the given range are: \n";

    for (int i : res) {
        cout << i << ", ";
    }
    cout << endl;

    return 0;
}
