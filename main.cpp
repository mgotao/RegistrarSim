#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "GenQ.h"

using namespace std;

int main(int argc, char ** argv)
{
	if (argc < 2 || argc >= 3){	//instructions for when no filename passed in command line or incorrect argument taken
		cout << "This program runs a simulation of the registrar.\n";
		cout << "The program must be run with an accompanying file.\n";
		cout << "EX: './a.out /home/cpsc/Documents/foo.txt'\n";
	}

	string fileName = argv[1];
	cout << endl << "File name: " << fileName << endl;

	int text;
	int numLines = 0;
	int numWindows;

	ifstream inputStream;
	inputStream.open(fileName.c_str());

	while(inputStream >> text)
	{
		numLines++;
	}

	inputStream.close();
	inputStream.open(fileName.c_str());

	int fileData[numLines];
	int arrayPos = 0;
	while(inputStream >> text)
	{
		cout << text << endl;
		fileData[arrayPos++] = text;
	}

	inputStream.close();

	for(int i = 0; i < numLines; ++i)
	{
		cout << fileData[i] << endl;
	}
	
	int numWindows = 0;
		inFile >> numWindows;
		GenQ line = GenQ(50);
		Window registrar[numWindows];
		int simTime = 0;
		int lineEmpty = 0, windowsOpen = 0;
		while(lineEmpty < 0 && windowsOpen < 0){
			
		}
}
