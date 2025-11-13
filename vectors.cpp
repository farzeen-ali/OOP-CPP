#include<iostream>
#include<vector>

using namespace std;

int main(){
    // Arrays ==> collection of elements (fixed size)
    // int marks[4] = {10,20,30,40};
    // cout<<marks[2];

    // Vectors (dynamic arrays)
    vector<int> nums; // vector declaration

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    // nums = 10, 20, 30
    // cout<<nums[1];

    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    // nums.pop_back();
    // cout<<"After removing!"<<endl;

    //  for(int i = 0; i < nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }

    // for each
    for(int n : nums){
        cout<<n<<" ";
    }

    return 0;
}