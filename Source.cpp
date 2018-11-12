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

	bool less(Box input) {
/*		if (l < input.l || l == input.l && b < input.b || l == input.l && b = input.b && h < input.h) {
			return 1;
		}*/
	}

	bool less(Box input) {
		if (l < input.l) {
			return true;
		}

		if (b < input.b && l == input.l) {
			return true;
		}

		if (h < input.h && b == input.b && l == imput.l) {
			return true;
		}

		return false;
	}

	void show() {
		cout << l << ' ' << b << ' ' << h << endl;
	}
};

int main() {
	
}