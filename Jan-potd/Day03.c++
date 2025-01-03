//2270. Number of Ways to Split Array

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
    public:
    int waysToSplitArray(vector<int>& nums) {
        long long cnt =0;
        long long cumSum = 0;
        vector<long long>sum;

        for(int i =0; i<nums.size(); i++){
            cumSum = cumSum + nums[i];
            sum.push_back(cumSum);
        }

        for(int i =0; i<sum.size()-1; i++){
            long long l = i;
            long long r = sum.size()-1;

            if(sum[i] >= (sum[r]-sum[i])) cnt++;
        }
        return cnt;

    }
};
int main(){
    Solution obj;

    vector<int>nums = {10,4,-8,7};

    cout<<"Possible Ways to Split the given array for given condition "<<obj.waysToSplitArray(nums)<<endl;
    return 0;
}