#include<bits/stdc++.h>
using namespace std;
bool isSubSeq(string s1,string s2) {
	int i=0;
	int j=0;
	while(i<s1.size() && j<s2.size()) {
		if(s1[i]==s2[j]) {
			i++;
		}
		j++;
	}
	return i==s1.size();
	
}
int main () {
	string s1, s2;
	cin>>s1;
	cin>>s2;
	
	 if	(isSubSeq(s1,s2)){
	 	cout<<true;
	 }
	 else {
	 	cout<<false;
	 }
	
}
