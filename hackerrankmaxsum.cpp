#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	vector<long long>nums(4);
	
	for(int i=0;i<4;i++) {
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	
cout<<nums[2]<<nums[3];
}
