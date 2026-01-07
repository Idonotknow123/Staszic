#include <bits/stdc++.h>

using namespace std;

long long n, k, waga[1007], wartosc[1007], D[1007][1007];

//k-poj plecaka

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin>>n>>k;

	for(long long i=1; i<=n; i++)
    {
        cin>>wartosc[i];
        cin>>waga[i];
    }

    //


    for(long long j=1; j<=n; j++)
    {
        for(long long i=0; i<=k; i++)
        {
            if(wartosc[j]>i)
            {
                D[i][j] = D[i][j - 1];
            }
            else
            {
                D[i][j] = max(D[i][j-1], D[i-wartosc[j]][j-1] + waga[j]);
            }
        }
    }

    // DZIAŁA :D

    //DBG

   /* for(long long i=0; i<=n; i++)
    {
        for(long long j=0; j<=k; j++)
        {
            cout<<D[j][i]<<" ";
        }
        cout<<endl;
    }*/

    //DBG

    cout<<D[k][n];


    return 0;
}