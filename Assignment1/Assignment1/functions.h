#pragma once

#include <iostream>
#include <fstream> 
#include <utility>
using namespace std;

void fillArray(ifstream& inFile, int arr[], int size);
int find(int arr[], int size, int num);
pair<int, int> changenum(int arr[], int index, int newValue, int size);
void addValue(int arr[], int& size, int newValue, int maxSize);
void replaceValue(int arr[], int value, int size);
void print(int arr[], int size);