#include<bits/stdc++.h>
using namespace std;

int pivotindex(vector<int>nums) {
	int totalsum=0;
	for(int i=0;i<nums.size();i++) {
		totalsum+=nums[i];
	}
	
	int leftsum=0;
	for(int i=0;i<nums.size();i++) {
		int rightsum=totalsum-leftsum-nums[i];
		
		if(leftsum==rightsum) {
			return i;
		}
		leftsum+=nums[i];
		
	}
	
	return -1;
}

int main () {
	int n;
	cin>>n;
	vector<int>nums(n);
	
	
	//input
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	cout<<pivotindex(nums);
}
