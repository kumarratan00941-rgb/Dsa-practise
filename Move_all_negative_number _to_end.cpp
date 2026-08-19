#include<iostream>
#include<vector>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int>arr(n);
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	vector<int>temp(n);
	for(int i=0;i<n;i++) {
		if(temp[i]>0) {
			temp.push_back(arr[i]);
		}
		
	}
	//add all negative number
	if(temp[i]<0) {
		temp.push_back(arr[i]);
	}
}


for(int i=0;i<ans.size();i++) {
	cout<<ans[i]<<" ";
}
