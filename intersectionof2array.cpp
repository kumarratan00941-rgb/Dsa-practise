#include<bits/stdc++.h>
using namespace std;
vector<int>intersectionofarray(vector<int>&nums1,vector<int>&nums2) {
	sort(nums1.begin(),nums1.end());
	sort(nums2.begin(),nums2.end());
	int i=0,j=0;
	vector<int>ans;
	while(i<nums1.size()&&j<nums2.size()) {
	
		
		if(nums1[i]==nums2[j]) {
			if(ans.empty()||ans.back()!=nums1[i]) {
			ans.push_back(nums1[i]);
		}
			i++;
			j++;
		}
		
		else if(nums1[i]<nums2[j]) {
			i++;
			
	}
	else {
		j++;
	}
	

	
			
		}
			return ans;
	}
	
	int main () {
		int n,m;
		cin>>n>>m;
		
		vector<int>nums1(n);
		vector<int>nums2(m);
		for(int i=0;i<n;i++) {
			cin>>nums1[i];
		}
		
		for(int i=0;i<m;i++) {
			cin>>nums2[i];
		}
		
		vector<int>ans=intersectionofarray(nums1,nums2);
		
		for(int i=0;i<ans.size();i++) {
			cout<<ans[i]<<" ";
		}
	}

