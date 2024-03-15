#include <bits/stdc++.h> 
using namespace std;

void sortArray(vector<int>& arr, int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low ++;
            mid ++;
        }
        else if(arr[mid]==1){
            mid ++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    sortArray(arr, arr.size());
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;
}
