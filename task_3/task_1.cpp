//Kyryl Kobzar
//Variant 6

//Розробити метод-член класу для до запису рядка в кінець текстового файлу.


#include <fstream>
#include <iostream>
#include <string>

#ifndef FILE_PATH
#define FILE_PATH "./file.txt"
#endif

using namespace std;

class FileManager
{
private:
	ofstream file;

public:
	FileManager()
	{
		file.open(FILE_PATH,ios::app);
	};
	~FileManager()
	{
		file.close();
	};

	void writeToFile(string s)
	{
		file << s <<endl;
	};
	
};

int main(int argc, char const *argv[])
{

	string s;
	FileManager f;
	cout << "Text to add: ";
	cin >> s;
	f.writeToFile(s);
	return 0;
}