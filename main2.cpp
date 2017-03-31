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
	numWindows = fileData[0];

	Window registrar[numWindows];

	arrayPos = 1;
	globalTime = 0;
	GenQ<int> studentQueue(100);
	bool queueEmpty = false;

	int totalWindowIdleTime, totalStudentWaitTime, numStudents, totalStudents = 0;

	while(!queueEmpty)
	{
		if(fileData[arrayPos] = globalTime) //Checks if the value given for time is equal to the tracked time
		{
			numStudents = fileData[++arrayPos];	//If yes, reads the value of students
			totalStudents += numStudents;
			for(int i = 1; i <= numStudents; ++i)
			{
				studentQueue.insert(fileData[++arrayPos]);	//Enqueues number of students into the student queue
			}
		}

		for(int i = 0; i < numWindows; ++i){
			if(registrar[i].isOpen == 1 && studentQueue.isEmpty() == 0){
				registrar[i].acceptStudent(studentQueue.remove());	//students go into window
			}
		}
		for(int i = 0; i < numWindows; ++i) registrar[i].runWindow();	

		for(int i = 0; i < numWindows; ++i)
		{
			if(windows[i] = 0)
			{
				totalWindowIdleTime++;
			}
		}

		totalStudentWaitTime += studentQueue.getSize();

		if(arrayPos == numLines - 1)
		{
			bool windowsEmpty = true;
			for(int i = 0; i < numWindows; ++i)
			{
				if(registrar[i].isOpen != 1) windowsEmpty = false;
			}
			if(windowsEmpty)
			{
				if(studentQueue.isEmpty())
				{
					queueEmpty = true;
				}
			}
		}

		globalTime++;
	}

	float meanStudentWaitTime = (float)totalStudentWaitTime/(float)totalStudents;
	float meanWindowIdleTime = (float)totalWindowIdleTime/5.0f;

	cout << "The mean student wait time is: " << meanStudentWaitTime << " minutes." << endl;
	cout << "The mean window idle time is: " << meanWindowIdleTime << " minutes." << endl;

	return 0;
}
