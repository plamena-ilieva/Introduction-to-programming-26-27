#include <iostream>
using namespace std;

void markAsNotPrime(bool sieve[], int len, int current)
{

	for(int i = current*current; i < len; i+=current)
	{
		sieve[i] = true;
	}
}
void sieveErathostenes(bool sieve[], int len)
{
	for (int i = 2; i <= len; i++)
	{
		if (!sieve[i])
		{
			markAsNotPrime(sieve, len, i);
		}

	}
}


int main()
{
	constexpr int SIZE = 1024;
	bool sieveArr[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		sieveArr[i] = 1;
	}
	sieve(sieveArr, SIZE);
	
	for (size_t i = 0; i < q; i++)
	{
		int n;
		std::cin >> n;
		std::cout << sieveArr[n];
	}
}  
