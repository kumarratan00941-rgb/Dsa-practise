#include<bits/stdc++.h>
using namespace std;

int minsizesubarraysum(vector<int>&nums,int target) {
	int left=0;
	int sum=0;
	int minLen=INT_MAX;
	
	
	for(int right=0;right<nums.size();right++) {
		sum+=nums[right];
		
		if(sum>=target) {
			minLen=min(minLen,right-left+1);
			sum-=nums[left]++;
			left++;
		}
		
		if(minLen==INT_MAX) {
			return 0;
		}
		
		return minLen;
	}
}

int main () {
	int n,target;
	cin>>n>>target;
	
	vector<int>nums(n);
	
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	
	cout<<minsizesubarraysum(nums,target);
}
