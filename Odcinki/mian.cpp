#include<bits/stdc++.h>
using namespace std;
int dp[1000010];
int zap(int w, int l, int p, int a, int b)
{ if(a<=l && p<=b)
    return dp[w];
    if(a>p || b<l)
        return 0;
    return zap(w*2, l, (l+p)/2, a, b)+zap(w*2+1, (l+p)/2+1, p, a, b);

}
int main()
{
    int n, i, a, p, m;
    cin>>n>>m;
    p=1;
    while(p<n)
        p*=2;
    long long wynik=0, x=0;
    for(i=0;i<n;i++)
    {
        char znak;
        scanf(" %c", &znak);
        if(znak=='P') { dp[p+i]=1; x++;

        }
        else wynik+=x;

    }
    for(i=p-1;i>0;i--) dp[i]=(dp[i*2]+ dp[i*2+1]);
    cout<<wynik<<'\n';
    while(m--) {
            cin>>i;
        i--;

        if(dp[i+p]==1) {

            x=zap(1,0,p-1,i,n-1);
            wynik-=(n-i)-x;
            wynik+=zap(1,0,p-1,0,i-1);
            cout<<wynik<<'\n';
            i+=p; dp[i]=0; i/=2;
            while(i>0)
            {
                dp[i]=dp[i*2]+dp[i*2+1];
                i/=2;

            }

        }
        else
        {
            x=zap(1,0,p-1,i+1,n-1);

            wynik+=((n-(i+1))-x);
            wynik-=zap(1,0,p-1,0,i-1);
            cout<<wynik<<'\n';
            i+=p; dp[i]=1; i/=2;
            while(i>0)
            {
                dp[i]=dp[i*2]+dp[i*2+1]; i/=2; }

        }


    }

}