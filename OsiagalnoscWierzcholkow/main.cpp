#include<bits/stdc++.h>

using namespace std;

long long tab[1000007], j;

struct wierzcholki{
	vector <unsigned int> polaczenia;
	bool odwiedzony;
}*w;

void DFS(int k)
{
	tab[j]=k;
	j++;
	w[k].odwiedzony = 1;
	for(int i=0; i<w[k].polaczenia.size(); i++)
	//jesli wierzchołek, do którego chcemy przejsć nie został
	//jeszcze odwiedzony
		if(!w[w[k].polaczenia[i]].odwiedzony)
		//to przechodzimy do niego
			DFS(w[k].polaczenia[i]);
}

int main()
{
	long long n, pol, pocz=1, a, b;
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie(0);
	cin>>n>>pol;

	w = new wierzcholki[n+1];

	for(int i=0; i<pol; i++)
	{
		cin>>a>>b;
		//tworzymy połączenie a --> b
		w[a].polaczenia.push_back(b);
		//tworzymy połączenie b --> a
		w[b].polaczenia.push_back(a);
	}
	DFS(pocz);

	sort(tab, tab+j);

	j=0;

	for(long long i=1; i<=n; i++)
    {
        if(tab[j]==i)
        {
            j++;
            cout<<"TAK"<<'\n';
        }
        else
        {
            cout<<"NIE"<<'\n';
        }
    }

	delete [] w;

	return 0;
}