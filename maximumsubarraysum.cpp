#include<bits/stdc++.h>
using namespace std;
int maximumsubarraysum(vector<int>&nums,int k) {
	int sum=0;
	int maxsum=0;
	
	for(int i=0;i<k;i++) {
		sum+=nums[i];
	}
	 maxsum=sum;
	for(int right=k;right<nums.size();right++) {
		sum+=nums[right];
		sum-=nums[right-k];
		
		maxsum=max(maxsum,sum);
		
	}
	
	
	return maxsum;
}

int main () {
	int n,k;
	cin>>n>>k;
	
	vector<int>nums(n);
	
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	cout<< maximumsubarraysum(nums,k);
}
