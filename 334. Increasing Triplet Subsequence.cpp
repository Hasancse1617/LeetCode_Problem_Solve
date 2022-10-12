#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int n = nums.size();
       int max =  INT_MAX;
       int min = INT_MAX;

       for(int i=0; i<n; i++){
         if(nums[i] <= max){
            max = nums[i];
         }else if(nums[i] <= min){
            min = nums[i];
         }else{
            return true;
         }
       }
       return false;
    }
};

int main(){
    int n;
    cout<<"Enter the number of input: ";
    cin>>n;
    vector<int> vec1;
    int element;
    for(int i=0; i<n; i++){
        cin>>element;
        vec1.push_back(element);
    }
    Solution sol;
    int t = sol.increasingTriplet(vec1);
    if(t){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
