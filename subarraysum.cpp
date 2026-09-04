#include<bits/stdc++.h>
using namespace std;
int subarraysum(vector<int>&nums,int k) {

unordered_map<int,int>mp;
mp[0]=1;
int sum=0;
int count=0;
for(int i=0;i<nums.size();i++) {
	sum+=nums[i];
	
	if(mp.find(sum-k)!=mp.end()) {
		count+=mp[sum-k];
	}
	mp[sum]++;
	
}
return count;

}

int main () {
	int n,k;
	cin>>n>>k;
	
vector<int>nums(n);

//input
for(int i=0;i<n;i++) {
	cin>>nums[i];
}
//output
cout<< subarraysum(nums,k);
	
}
