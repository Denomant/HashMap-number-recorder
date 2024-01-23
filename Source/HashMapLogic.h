#include <string>

using namespace std;

int Hash(string StringToHash) {
	// Summs the ASCII values in square of every char, and modulus it by 100

	int Summ = 0;
	for(char i : StringToHash) {
		Summ += int(i) *int(i);
	}
	
	return Summ % 100;
}

class HashMap {
	


};
