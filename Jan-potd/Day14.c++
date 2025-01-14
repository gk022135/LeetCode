// 2657. Find the Prefix Common Array of Two Arrays

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
    public:
      //approach -01
      int PrefixCnt(vector<int>&A, vector<int>&B, int x){
        int cnt = 0;
        for(int i =0; i<=x; i++){
            if(std::find(A.begin(),A.begin()+x+1, B[i]) != A.begin()+x+1){
                cnt++;
            }
        }
        return cnt;
      }
      vector<int> findPrefixCommon(vector<int>&A, vector<int>&B){

        int n = A.size();
        vector<int>res;

        for(int i = 0; i<n; i++){
           int x = PrefixCnt(A,B,i);
           res.push_back(x);
        }
        return res;
      }
};

int main(){
    Solution obj;
    vector<int>A = {};
    vector<int>B = {};

    vector<int>result;
    result = obj.findPrefixCommon(A, B);

    for(int i : result){
        cout<<i<<",";
    }
    cout<<endl;
    return 0;
}