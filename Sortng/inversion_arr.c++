//you have to check arr[i]>arr[j] and i<j gfg day 21 question sorting

//Brute Froce Appraoch 
//T.C O(n^2);
//S.C O()

#include<iostream>
#include<vector>

using namespace std;

class Solution{

public:

    int inversionCount(vector<int>&arr){


        int  n = arr.size();
        int cnt =0;

        for(int i =0; i<n;i++){
            for(int j = i+1 ; j < n; j++){
                if(arr[i]>arr[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }

};

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i =0;i<n ;i++){
        int x;cin>>x;
        arr.push_back(x);

    }
    Solution  obj;
    int res =  obj.inversionCount(arr);
    cout<<"inversion count: "<<res;
    return 0;

}