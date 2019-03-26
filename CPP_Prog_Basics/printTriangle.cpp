// CodeStepByStep 
// C++ 
// Programming Basics 
// printTriangle

#include <iostream>
int printTriangle() {
	for (int i = 0; i <= 5; ++i) {
		for (int j = 0; j <= i; ++j) {
			cout << "#";
		}
		cout << endl;
	}
	return 0;
}