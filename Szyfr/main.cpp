#include <bits/stdc++.h>
using namespace std;
string s;
int k, p, for2, q[91], dt, o1, o2, g;
char ch, l;
int main()
{
    cin >> k;
    cin >> l;
    cin >> s;

    for(int u=0; u<k; u++)
    {
       p = int(s[u]);
       q[p]++;

    }
    for(int uu=64; uu<91; uu++)
    {
        if(g<q[uu])
        {
            g = q[uu];                        //g - liczba litery, która powtarza się najwięcej razy;
            for2 = uu;                        //for2 - pozycja g w tablicy q;
        }
    }



    if(int(l)<for2)
    {
      dt = for2 - int(l);                     //przypadek 1 <, liczby się zmniejszają;
      for(int o=0; o<k; o++)
      {
          o1 = int(s[o]) - dt;
        if(o1<65)
        {
            int yy = o1+26;
            cout<<char(yy);
        }
        else{cout<<char(o1);}
      }
    }




    else if(int(l)>for2)
    {
      dt = int(l) - for2;
      for(int oo=0; oo<k; oo++)                //przypadek 2 >, liczby się zwiększają;
      {
          o2 = int(s[oo])+dt;
        if(o2>90)
        {
            int xy = o2-26;
            cout<<char(xy);
        }
        else{cout<<char(o2);}
      }
    }



    else if(int(l)==for2)
    {
        cout << s;                            //przypadek 3 =;
    }
return 0;
}