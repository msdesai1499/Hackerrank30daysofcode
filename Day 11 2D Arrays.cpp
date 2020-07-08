#include<bits/stdc++.h>
using namespace std;
#define SIZE 6
#define size_glass 3
int main()
{
	vector< vector<int> > v(SIZE,vector<int>(SIZE));
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			
			cin>>v[i][j];
		}
	}
	int max=-1000,sum=0;
	for(int i=0;i<(SIZE-size_glass+1);i++)
	{
		for(int j=0;j<(SIZE-size_glass+1);j++)
		{
			for(int m=j;m<j+size_glass;m++)
			{
				sum=sum+v[i][m];
			}
			for(int n=j;n<j+size_glass;n++)
			{
				sum=sum+v[i+size_glass-1][n];
			}
			sum=sum+v[i+1][j+1];
			cout<<sum<<endl;
			if(sum>max)
			{
				max=sum;
			}
			sum=0;
		}
		
	}
	cout<<max;
	
	return 0;
}
