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

	while(inn>>item) {
		if (item == 'A') { upA++; }
		else if (item == 'F') { upF++; }
		else if (item == 'a') { lowA++; }
		else if (item == 'b') { lowB++; }
		total++;
	}


	cout << "Total A's: " << upA << endl;
	cout << "Total F's: " << upF << endl;
	cout << "Total a's: " << lowA << endl;
	cout << "Total b's: " << lowB << endl;
	cout << "All total characters: " << total << endl;

	inn.close();
	cin >> stay;
	return 0;
}

