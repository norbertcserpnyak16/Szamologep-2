#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int szam1;
int szam2;

int main() {

	cout << "Kerek egy egesz szamot! ";
	cin >> szam1;

	cout << "Kerek megegy valos szamot! ";
	cin >> szam2;

	cout << "Szamok osszeadasanak osszege: " << szam1 + szam2 << endl;
	cout << "Szamok kivonasanak eredmenye: " << szam1 - szam2 << endl;

	cout << "Szamok szorzasanak eredmenye:" << szam1 * szam2 << endl;
	cout << "Szamok osztasanak eredmenye:" << szam1 / szam2 << endl;

	cout << "A kovetkezo szamokat adatad meg: " << szam1 << " " << szam2 << endl;

	system("pause");
	return 0;


}