#include<iostream>
#include<vector>
using namespace std;
int main () {
	
	int n;
	cin>>n;
	
	vector<int>nums1[n];
	vector<int>nums2[n];
	
	for(int i=0;i<n;i++) {
		cin>>nums1[i];
		
	}
	for(int i=0;i<n;i++) {
		cin>>nums2[i];
	}

	
	sort(nums1.begin(),nums1.end());
	sort(nums2.begin(),nums2.end());
	vector<int>ans;
	int i=0;
	int j=0;
	while(i<nums1.size()&&j<nums2.size());
	if(nums[i]==nums[j]) {
		if(ans.empty()||ans.back()!=nums1[i]) {
			ans.push_back(nums1[i]);
		}
		
		
	}
	
	else if(nums1[i]<nums2[j]) {
		i++;
	}
	
	else {
		j++;
	}
	
}

for(int i=0;i<ans.size();i++) {
	cout<<ans[i]<<" ";
}
