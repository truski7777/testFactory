#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a[N];
	for(int i=0;i<=N;i++)	
		cin>>a[i];
		sort(a,a+N); //Ä¬ÈÏÉıĞò 
	int b[N];
	int pos=0;
	for(int i=0;i<N;i++)
	{
		if(a[i]!=a[i+1])
		{
			b[pos]=a[i];
			pos++;
		}	
	}
	cout<<pos<<endl;
	for(int i=0;i<pos;i++)
		cout<<b[i]<<" ";
	return 0;
}
