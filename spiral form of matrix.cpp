#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j,k=0;
	cin>>m>>n;
	int a[m][n],b[m*n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<(m+1)/2;i++)
	{
		for(j=i;j<n-i;j++)
		{
			b[k]=a[i][j];
			k++;
		}
		for(j=i+1;j<m-i;j++)
		{
			b[k]=a[j][n-i-1];
			k++;
		}
		for(j=n-i-2;j>=i;j--)
		{
			b[k]=a[m-i-1][j];
			k++;
		}
		for(j=m-i-2;j>i;j--)
		{
			b[k]=a[j][i];
			k++;
		}
	}
	for(i=k-1;i>=0;i--)
		cout<<b[i]<<" ";
	return 0;			
}
