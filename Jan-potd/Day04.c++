//1930. Unique Length-3 Palindromic Subsequences

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution{
    public:
    int countPalindromicSubsequence(string s){
        int n = s.length();
        int result = 0;

        unordered_set<char>letters;

        for(char i : s){
            letters.insert(i);
        }

        for(char letter : letters){
            int left_index = -1;
            int right_index = -1;

            for(int i =0; i<n; i++){

                if(letter == s[i]){
                    if(left_index == -1){
                        left_index = i;
                    }
                    right_index = i;
                }
            }

            unordered_set<char> track;

            for(int middle_idx = left_index+1; middle_idx< right_index; middle_idx++){
                track.insert(s[middle_idx]);
            }

            result = result + track.size();
        }
        return result;
    }
};

int main(){
    string s = "";

    Solution obj;
    cout<<"number of possible palindrome sub strings are "<<obj.countPalindromicSubsequence(s)<<endl;

    return 0;
}