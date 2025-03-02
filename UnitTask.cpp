//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitTask.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

bool zeroString(std::vector<float> s, int m) {
	bool zs = true;
	for (int i = 0; i < m && zs; i++) {
		if (s[i] != 0) { zs = false; }
	}
	return zs;
}

int task1(std::vector<std::vector<float>> matrix, int n, int m) {
	int num = -1;
	for (int i = 0; i < n && num < 0; i++) {
		if (zeroString(matrix[i], m)) { num = i; }
    }
	return num;
}

int task2(std::vector<std::vector<float>> matrix, int n, int m) {
	int counter = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j+=2) {
			if (matrix[i][j] == 0) { counter++; }
		}
	}
	return counter;
}
