#include<bits/stdc++.h>
using namespace std;

long solve(long n, long k)
{
	long arr[n];
	long val=0;
	for(long i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>k)
			val=val+(arr[i]-k);
	}
	return val;
}

int main()
{
	long t,n,k,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		x=solve(n,k);
		cout<<x<<endl;
	}

	return 0;
}