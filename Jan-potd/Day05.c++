//2381. Shifting Letters II

#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    string ChangeDir(string s, int st,int lt, int dir){
        string str = "";
        for(int i =st; i<= lt; i++){
            char x = s[i];
            if(dir == 1){
                x = (x=='z') ? 'a' : x+1;
            }
            else if(dir == 0){
                x = (x=='a') ? 'z' : x= x-1;
            }
            str = str + x;
        }
        return str;
    }
    vector<int>NetDiretion(vector<vector<int>>&shifts){
        return {};
    }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        for(auto shift : shifts){
            int start = shift[0];
            int end = shift[1];
            int dir = shift[2];

            string newstring  = ChangeDir(s,start,end,dir);
            s.replace(start,end-start+1,newstring);
        }
        //calu
        return s;
    }

};
int main(){
    Solution obj;
    string s = "abc";
    vector<vector<int>> shifts = {{0,1,0},{1,2,1},{0,2,1}};
    cout<<obj.shiftingLetters(s,shifts)<<endl;

    return 0;
}
