#include<bits/stdc++.h>
using namespace std;

int subarrayproductlessthank(vector<int>nums,int k) {


if(k<=1) {
	return 0;
}

int left=0;
long long product=1;
int count=0;

for(int right=0;right<nums.size();right++) {
	product*=nums[right];
	
	while(product>=k) {
		product=product/nums[left++];
	}
	count+=(right-left+1);
}

return count;  






}





int main () {
	int n,k;
	cin>>n>>k;
	
	vector<int>nums(n);
	
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
		cout<< subarrayproductlessthank(nums,k);
		
	
}
