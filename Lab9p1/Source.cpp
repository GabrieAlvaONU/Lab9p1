#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cmath>

using namespace std;

void printArray(const int arr[], int size);

void fillRand(int numbers[], int size);

int main() {
	srand(time(0));
	
	const int SIZE = 10;
	int numbers[SIZE]; // they array
	
	fillRand(numbers, SIZE);
	cout << "The random integers: ";
	printArray(numbers, SIZE);


}

void printArray(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";

	}
}

void fillRand(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		numbers[i] = rand() % (9000 - 1000 + 1) + 1000;
	}
}
