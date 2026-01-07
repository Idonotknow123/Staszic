#include<bits/stdc++.h>

using namespace std;

long long n, m, l, w, wynik=0, potega;

int main()
{
    cin>>n;
    cin>>m;
    potega = 1;
    for(long long h=0; h<=n; h++)
    {
        cin>>l;

        wynik += l*potega;
        potega *= m;
    }
    cout<<wynik;
    //w[0] = 0; for(i=1; i<=k; i++) {w[i]=k+1; for(long long j=0; j<=n; j++){if(M[j]<=i){w[i]=min(w[i], w[i-m[j]]+1)}}}

    return 0;
}