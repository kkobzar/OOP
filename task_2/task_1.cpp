//Kyryl Kobzar
//Variant 6
//Розробити метод-член класу впорядкування по зростанню методом бульбашки одновимірного динамічного масиву.

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
		delete array;
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

	void OutputArr()
	{
		cout << "Array" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << "["<<i<<"]: " << array[i] << endl;
		}
	};
	
};

int main(int argc, char const *argv[])
{

	CustomArray arr(8);

	arr.InputArr();
	arr.OutputArr();
	return 0;
}