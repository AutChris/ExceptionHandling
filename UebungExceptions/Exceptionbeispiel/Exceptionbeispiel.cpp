#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int z = 0;

	cout << "Geben Sie eine Zahl ein: " << endl;
	cin >> x;
	cout << "Geben Sie eine Zahl ein: " << endl;
	cin >> y;

	try
	{
		if (y == 0) {
			throw "Division durch 0 entdeckt.";
		}

		if (y > 1000 && x > 1000) {
			throw 0;
		}
		if (x > 1000) {
			throw 1;
		}

		if (y > 1000) {
			throw 2;
		}


		z = x / y;

		cout << z << endl;
	}
	
	catch(const char* e){
		cerr << "Fehler ist passiert, Programm schliesst sich jetzt." << e << endl;
	}

	catch (int ex) {

		cerr << "Zahl zu gross!" << endl;

		try {

			if (ex == 0) {
				cout << "Geben Sie eine Zahl ein: " << endl;
				cin >> x;
				cout << "Geben Sie eine Zahl ein: " << endl;
				cin >> y;
			}
			
			if (ex == 1) {
				cout << "X zu gross, geben sie die Zahl nochmals ein: " << endl;
				cin >> x;
			}

			if (ex == 2) {
				cout << "Y zu gross, geben sie die Zahl nochmals ein: " << endl;
				cin >> y;
			}
			

			if (y == 0) {
				throw 2;
			}

			if (x > 1000 || y > 1000) {
				throw 2;
			}

			z = x / y;
			cout << z << endl;
		}

		catch (int e) {
			cerr << "Sie sind zu dumm" << endl;
		}

	}





	return 0;
}

