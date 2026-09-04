#include<bits/stdc++.h>
using namespace std;
int Removeelement(vector<int>&nums,int val) {
	int left=0;
	for(int right=0;right<nums.size();right++) {
		if(nums[right]!=val) {
		
		(nums[left]=nums[right]) ;
			left++;
			
			
		}
		
	
	

	}
		return left;
}

int main () {
	int n,val;
	cin>>n>>val;
	vector<int>nums(n);
	
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	
	 int left=Removeelement(nums,val);
	for(int i=0;i<left;i++) {
		cout<<nums[i]<<" ";
	}
}

