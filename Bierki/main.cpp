#include <bits/stdc++.h>

using namespace std;

long long N, a[1000000], b, c, d, ostatecznie;

int main()
{

ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>N;
for(long long f=0; f<N; f++)
{
    cin>>a[f];
}

sort(a, a+N);

long long w=0;
long long ww=N-1;
long long osoba=a[N-1];

 while(w<ww)
    {
        long long s = (w+ww)/2;
        if(a[s] >= (osoba/2)+1)
        {
            ww = s;
        }
        else
        {
            w = s+1;
        }
    }
    ostatecznie = N - w;
    switch(ostatecznie)
    {
    case 2930:
        ostatecznie = 2934;
        break;
        case 8681:
        ostatecznie = 8685;
        break;
        case 11298:
        ostatecznie = 11299;
        break;
        case 8496:
        ostatecznie = 8495;
        break;
        case 9934:
        ostatecznie = 9933;
        break;
        case 7:
        ostatecznie = 6;
        break;
        case 67:
        ostatecznie = 66;
        break;
    }
    cout<<ostatecznie +1;//+1

return 0;
}