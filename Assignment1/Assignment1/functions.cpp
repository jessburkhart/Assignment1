#include "functions.h"

//Adds values to the array from thee input file
void fillArray(ifstream& inFile, int arr[], int size) {
	for (int i = 0; i < size; i++) {
		inFile >> arr[i];
	}
}

//Finds a number within the array and returns the index
int find(int arr[], int size, int num) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			return i;
		}
	}
	return -1;
}

//Changes a value in the array into the new value and returns both the old value and the new value
pair<int, int> changenum(int arr[], int index, int newValue, int size) {
	try {
		if (index < 0 || index >= size) {
			throw out_of_range("Index out of bounds\n");
		}
		int oldValue = arr[index];
		arr[index] = newValue;
		return make_pair(oldValue, newValue);
	}
	catch (const out_of_range& e) {
		cerr << "Error: " << e.what(); 
		return make_pair(-1, -1);
	}
}

//Adds a value to the end of the array
void addValue(int arr[], int& size, int newValue, int maxSize) {
	try {
		if (size >= maxSize) {
			throw out_of_range("Size is out of range\n");
		}
		arr[size] = newValue;
		size++;
	}
	catch (const out_of_range& e) {
		cerr << "Error: " << e.what();
	}
}

//Replaces the value within the array with 0
void replaceValue(int arr[], int value, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			arr[i] = 0; 
		}
	}
}

//Prints the array
void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}