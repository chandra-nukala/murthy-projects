#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int i,flag=0,n;
		cin>>n;
		int arr[n];
		int pre[n];
		int rpre[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		pre[0]=arr[0];
		for(int i=1;i<n;i++)
		pre[i]=pre[i-1]+arr[i];
		
		int ls=0,rs=0;		
		int index;
		if (n==1)
		cout<<"0";
		else
		{
		
		
		
		for(i=1;i<n-2;i++)
		{
ls=pre[i-1];
rs=pre[n-1]-pre[i];
		    if (ls==rs)
		    {
		        flag=1;
		        index=i;
break;
		    }
		}
		
		if (flag==1)
		cout<<index;
		else
		cout<<"-1";
		}
}
