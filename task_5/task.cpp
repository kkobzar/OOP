//Kyryl Kobzar
//Variant 6

/*Розробити метод-член похідного класу визначення
кількості повторювань заданого набору символів.*/


#include <iostream>

using namespace std;

class Counter
{
protected:
	string strToCompare = "teststringuuuUUU12341234";
public:
	virtual int CountRepeats(string comp) = 0;
	
};

class RepeatCounter :public Counter
{
public:
	RepeatCounter(){};
	~RepeatCounter(){};
	int CountRepeats(string comp) override{

		//https://stackoverflow.com/a/8614196/11526784

		int occurrences = 0;
		string::size_type start = 0;

		while ((start = this->strToCompare.find(comp, start)) != string::npos) {
		    ++occurrences;
		    start += comp.length(); 
		}

		cout<<this->strToCompare<<endl;
		return occurrences;
	}
	
};

int main(int argc, char const *argv[])
{
	RepeatCounter c;
	string findFor;
	cout << "Enter string to look for: ";
	cin >> findFor;
	cout << "In string: ";
	int occ = c.CountRepeats(findFor);
	cout << "Occurrences: " << occ <<endl;
	return 0;
}