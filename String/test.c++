#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    vector<int>vec = {1,2,3};
    cout<<endl;
    cout<<arr<<"arr \n";
    cout<<&vec[0]<<" vec \n";
    cout<<"before \n";
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    cout<<&arr[0]<<"arr \n";
    cout<<&vec[0]<<"&vec[0] \n";

    return 0;
}