#include <iostream>
using namespace std;

constexpr int COLS = 20;

int linearSearch(const int arr[], int len, int element)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}

bool linearSearchMatrix(const int arr[][COLS], size_t rows, int el) {
	for (size_t i = 0; i < rows; i++)
	{
		if (linearSearch(arr[i], COLS, el) == true) {
			return true;
		}
	}

	return false;
}

int main()
{
	constexpr int ARR_SIZE = 5;
	int arr[ARR_SIZE] = { 5, 4, 3, 2, 1 };

	bool containsTwo = linearSearch(arr, ARR_SIZE, 2) >= 0;

	cout << containsTwo;
	


}
