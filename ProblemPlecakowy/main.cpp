#include <bits/stdc++.h>

using namespace std;

long long n, k, dlogosc, waga[107], wartosc[107], D[10007][107], wyniki[107], licznik;

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
    }
    for(long long i=1; i<=n; i++)
    {
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

    /*for(long long i=0; i<=n; i++)
    {
        for(long long j=0; j<=k; j++)
        {
            cout<<D[j][i]<<" ";
        }
        cout<<endl;
    }*/

    //DBG

    long long f=k, a=n;
    while(D[f][a]!=0)
    {
        if(D[f][a]!=D[f][a-1])
        {
            wyniki[licznik]=a;
            licznik++;
            f -= wartosc[a];
        }
        a--;
    }

    cout<<D[k][n]<<'\n';
    cout<<licznik<<'\n';

    for(long long d=0; d<licznik; d++)
    {
        cout<<wyniki[d]<<" ";
    }


    return 0;
}