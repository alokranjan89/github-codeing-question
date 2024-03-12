#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> book(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> book[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    int left = 0, right = n - 1;
    sort(book.begin(), book.end());
    while (left < right) {
        int sum = book[left] + book[right];
        if (sum == target) {
            cout << "yes" << endl;
            return 0;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "no" << endl;
    return 0;
}