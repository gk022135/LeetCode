/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
       int maxArea(vector<int>&height){
        int Area = 0;
        int i =0;
        int j = height.size()-1;

        while(i<j){
            int diff = abs(j-i);
            int lenght = min(height[i], height[j]);
            int res = diff * lenght;

            Area =  max(Area,res);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return Area;
       }
};

int main(){
    vector<int>Height = {1,8,6,2,5,4,8,3,7};

    Solution obj;
    cout<<"maximum area is "<<obj.maxArea(Height)<<endl;
    return 0;
}