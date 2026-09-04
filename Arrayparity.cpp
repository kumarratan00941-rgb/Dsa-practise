#include<bits/stdc++.h>
using namespace std;
vector<int>Arrayparity(vector<int>&nums) {
	int left=0;
	for(int right=0;right<nums.size();right++) {
		if(nums[right]%2==0) {
			swap(nums[left],nums[right]);
			left++;
		}
	}
	return left;
	
	
}

int main () {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	vector<int>ans=Arrayparity(nums);
	for(int i=0;i<n;i++) {
		cout<<ans[i]<<" ";
	}
}
