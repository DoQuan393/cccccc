#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("BAI2.INP","r", stdin);
	freopen("BAI2.OUT","w",stdout);
	string s;
	getline(cin,s);
	bool kt=false;
	int vitri=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == ' ')
		{
			cout<<i+1<<" ";
			kt = true;
		}
	}
	
	if(!kt)
	{
		cout<<-1;
	}
	
	
	return 0;
}
