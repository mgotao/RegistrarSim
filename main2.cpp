#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
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

	int numWindows, globalTime;
	int numWindows = fileData[0];

	int windows[numWindows];
	for(int i = 0; i < numWindows; ++i) 
	{
		windows[i] = 0;
	}

	arrayPos = 1;
	globalTime = 0;
	GenQ<int> studentQueue();
	bool queueEmpty = false;

	while(!queueEmpty)
	{
		if(fileData[arrayPos] = globalTime)
		{
			numStudents = fileData[++arrayPos];
			for(int i = 1; i <= numStudents; ++i)
			{
				studentQueue.insert(fileData[++arrayPos]);
			}
		}
		for(int i = 0; i < numWindows; ++i){
			if(registrar[i].isOpen == 1 && studentQueue.isEmpty() == 0){
				registrar[i].acceptStudent(studentQueue.remove());	//students go into window
			}
		}
		for(int i = 0; i < numWindows; ++i) registrar[i].runWindow();	//window op
		//check if sim should end
		globatTime++;
	}
