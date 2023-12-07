#include<iostream>
using namespace std;



int areasquare(int side) {
	return side * side;
}
float area_rectangle(float length, float width) {

	return length * width;
}
float areacircle(int radius) {
	const float pi = 3.14;
	return pi * radius * radius;
}
int main() {
	char option;
	do {
		cout << " Enter '1' for area of square  " << endl;
		cout << "Enter '2' for area of rectangle " << endl;
		cout << "Enter '3' for area of circle " << endl;
		int choice;
		cout << "Enter a choice : ";
		cin >> choice;
		if (choice == 1) {
			int side;
			cout << "Enter a value of  a side : ";
			cin >> side;
			cout << " Area of square is " << areasquare(side) << endl;
		}
		else if (choice == 2) {
			float length, width;
			cout << " Enter a Length " << endl;
			cin >> length;
			cout << " Enter a width " << endl;
			cin >> width;
			cout << " the Area of rectangle is " << area_rectangle(length, width) << endl;
		}
		else if (choice == 3) {

			int radius;
			cout << "Enter a radius " << endl;
			cin >> radius;
			cout << " The Area of circle is " << areacircle(radius) << endl;
		}
		else {
			cout << " Invalid Choice ";
		}
		cout << " DO you want to continou . Press 'Y'/'y' :  " << " and Enter a choice '1' '2' '3' " << endl << " or Press '0' to exit :" << endl;
		cin >> option;
	} while (option == 'Y'|| option=='y');
	return 0;
}