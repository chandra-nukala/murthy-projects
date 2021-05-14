#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		int pre[n+1];
		pre[0]=0;
			pre[1]=arr[0];
		for(int i=1;i<=n;i++)
		{
		cin>>arr[i];
		if (arr[i]==-1)
		{
		pre[i]=pre[i-1]/(i-1);
		arr[i]=pre[i];
		}
	
				pre[i]=pre[i-1]+arr[i];
		}
	
	for (int i=1;i<=n;i++)
	
	cout<<arr[i]<<" ";
		cout<<"\n";
	}
	
}