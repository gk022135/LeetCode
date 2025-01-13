// 3223. Minimum Length of String After Operations

#include<iostream>
#include<vector>

using namespace std;


//Approach 01 TC O(n2)
class Solution {
public:
    int leftRemove(int x, const string &str) {
        for (int i = x - 1; i >= 0; i--) {
            if (str[i] == str[x]) {
                return i;
            }
        }
        return -1;
    }

    int rightRemove(int x, const string &str) {
        int n = str.size();
        for (int i = x + 1; i < n; i++) {
            if (str[i] == str[x]) {
                return i;
            }
        }
        return -1;
    }

    int minimumLength(string s) {
        string str = s;
        for (int i = 1; i < str.size() - 1; i++) {
            int y = leftRemove(i, str);
            int z = rightRemove(i, str);

            if (y >= 0 && z >= 0) {
                str.erase(y, 1);    // Remove character at index y
                str.erase(z - 1, 1);  // Adjust z to the new index after removing y
                i = -1;  // Reset the loop to scan from the start again
            }
        }
        return str.size();
    }
};

//Approach -02 Optimal TC O(n);
class Solution2{
    public:
        int minimumLength(string s){
            int n = s.size();
            int cnt = 0;
            vector<int>freq(26,0);

            for(int i =0; i<n; i++){
                freq[s[i] - 'a']++;
                if(freq[s[i] - 'a'] == 3){
                     freq[s[i] - 'a'] -=2;
                     cnt++;
                }
            }
            return n - 2*cnt;
        }

};
int main(){
    Solution approach1;
    Solution2 approach2;

    string s= "abaacbcbb";

    cout<<"approach1: after all operation string size: "<<approach1.minimumLength(s);
    cout<<"approach2: after all operation string size: "<<approach2.minimumLength(s);
    return 0;
}