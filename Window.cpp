#include <iostream>
#include "Window.h"
using namespace std;

Window::Window(){
	open = 1;
	time = 0;
}

Window::~Window(){
	
}

int Window::getTime(){
	return time;	
}

int Window:: isOpen(){
	return open;	
}

void Window::runWindow(){
	if(time > 0){
		--time;
		if(time == 0) open = 1;
		else open = 0;
	}
}

void Window::acceptStudent(int rec){
	time = rec;
	open = 0;
}