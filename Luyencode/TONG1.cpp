#include <iostream>
#include <math.h>
#define MAX 100000

void sort_Arr(int (Array)[MAX], int len)
{
	for(int i = 0; i < len; i++)
	{
		for(int j = i+1; j < len; j++)
		{
			if(Array[i] <= Array[j])
				std::swap(Array[i], Array[j]);
		}
	}
}

void Enter_Arr(int Array[], int len)
{
	for(int i = 0; i < len; i++)
	{
		std::cin >> Array[i];
	}
}
void Print_Arr(int Array[], int len)
{
	for(int i = 0; i < len; i++)
	{
		std::cout << Array[i] << " ";
	}
}
bool check_snt(int n)
{
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main(){
	int Array[MAX];
	int n;
	std::cin >> n;
	Enter_Arr(Array, n);
	sort_Arr(Array, n);
	
	
	std::cout << Array[0] - Array[n-1];

	return 0;
}