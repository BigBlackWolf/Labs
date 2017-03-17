#include "Header.h"
#include "Methods.cpp"

int main () {
   Snakes();
   Snakes a("Sasha","green",12.5);
   a.getSnake();
   a.changeName();
   Anakonda* first;
   first = new Anakonda;
   first->Anakonda();
   return 0;
}

#include <iostream>
using namespace std;

int main() {
	return 0;
};

int vidnimanie (int a, int b) {
	if ((a>b) && (a>=0) && (b>=0)) {
     return (a-b); }	
    else {
     cout <<"ERROR";};
};

float vidnimanie (float a, float b) {
	return (a-b);
}

int operator -(int a, int b) {
	return (a-b);
}

float operator -(float a, float b) {
	return (a+b)
}
