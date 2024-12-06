//Method -1 Brute Force Approach


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<string>res(1000,"");
        int maxi = 0;

        for(int i =0;i<n;i++){

            for(int j =i;j<n;j++){
                string str = s.substr(i,j-i+1);
                string str1 = str;
                reverse(str.begin(),str.end());
                if(str == str1){
                 int count = str.size()-1;
                 res[count] = str;
                 maxi = max(maxi ,count);
                }

            }
        }
        return res[maxi];
        
    }
};

int main(){
    string s = "bababd";
    Solution obj;
   string str =  obj.longestPalindrome(s);
   cout<<endl;
   cout<<str;

}