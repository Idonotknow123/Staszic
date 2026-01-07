#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int tab[a+1][a+1];
    int c, d;
    for(int i = 0; i < b; i++) {
        cin >> c >> d;
        if(c<=a && d<=a) {
            tab[c][d] = 1;
            tab[d][c] = 1;
        }
    }
    int e;
    cin >> e;
    for(int i = 0; i < e; i++) {
        cin >> c >> d;
        if(c<=a && d<=a && tab[c][d] == 1) cout << "TAK" <<'\n';
        else cout << "NIE" << '\n';
    }
}