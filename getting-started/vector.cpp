#include <iostream>
#include <vector>

using namespace std;

int main() {
	// initializes 3 elements with value 100.
	vector <int> vec(3, 100);

	cout << "Vector size: " << vec.size() << endl;
	cout << "Is empty?: " << vec.empty() << endl;
	cout << "First element: " << vec.at(0) << endl << endl;

	vec.pop_back();  // removes final element
	cout << "Removed final element." << endl;
	cout << "Vector size: " << vec.size() << endl;
	cout << "Final element: " << vec.back() << endl << endl;

	vec.clear();  // removes all elements
	cout << "Removed all elements" << endl;
	cout << "Vector size: " << vec.size() << endl;
	cout << "Is empty?: " << vec.empty() << endl << endl;

	vec.push_back(200);  // Add an element
	cout << "Added an element" << endl;
	cout << "Vector size: " << vec.size() << endl;
	cout << "First element: " << vec.front() << endl;

	return 0;
}