//Kyryl Kobzar
//Variant 6

//Розробити метод-член класу для видалення заданої кількості даних з кінця бінарного файлу.


#include <fstream>
#include <iostream>
#include <unistd.h>

#ifndef FILE_PATH
#define FILE_PATH "./file.bin"
#endif

using namespace std;

class FileManager
{
private:
	ofstream file;

public:
	FileManager()
	{
		file.open(FILE_PATH,fstream::binary | fstream::app);
	};
	~FileManager()
	{
		file.close();
	};

	void removeBytes(int n)
	{
		long siz = file.tellp();

		truncate(FILE_PATH,siz - n*2);
	};
	
};

int main(int argc, char const *argv[])
{

	int s;
	FileManager f;
	cout << "Bytes to remove: ";
	cin >> s;
	f.removeBytes(s);
	return 0;
}