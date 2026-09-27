#include<bits/stdc++.h>
using namespace std;
bool canconstruct(string magazine,string ransomNote) {
	unordered_map<int,int>freq;
	for(char c:magazine) {
		freq[c]++;
	}
	for(char c:ransomNote) {
		freq[c]--;
		
		if(freq[c]<0) {
			return false;
		}
	}
	return true;
	
}
int main () {
	string magazine,ransomNote;
	cin>>magazine;
	cin>>ransomNote;
	cout<<canconstruct(magazine,ransomNote);
}
