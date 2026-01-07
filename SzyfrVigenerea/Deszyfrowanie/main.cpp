#include<iostream>
#include<string>
using namespace std;

string alfabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int pozycjaalfabet(char znak){

	for(int i=0;i<alfabet.size();i++)

    {

		if (alfabet[i]==znak)

        {

			return i;
		}
	}

	return 0;

}

void deszyfruj(string tekst,string klucz)
{

	string wynik;

	for(int i=0;i<tekst.size();i++)
    {

		int pozycja1 = pozycjaalfabet(tekst[i]);

		int pozycja2 = pozycjaalfabet(klucz[i%klucz.size()]);

		if(pozycja1-pozycja2<0)
        {

        wynik = wynik + alfabet[(alfabet.size()+(pozycja1-pozycja2))];

        }

        else
        {

		wynik = wynik + alfabet[(pozycja1-pozycja2)];

        }

	}

	cout<<wynik;

}
int main(){

	string kl, te;
	
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>kl;

	cin>>te;

	deszyfruj(te,kl);

	return 0;
}