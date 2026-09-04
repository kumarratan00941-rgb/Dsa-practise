#include<bits/stdc++.h>
using namespace std;
int longestones(vector<int>&nums,int k) {
	int zerocount=0;
	int left=0;
	int maxLen=0;
	
	for(int right=0;right<nums.size();right++) {
		if(nums[right]==0) {
			zerocount++;
		}
		
		while(zerocount>k) {
			if(nums[left]==0) {
				zerocount--;
			}
			left++;
		}
		
		maxLen=max(maxLen,right-left+1);
	}
	
	return maxLen;
}

int main () {
	
	int n,k;
	cin>>n>>k;
	
	vector<int>nums(n);
	
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	 cout<<longestones(nums,k);
	
	

}
