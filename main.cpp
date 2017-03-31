#include <iostream>
#include <fstream>
#include <string>
#include "GenQ.h"

using namespace std;

int main(int argc, char ** argv)
{
	if(argc < 2)
	{
		cout << "You did not give a file name." << endl;
		return 0;
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
	inputStream.open(fileName.c_str())

	int fileData[numLines];
	while(inputStream >> text)
	{
		int arrayPos = 0;
		fileData[arrayPos++] = text;
	}

	inputStream.close();

	cout << numLines << endl;

	for(int i = 0; i < numLines; ++i)
	{
		cout << fileData[i] << endl;
	}
}