#include<bits/stdc++.h>
using namespace std;
vector<int> runningsum(vector<int>nums) {
	for(int i=1;i<nums.size();i++) {
		nums[i]=nums[i-1]+nums[i];
	}
	return nums;
}
int main () {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++) {
	

	cin>>nums[i];
}
 vector<int>ans=runningsum(nums);
 for(int i=0;i<n;i++) {
 	cout<<ans[i]<<" ";
 }

}


