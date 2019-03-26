// CodeStepByStep 
// C++ 
// Programming Basics 
// numberSquare

#include <iostream>
int numberSquare(int min, int max) {

	int seqOfNum = max - min + 1;
	for (int j = min; j <= max; j++) {
		int start = j;
		while (seqOfNum != 0) {
			cout << start;
			start++;
			if (start > max) {
				start = min;
			}
			seqOfNum--;
		}
		seqOfNum = max - min + 1;
		cout << endl;
	}
	return 0;
}