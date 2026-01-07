#include<bits/stdc++.h>

using namespace std;

string l1, l2, l3 = "";
long long dl1, dl2, p, cyferka, roznica;

int main() {
    cin  >> l1 >> l2;
    //string number1 = l1;
    //string 2 = l2;
    if (l1.length() > l2.length())
    {
        swap(l1, l2);
    }
   dl1 = l1.length();
   dl2 = l2.length();
   roznica = dl2 - dl1;
   for (int b=dl1-1; b>=0; b--) {
      cyferka = ((l1[b]-'0') + (l2[b+roznica]- '0') + p);
      l3.push_back(cyferka%10 + '0');
      p = cyferka/10;
   }
   for (int j=roznica-1; j>=0; j--) {
      cyferka = ((l2[j]-'0')+p);
      l3.push_back(cyferka%10 + '0');
      p = cyferka/10;
   }
   if (p!=0)
   {
       l3.push_back(p+'0');
   }
   reverse(l3.begin(), l3.end());

    cout<<l3;
    return 0;
}