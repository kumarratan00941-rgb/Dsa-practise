#include <bits/stdc++.h>
using namespace std;
int findLucky(vector<int>&arr) {
	unordered_map<int,int>freq;
	for(int i=0;i<arr.size();i++) {
		freq[arr[i]]++;
	}
	
	int ans=-1;
	for(auto it:freq) {
		if(it.second==it.first) {
			ans=max(ans,it.first);
		}
	}
	
	return ans;
}

int main () {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<findLucky(arr);
}
