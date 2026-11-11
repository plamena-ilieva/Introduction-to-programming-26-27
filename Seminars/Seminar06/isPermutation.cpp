#include <iostream>
using namespace std;

bool isPermutation(const int arr1[], const int arr2[], size_t size1, size_t size2) {
	if (size1 != size2) {
		return false;
	}

	constexpr int SIZE = 10;
	int buff[SIZE]{};

	for (size_t i = 0; i < size1; i++)
	{
		buff[arr1[i]]++;
	}

	for (size_t i = 0; i < size2; i++)
	{
		buff[arr2[i]]--;
		if (buff[arr2[i]] < 0) {
			return false;
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		if (buff[i] != 0) {
			return false;
		}
	}

	return true;
}
