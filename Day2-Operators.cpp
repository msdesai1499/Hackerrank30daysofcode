#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a;
	cin>>a;
	double b,c;
	cin>>b>>c;
	double per=(a*b)/100;
	double tax=(a*c)/100;
	double ans=a+per+tax;
	cout<<round(ans);

	return 0;
}
