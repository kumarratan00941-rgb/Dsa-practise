#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int>nums(n);
	
	//input
	for(int i=0;i<n;i++) {
		cin>>nums[i];
	}
	
	vector<vector<int>>ans;
	sort(nums.begin(),nums.end());
	//fixed the first element
	for(int i=0;i<n-2;i++) {
		//remove the first duplicate element
		if(i>0 && nums[i]==nums[i-1]) {
			continue;
		}
		
		int left=i+1;
		int right=n-1;
		while(left<right) {
		
		
		int sum=(nums[i]+nums[left]+nums[right]);
		if(sum==0) {
			ans.push_back({nums[i],nums[left],nums[right]});
			left++;
			right--;
			while(left<right && nums[left]==nums[left-1]) {//remove duplicate from left
				left++;
			}
			while(left<right && nums[right]==nums[right+1]) {//remove duplicate from right
				right--;
			}
		}
		
		else if(sum<0) {
			
			left++;//we need to increase the sum so we move left further
			
		}
		
		else {
			right--;
		}
	}
	

}

//output

for(int i=0;i<ans.size();i++) {
	cout<<ans[i][0]<<" "
		<<ans[i][1]<<" "
		<<ans[i][2]<<endl;
}
}
