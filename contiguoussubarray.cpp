#include<bits/stdc++.h>
using namespace std;
int findmaxLen(vector<int>nums) {
	unordered_map<int,int>mp;
	int maxLen=0;
	int sum=0;
	
	for(int i=0;i<nums.size();i++) {
		if(nums[i]==0) {
			sum+=-1;
			
		}
		
		else {
			sum+=1;
		}
		
		if(sum==0) {
			maxLen=i+1;
		}
		
		
		if(mp.find(sum)!=mp.end()) {
			maxLen=max(maxLen,i-mp[sum]);
		}
		else {
			mp[sum]=i;
		}
	}
	
	return maxLen;
}

int main () {
	int n;
	cin>>n;
	
	vector<int>nums(n);
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	cout<< findmaxLen(nums);
	
}
