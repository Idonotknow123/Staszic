#include <bits/stdc++.h>

using namespace std;

long long j, a, b, cc, d;

bool czy_pierwsza(int n)
{
	if(n<2)
		return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin>>j;

    for(long long c=0; c<j; c++)
    {
        cin>>a;
        b = a/2;
        while(b!=0)
        {
            cc = a - b;

            if(czy_pierwsza(cc)==true and czy_pierwsza(b)==true)
            {
                cout<<b<<" "<<cc<<'\n';
                break;
            }
            b--;
        }

    }

    return 0;
}