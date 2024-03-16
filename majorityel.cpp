#include <iostream>
#include <vector>
#include <map>

using namespace std;

int majorityElement(vector<int>& nums) {
    map<int, int> mpp;
    for(int i = 0; i < nums.size(); i++){
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if(it.second > (nums.size() / 2)){
            return it.first;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}
