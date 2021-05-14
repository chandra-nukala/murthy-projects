#include<iostream>
using namespace std;

long long int N=100001;
long long int s[100001];
void seive();
int main()
{
	seive();		
	int n,i;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(s[i]==1)
		cout<<i<<" ";
	}
	return 0;
}

void seive()
{
	for(int i=0;i<N;i++) 
	s[i]=1;
	s[0]=s[1]=0;	
	for(int i=2;i*i<N;i++)
	{
		if(s[i]==1)			
		{					
			for(int j=i*i;j<=N;j=j+i)
				s[j]=0;
		}
	}
}

