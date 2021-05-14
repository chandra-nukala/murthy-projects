#include<iostream>
using namespace std;

void seive();

long long int x=1000001;
long long int s[1000001];


int main()
{
	seive();		
	int n;
	cin>>n;

	int c=0,i;
	for(i=2;i<=n;i++)
	{
		if(s[i]==1)
		c++;
	}

	cout<<c;

}

void seive()
{
	for(int i=0;i<x;i++)
	s[i]=1;
	s[0]=s[1]=0;		
	for(int i=2;i*i<x;i++)
	{
		if(s[i]==1)				
		{					
			for(int j=i*i;j<=x;j=j+i)
				s[j]=0;
		}
	}
}