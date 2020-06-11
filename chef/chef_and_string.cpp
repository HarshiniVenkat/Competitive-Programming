#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,cnt,i;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int l=s.length();
		cnt=0;
		i=0;
		if(l==1) cout<<'0'<<endl;
		else if(l==2)
		{
			if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
				cout<<'1'<<endl;
			else cout<<'0'<<endl;
		}
		else
		{
		while(i<l-1)
		{
			if(s[i]=='x' && s[i+1]=='y')
			{
				i=i+2;
				cnt++;
			}
			else if(s[i]=='y' && s[i+1]=='x')
			{
				i=i+2;
				cnt++;
			}
			else i++;
		}
		cout<<cnt<<endl;
	    }
    }
	return 0;
}