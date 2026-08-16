#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    // Input
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Calculate total sum
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;

    // Find pivot index
    for(int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum) {
            cout << i;
            return 0;
        }

        leftSum += nums[i];
    }

    cout << -1;

    return 0;
}
