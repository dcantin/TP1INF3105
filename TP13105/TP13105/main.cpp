#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string nom = "";
	ifstream fichier(nom);
	char c;
	do {
		fichier.get(c);
		cout << "";
	} while (!fichier.eof());
	return 0;
}