/*
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.
For each index i, names[i] and heights[i] denote the name and height of the ith person.
Return names sorted in descending order by the people's heights.
*/

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution{
    public: 
        vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
            map<int,string>hash;
            vector<string>peoples;

            int n = names.size();

            for(int i = 0; i<n; i++){
                hash[heights[i]] = names[i];
            }
            for(auto i : hash){
                peoples.push_back(i.second);
            }
            reverse(peoples.begin(), peoples.end());

            return peoples;

     }

};

int main(){
    vector<string>names = {"Gaurav","Saurav", "Sachin"};
    vector<int>heights = {170,175,150};

    vector<string> res;

    Solution obj;
    res = obj.sortPeople(names, heights);
    for(string i : res){
        cout<<i<<", ";
    }
    cout<<endl;
    return 0;

}