#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int upA = 0;
	int upF = 0;
	int lowA = 0;
	int lowB = 0;
	int total = 0;
	char item;
	char stay;
	
	ifstream inn;
	inn.open("quiztext.txt");

	if (inn.fail()) {
		cout << "Failed to open file" << endl;
	}

	for (int i = 0; i <= 200; i++) {
		inn >> item;
		if (item == 'A') { upA++; }
		if (item == 'F') { upA++; }
		if (item == 'a') { upA++; }
		if (item == 'b') { upA++; }
		total++;
	}


	cout << "Total A's: " << upA << endl;
	cout << "Total F's: " << upF << endl;
	cout << "Total a's: " << lowA << endl;
	cout << "Total b's: " << lowB << endl;
	cout << "All total characters: " << endl;

	inn.close();
	cin >> stay;
	return 0;
}

