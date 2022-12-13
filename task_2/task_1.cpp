//Kyryl Kobzar
//Variant 6

//CustomArray::bubbleSort(): 
//Розробити метод-член класу впорядкування по зростанню методом бульбашки одновимірного динамічного масиву.

//CustomArray::arrFrom2d(): 
//Розробити метод-член класу для створення нового одновимірного масиву 
//з кількості всіх негативних елементів кожного рядка заданого двовимірного динамічного масиву.

#include <stdlib.h>
#include <iostream>
#include <malloc.h>

using namespace std;
class CustomArray
{

private:
	int* array;
	int size;

public:
	CustomArray(int arrS)
	{
		size = arrS;
		array = (int*)malloc(size*sizeof(int));
	};
	~CustomArray()
	{
		free(array);
	};

	void InputArr()
	{

		cout << "Enter members array members:" << endl;
		
		for (int i = 0; i < size; i++)
		{
			cout << "#"<<i<<':';
			cin >> array[i];
		}
	};

	bool setArrItem(int index, int val)
	{
		if (index > size)
		{
			return false;
		}
		array[index] = val;
		return true;
	};

	void OutputArr()
	{
		cout << "Array:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << "["<<i<<"]: " << array[i] << endl;
		}
	};

	void bubbleSort()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - i; j++)
			{
				if (array[j] > array[j+1])
				{
					swap(array[j],array[j+1]);
				}
			}
		}
	};

	static CustomArray arrFrom2d(int** arr, int xSize, int ySize)
	{
		int resMax[xSize*ySize];
		int len = 0;

		for (int i = 0; i < xSize; i++) {
			for (int j = 0; j < ySize; j++) {
				if (arr[i][j] < 0)
				{
					resMax[len] = arr[i][j];
					len++;
				}
			}
		}

		//make result array of size needed

		CustomArray res(len);

		for (int i = 0; i < len; i++)
		{
			res.setArrItem(i,resMax[i]);
		}

		return res;
	};
	
};

int main(int argc, char const *argv[])
{

	CustomArray arr(3);

	//task 1 test
	
/*	arr.InputArr();
	arr.OutputArr();

	arr.bubbleSort();
	cout << "******"<<endl << "Array after sort:" << endl << "******" << endl;
	arr.OutputArr();*/


	//task 2 test

	int m = 3, n = 4, c = -5;
	
	int** a = new int*[m];

	for (int i = 0; i < m; i++) {
		a[i] = new int[n];	
	}

	srand((unsigned int)time(NULL));
	// Fill the 2D array with random values
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

		a[i][j] = rand() % 30 - 20;
		}
	}


	CustomArray res = CustomArray::arrFrom2d(a,m,n);
	cout<<endl<<"---------"<<endl;

	res.OutputArr();
	/*for (int i = 0; i < sizeof(res)/sizeof(*res); i++)
	{
		cout << res[i] << " ";
	}*/

cout<<endl<<"---------"<<endl;

	for (int i = 0; i < m; i++) 
		delete[] a[i];

	delete[] a;

	return 0;
}