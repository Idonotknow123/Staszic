#include<iostream>
#include<string>
using namespace std;

string alfabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string alf    ="abcdefghijklmnopqrstuvwxyz";

int pozycjaalfabet(char znak){

	for(int i=0;i<alfabet.size();i++){

		if ((alfabet[i]==znak)||(alf[i]==znak)) {

			return i;
		}
	}

	return -1;

}

void szyfruj(string tekst,string klucz)
{

	string wynik;

	for(int i=0;i<tekst.size();i++)
    {

		int pozycja1 = pozycjaalfabet( klucz[i % klucz.size()] );

		int pozycja2 = pozycjaalfabet( tekst[i] );

		wynik = wynik + alfabet[ (pozycja1+pozycja2) % alfabet.size()];

	}

	cout<<wynik;

}
int main(){

	string kl,te;

    cin>>kl;

	cin>>te;

	szyfruj(te,kl);

	return 0;
}