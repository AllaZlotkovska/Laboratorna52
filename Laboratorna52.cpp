#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include "Windows.h"

using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	
	int rows = 3;
	int cols = 4;

	//Створення динамічного двовимірного масиву
	vector<vector<int>>matrix(rows,vector<int>(cols));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 21-10;
		}
	}
	cout << "Матриця:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	// Пошук найменшого за модулем елемента
	int minElement = matrix[0][0]; // Початкове припущення

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (abs(matrix[i][j]) < abs(minElement)) {
				minElement = matrix[i][j];
			}
		}
	}

	// Виведення найменшого за модулем елемента
	cout << "\nНайменший за модулем елемент: " << minElement << endl;

	

	return 0;
}


