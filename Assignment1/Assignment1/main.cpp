#include "functions.h"

int main() {

	//Reads in the file
	ifstream inFile;
	inFile.open("A1input.txt");
	if (!inFile.is_open()) {
		cout << "Unable to open file\n";
		return 1;
	}

	const int maxSize = 200;
	int arr[maxSize];
	int size = 100;
	int num;

	fillArray(inFile, arr, size);

	inFile.close();

	//Asks user for value to check if in the array
	cout << "What number would you like to check is in the array?\n";
	cin >> num;

	int index;
	index = find(arr, size, num);
	//Tells the user whether the number was found or not
	if (index == -1) {
		cout << "Number not found\n";
	}
	else {
		cout << "Number found at index: " << index;
	}

	int oldValue;
	int index2;
	int newValue;

	//Asks the user for a number they what to chnage in the array
	cout << "\nWhat number would you like to change in the array?\n";
	cin >> oldValue;

	index2 = find(arr, size, oldValue);

	//Asks for what number they would like to change it to
	cout << "What would you like to change the number to?\n";
	cin >> newValue;

	pair<int, int> result = changenum(arr, index2, newValue, size);

	//Tells the user there old value and new value
	cout << "Old Value: " << result.first << ", New Value: " << result.second;

	int addNum;

	//Asks the user for what number they want added to the array
	cout << "\nWhat number would you like to add to the end of the array?\n";
	cin >> addNum;

	addValue(arr, size, addNum, maxSize); 

	int replaceNum;

	//Asks the user for what number they want to replace with 0
	cout << "What number would you like to replace with 0?\n";
	cin >> replaceNum;

	replaceValue(arr, replaceNum, size);

	//Prints out the new array for the user
	cout << "Your new array is:\n";
	print(arr, size);
}