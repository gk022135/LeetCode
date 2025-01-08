/*
1769. Minimum Number of Operations to Move All Balls to Each Box
*/
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    int LeftSum(int st,int lt,string s){
      int sum = 0;
       for(int i = lt; i >= st; i--) {
           if(s[i] == '1') {
               sum += abs(i - lt);
           }
       }
       return sum;
    }
    int RightSum(int st, int lt,string s){
        int sum = 0;
       for(int i = st; i <= lt; i++) {
           if(s[i] == '1') {
               sum += abs(i - st);
           }
       }
       return sum;

    }
    vector<int> minOperations(const string& s) {
        int n = s.size();
        vector<int>res;

        for(int i =0;i<n;i++){
            int left_sum = LeftSum(0,i,s);
            int right_sum = RightSum(i,n-1,s);
            res.push_back(left_sum + right_sum);
        }
        return res;
    };
};

int main(){
    Solution obj;
    string str = "110";
    vector<int>result;
    result = obj.minOperations(str);

    cout<<endl;
    for(int i : result) cout<<i<<", ";
    cout<<endl;
   return 0;
}
