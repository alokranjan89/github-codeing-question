#include <iostream>
#include <vector>
#include <algorithm>
#include <limits> // Include the header file for INT_MIN
using namespace std;

int longestSuccessiveElements(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int lastSmaller = numeric_limits<int>::min(); // Use numeric_limits<int>::min() for INT_MIN
    int cnt = 0;
    int longest = 1;
    for(int i = 0; i < n; i++) {
        if(nums[i] - 1 == lastSmaller) {
            cnt += 1;
            lastSmaller = nums[i];
        }
        else if(lastSmaller != nums[i]) {
            cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Length of the longest consecutive elements sequence: " << longestSuccessiveElements(nums) << endl;
    return 0;
}
