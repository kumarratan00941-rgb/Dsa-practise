#include<iostream>
#include<vector>
#include<map>
using namespace std;
//int main () {
//	int n,m;
//	cin>>n>>m;
//	
//	vector<int>a(n);
//	vector<int>b(m);
//	
//	for(int i=0;i<n;i++) {
//		cin>>a[i];
//	}
//	
//	for(int i=0;i<n;i++) {
//		cin>>b[i];
//	}
//	
//	map<int,int>mp;
//		for(int x:a) {
//		mp[x]++;
//	}
//	
//	for(int x:b) {
//		mp[x]++;
//	}
//	
//	for(auto it:mp) {
//		cout<<it.first<< " ";
//	}
//	
//	
//}
int main () {
	int n,m;
	cin>>n>>m;
	
	vector<int>a(n);
	vector<int>b(m);
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++) {
		cin>>b[i];
	}
	
	
	map<int,int>mp;
	for(int x:a) {
		mp[x]++;
	}
	
	for(int x:b) {
		mp[x]++;
	}
	for(auto it:mp) {
	

		cout<<it.first<<" ";
	}
	
	
	
}
