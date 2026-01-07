#include <bits/stdc++.h>
using namespace std;
string k, tekst_1;
int p, u, o1, o2;
char ch;
int main()
{
    cin >> k;
    if(k=="szyfruj")
    {
       cin >> p;
       std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
       getline(cin,tekst_1);
       u = tekst_1.size();

      for(int o=0; o<u; o++)
      {
        o1 = int(tekst_1[o]) + p;
        if((96<int(tekst_1[o]))&&(int(tekst_1[o])<123))
        {
            if(o1>122)
            {
            int yy = o1-26;
            cout<<char(yy);
            }
            else
            {
            cout<<char(o1);
            }
        }
        else if((64<int(tekst_1[o]))&&(int(tekst_1[o])<91))
        {
            if(o1>90)
            {
            int xy = o1-26;
            cout<<char(xy);
            }
            else
            {
            cout<<char(o1);
            }
        }
        else
        {
            cout<<tekst_1[o];
        }
      }
    }


    else if(k=="odszyfruj")
    {
       cin >> p;
       std::cin.ignore( std::numeric_limits < std::streamsize >::max(), '\n' );
       getline(cin,tekst_1);
       u = tekst_1.size();

      for(int o=0; o<u; o++)
      {
        o1 = int(tekst_1[o]) - p;
        if((96<int(tekst_1[o]))&&(int(tekst_1[o])<123))
        {
            if(o1<97)
            {
            int yy = o1+26;
            cout<<char(yy);
            }
            else
            {
            cout<<char(o1);
            }
        }
        else if((64<int(tekst_1[o]))&&(int(tekst_1[o])<91))
        {
            if(o1<65)
            {
            int xy = o1+26;
            cout<<char(xy);
            }
            else
            {
            cout<<char(o1);
            }
        }
        else
        {
            cout<<tekst_1[o];
        }
      }
    }
return 0;
}