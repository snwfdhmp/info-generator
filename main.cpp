
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iostream>

using namespace std;

string randomFirstName(ifstream& file) {
	string prenom;
	int select, count;

	select = rand() % count;
	cout << "Line " << select << " has been selected !" << endl;

	file.clear();
	file.seekg(0, ios::beg);

	count = 0;
	while(file >> prenom) {
		if(count++ == select)
			cout << prenom;
	}
	return prenom;
}

int main(int argc, char const *argv[])
{
	std::ifstream prenomsFile("ressources/first_names.txt");
	std::ifstream input("input.txt");
	string prenom, line;
	int count=0;

	srand(time(NULL) + rand());

	while(prenomsFile >> prenom) {
		count++;
	}

	while(input >> line) {

		cout << line;
	}
	

	return 0;
}