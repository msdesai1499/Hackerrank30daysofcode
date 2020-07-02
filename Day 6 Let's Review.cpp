#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<string> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string m;
		cin>>m;
		for(int j=0;j<m.size();j++)
		{
			if(j%2==0)
			{
				cout<<m[j];
			}
		}
		cout<<" ";
		for(int j=0;j<m.size();j++)
		{
			if(j%2!=0)
			{
				cout<<m[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
