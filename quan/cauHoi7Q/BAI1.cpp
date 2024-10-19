#include <bits/stdc++.h>
using namespace std;

bool nt(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	freopen("BAI1.INP","r", stdin);
	freopen("BAI1.OUT","w",stdout);
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		if(nt(i))
		{
			cout<<i<<" ";
		}
	}
	
	return 0;
}
