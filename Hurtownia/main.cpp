#include<bits/stdc++.h>

using namespace std;

long long kwota, hajs[1000006], klienci[1000007], wynik;

priority_queue<long long>g;

int main()
{
    long long n, i;

    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>hajs[i];
    }

    for(i=0; i<n; i++)
    {
        cin>>klienci[i];
    }

    g.push(klienci[0]);
    g.pop();

    for(long long j=0; j<n; j++)
    {

        kwota += hajs[j];
        if(klienci[j]<=kwota)
        {
            cout<<"";
        }

        if(klienci[j] <= kwota)
        {
            //da rade kupic
            kwota -= klienci[j];
            wynik++;
            g.push(klienci[j]);
            continue;
        }
        if(g.top()>klienci[j] and g.size()>0)
        {
            //nie da sie kupic i jest zle, bo cza kupic
            kwota += g.top() - klienci[j];
            g.pop();
            g.push(klienci[j]);
        }
            //nie da sie kupic i jest dobrze

    }
    cout<<wynik;

    return 0;
}