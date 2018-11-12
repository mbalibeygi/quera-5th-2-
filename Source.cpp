#include <stdio.h>
#include <iostream>

using namespace std;

class Box {

private:
	int l; //length
	int b; //breadth
	int h; //height

public:
	Box() { //default constructor
		l = 0;
		b = 0;
		h = 0;
	}
	
	Box(int length, int breadth, int height) {
		l = length;
		b = breadth;
		h = height;
	}

	Box(Box &source) {
		l = source.l;
		b = source.b;
		h = source.h;
	}

	~Box() {
		
	}

	int get_length() {
		return l;
	}

	int get_breadth() {
		return b;
	}

	int get_height() {
		return h;
	}

	long long int calculate_volume() {
		return (l * b * h);
	}
};

int main() {
	Box box1, box2(1, 2, 3);

	cout << box1.get_breadth() << endl;
	cout << box2.get_breadth() << endl;
}