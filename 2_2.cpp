#include<iostream>
using namespace std;


long long int N=1000001;
long long int s[1000001];
void seive();


int main()
{
	seive();		
	int n,i,c=0;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(s[i]==1)
		c++;
	}
	cout<<c;
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
			for(int j=i*i;j<=N;j+=i)
				s[j]=0;
		}
	}
}