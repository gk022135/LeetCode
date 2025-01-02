//leetCode question number 560
//return number of possible subarray whose sum is equal to k

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
    public:
      int numSubarray(vector<int> &arr, int k){
        int sum = 0;
        int cnt = 0;

        unordered_map<int, int> hash;

        for(int i =0; i<arr.size(); i++){
            sum = sum + arr[i]; //similar to cummulative Sum

            if(sum == k){
                cnt++;
            }

            int prefixSum = sum - k;
            cnt = cnt + hash[prefixSum];

            hash[sum]++;
        }
        return cnt;
      }
};

int main(){
    Solution obj;

    vector<int> arr = {1,1,1};
    int k = 2;

    cout<<"possible subarray whose sum is "<<k<<" is "<<obj.numSubarray(arr,k)<<endl;

    return 0;
}