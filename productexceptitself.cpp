//238. Product of Array Except Self
//Solved
//Medium
//Topics
//premium lock icon
//Companies
//Hint
//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//
//You must write an algorithm that runs in O(n) time and without using the division operation.
//
// 
//
//Example 1:
//
//Input: nums = [1,2,3,4]
//Output: [24,12,8,6]
//Example 2:
//
//Input: nums = [-1,1,0,-3,3]
//Output: [0,0,9,0,0]
// 
//
//Constraints:
//
//2 <= nums.length <= 105
//-30 <= nums[i] <= 30



#include<bits/stdc++.h>
using namespace std;
vector<int> productexceptself(vector<int>&nums) {
	int n=nums.size();
	vector<int>prefix(n);
	vector<int>suffix(n);
	vector<int>ans(n);
	//prefix product
	prefix[0]=1;
	for(int i=1;i<nums.size();i++) {
		prefix[i]=prefix[i-1]*nums[i-1];
	}
	
	suffix[n-1]=1;
	for(int i=n-2;i>=0;i--) {
		suffix[i]=suffix[i+1]*nums[i+1];
	}
	
	
	for(int i=0;i<n;i++) {
	
	ans[i]=prefix[i]*suffix[i];
	
}

return ans;


}

int main () {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++) {
	
	cin>>nums[i];
	
}
vector<int>ans=productexceptself(nums);
for(int i=0;i<n;i++) {
	cout<<ans[i]<<" ";
	
}


}
