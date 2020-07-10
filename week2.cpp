
#include<iostream>

using namespace std;

int w, h, number;

class Rectangle {
private:
	int top, left, bottom, right;

public:
	Rectangle(int t, int b, int l, int r) {	//constructor for top, bottom, left, and right
		top = t;
		bottom = b;
		left = l;
		right = r;

		cout << "In constructor with 4 parameters" << endl;

	};
	Rectangle(int width, int height) : Rectangle(0, width, 0, height) {
		cout << "In constructor with 2 parameters, width = " << width << " height = " << endl;

	};
	Rectangle() : Rectangle(1, 1) {
		cout << "In constructor with 0 parameters" << endl;
	};
	~Rectangle() {
		cout << "In constructor with 0 parameters" << endl;
	}
};
int main(int argc, char** argv)
{
	Rectangle myRectangle;

	cout << "Hello World!" << endl;
	return 0;
}