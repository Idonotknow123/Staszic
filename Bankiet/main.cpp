#include<iostream>
using namespace std;
long poz, w, k, N;
int main()
{
cin >> N;
long T[N+1];
for(int a=1; a<=N; a++)
{
    cin>>T[a];
}
int k=-1, w=0;
for(int i=1;i<=N;i++)
{
if(T[i]>0)
{
    poz=T[i];
    while(T[i]>0)
    {
     T[i]=k;
     i=poz;
     poz=T[i];
    }
    w++;
    k=k-1;
}
}
cout<<w;
	return 0;
}