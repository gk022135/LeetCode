//Method -1 Brute Force Approach


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int n = s.size();
//         vector<string>res(1000,"");
//         int maxi = 0;

//         for(int i =0;i<n;i++){

//             for(int j =i;j<n;j++){
//                 string str = s.substr(i,j-i+1);
//                 string str1 = str;
//                 reverse(str.begin(),str.end());
//                 if(str == str1){
//                  int count = str.size()-1;
//                  res[count] = str;
//                  maxi = max(maxi ,count);
//                 }

//             }
//         }
//         return res[maxi];
        
//     }
// };


// Method -2 Recursion

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string result = "";
        longestPalindromeRecursive(s, 0, n - 1, result);
        return result;
    }

private:
    void longestPalindromeRecursive(string& s, int start, int end, string& result) {
        // Base Case: If start exceeds end, stop recursion
        if (start > end) {
            return;
        }

        if (isPalindrome(s, start, end)) {
            string current = s.substr(start, end - start + 1);
            if (current.size() > result.size()) {
                result = current;
            }
        }

        longestPalindromeRecursive(s, start + 1, end, result); 
        longestPalindromeRecursive(s, start, end - 1, result);
    }

    bool isPalindrome(string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};


int main(){
    string s = "bababd";
    Solution obj;
   string str =  obj.longestPalindrome(s);
   cout<<endl;
   cout<<str;

}

// Method - 2 Apply Recursion
