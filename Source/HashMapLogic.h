#include <string>

using namespace std;

int Hash(string StringToHash, int HashRange) {
	// Summs the ASCII values in square of every char, and modulus it by HashRange 
	int Sum = 0;
	for(char i : StringToHash) {
		Sum += int(i) *int(i);
	}
	
	return Sum % HashRange;
}

class HashMap {
	/*
	Similar to set in Python, in functionality
	Solves collisions using the linear method
	*/

	// initialize local vars
protected:
	int MapLen = 16;//First len
	int *MapArray = new int[MapLen]();// () means set every value as 0

public:
	~HashMap() {
		delete[] MapArray;
	}

};
