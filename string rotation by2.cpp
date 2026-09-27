#include<bits/stdc++.h>
using namespace std;
bool isrotated(string&s1,string&s2) {
	if(s1.size()!=s2.size()) {
		return false;
	}
	if(s1.size()<2) {
		return false;
	}
	
	//left rotate s1 by 2
	string left=s1.substr(2)+s1.substr(0,2);
	string right=s2.substr(2)+s2.substr(0,2);
	
	return s1==right||s2==left;
}
int main () {
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	if (isrotated(s1,s2)) {
		cout<< true;
	}
	else {
		cout<<false;
	}
}
