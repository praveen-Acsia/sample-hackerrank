#include<iostream>
#include<string>

using namespace std;

string winner(string& erica, string& bob) {

	int erica_point = 0;
	int bob_point = 0;

	for (int i = 0; i < erica.length(); i++) {

		switch (erica[i]) {
		case 'E':
			erica_point++;
			break;
		case 'M':
			erica_point += 3;
			break;
		case 'H':
			erica_point += 5;

		}

		switch (bob[i]) {
		case 'E':
			bob_point++;
			break;
		case 'M':
			bob_point += 3;
			break;
		case 'H':
			bob_point += 5;

		}
	}
	return erica_point > bob_point ? "ERICA" : "BOB";
}

int main() {

	string erica;
	string bob;

	cout << "enter erica's difficulty : " << endl;
	cin >> erica;
	cout << "enter bob's difficulty : " << endl;
	cin >> bob;

	cout << winner(erica, bob);

}	


