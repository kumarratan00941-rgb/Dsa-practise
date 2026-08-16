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

	int totalsum=0;
	for(int i=0;i<nums.size();i++) {
		totalsum+=nums[i];
	}
	int leftsum=0;
	for(int i=0;i<nums.size();i++) {
		int rightsum=(totalsum-leftsum-i);
		if(leftsum==rightsum) {
			return i;
		}
		
		leftsum+=nums[i];
	}
	
	cout<<-1;
}

