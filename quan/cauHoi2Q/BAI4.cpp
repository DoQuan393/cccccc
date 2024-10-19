#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("BAI4.INP","r", stdin);
	freopen("BAI4.OUT","w",stdout);
	int n;
	cin>>n;
	string n1 = to_string(n);
	int tong=0;
	for(char c : n1)
	{
		tong+=c-'0';
	}
	cout<<tong;
	
	return 0;
}
