#include<iostream>
#include<vector>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int>nums(n);
	
	
	//input
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	
	int j=0;
	for(int i=0;i<n;i++) {
		if(nums[i]!=0) {
			swap(nums[i],nums[j]);
			j++;
		}
	}
	
	//output
	for(int i=0;i<n;i++) {
		cout<<nums[i]<<" ";
	}
}