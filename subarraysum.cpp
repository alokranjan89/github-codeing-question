#include <iostream>
#include <vector>
#include <climits>

using namespace std;

long long maxSubarraySum(vector<int> arr, int n) {
    long long sum = 0, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    vector<int> arr = {1, -3, 2, -5, 7, 6, -1, -4, 11, -23};
    int n = arr.size();
    cout << "Maximum subarray sum: " << maxSubarraySum(arr, n) << endl;
    return 0;
}
