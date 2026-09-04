#include<bits/stdc++.h>
using namespace std;
 double maxsumaverage(vector<int>&nums,int k) {
 	int sum=0;
 
 	for(int i=0;i<nums.size();i++) {
 		sum+=nums[i];
	 }
	 
	 int maxsum=sum;
	 for(int i=k;i<nums.size();i++) {
	 	sum+=nums[i];
	 }
 }
