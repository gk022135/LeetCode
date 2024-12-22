

#include<iostream>
#include<vector>

using  namespace std;

// #include<stdlib.h>
// class Solution {
// public:
//     string convertToBinary(int num){
//         string str = "";
//         while( num != 0){
//             int x = num %2;
//             str = to_string(x) + str;
//             num = num/2;
//         }
//         return str;

//     }
//     int minBitFlips(int start, int goal) {
//         string x = convertToBinary(start);
//         string y = convertToBinary(goal);

//         int k = max(x.size(),y.size());
//         int j = min(x.size(),y.size());
//         int n = k -j;
//         int cnt = 0;
        

//         if(x.size()<y.size()){
//             for(int i =0;i<n; i++ ){
//             x = '0'+x;
//             }
//         }
//         else{
//             for(int i =0;i<n; i++ ){
//             y = '0'+y;
//             }
//         }

//         //compare bits
//         for(int i =0; i< k; i++){
//             if(x[i] != y[i]) cnt++;
//         }
//         cout<<x<<" "<<y;
//         return cnt;
        
        
//     }
// };




class Solution {
public:
    string convertToBinary(int num){
        string str = "";
        while( num != 0){
            int x = num %2;
            str = to_string(x) + str;
            num = num/2;
        }
        return str;

    }
    int minBitFlips(int start, int goal) {
        int ans=start^goal; // same bit zero ho jyega aur different bits 1 hgye ga
        // toh ans mein jitne bits one honge utne hi flip hhue na
        int cnt=0;
    //     while(ans!=1 && ans>0)
    //     {
    //         cnt+=ans&1;
    //         ans=ans>>1;
    //     }

    //   if(ans==1){  cnt++;}
    string x = convertToBinary(ans);
    for(auto i : x){
        if(i == '1') cnt ++;
    }


        return cnt;
    }
};