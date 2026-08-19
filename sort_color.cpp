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
	int left=0;;
	int mid=0;
	int high=n-1;
	
	while(mid<=high) {
		if(nums[mid]==0) {
			swap(nums[left],nums[mid]);
			left++;
			mid++;
		}
		else if(nums[mid]==1) {
			mid++;
			
		}
		else {
			swap(nums[mid],nums[high]);
			high--;
		}
	}
	
	for(int i=0;i<n;i++) {
		cout<<nums[i]<<" ";
	}
	
}
