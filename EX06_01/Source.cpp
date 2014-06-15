#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
	int x = 0;
	string filename = "Exercise13_1.txt";
	ofstream fout;
	fout.open(filename);

	if (fout.fail()){
		cout << "File cannot be opened right now for writing.\n";
		return 0;
	}
	srand(time(NULL));
	for (int i = 0; i < 100; i++){
		
		x = rand() % 100;
		fout << x << " ";
	}

	fout.close();

	ifstream fin;
	fin.open(filename);
	if (fout.fail()){
		cout << "File cannot be opened right now for reading.\n";
		return 0;
	}

	string line;
	while (getline(fin, line))
		cout << line << endl;

	fin.close();

}