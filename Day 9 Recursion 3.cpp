#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	if(n<2)
	{
		return n;
	}
	else
	{
		return n*factorial(n-1);
	}
	
}
int main()
{
	int n;
	cin>>n;
	cout<<factorial(n);
	return 0;
}
