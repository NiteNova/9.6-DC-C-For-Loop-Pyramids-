#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl;


	for (int t = 5; t > 0; t--) {
		for (int p = 1; p <= 5; p++) 
		{
			if (p >= t) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int o = 1; o <= 5; o++) {
		for (int b = 1; b <= 5; b++) {
				if (b >= o) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}	
	
	cout << endl;

	for (int v = 1; v <= 5; v++) {
		for (int a = 5; a >= 1; a--) {
			if (v <= a) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}