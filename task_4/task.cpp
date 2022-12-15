//Kyryl Kobzar
//Variant 6


/*АТД − однонапрямлений список з елементами типу char. Додатково перевантажити
наступні операції:
() − видалити елемент в заданій позиції, наприклад:
int i;
list L;
L[i];

() − додати елемент в задану позицію, наприклад:
int i; char c;
list L;
L[з, i];
!= − перевірка на нерівність.*/

#include <iostream>

using namespace std;

class MyCharAncessor
{
public:
	virtual void Input() = 0;
	virtual void Output() = 0;

	
};

class MyChar : public MyCharAncessor
{
private:
	char* list;
	int size;
	
public:
	MyChar(int s)
	{
		size = s;
		list = (char*)malloc(size*sizeof(char));
	};

	void Input(){
		for (int i = 0; i < size; ++i)
		{
			cout << "Enter char #" << i<<": ";
			cin >>  list[i];
		}
	};

	void Output(){
		for (int i = 0; i < size; ++i)
		{
			cout << list[i];
		}
		cout<< endl;
	};

	bool operator!=(char a){
		return list[0] != a;
	};

	MyChar operator[](int i){
		if (i<size)
		{
			cout<< "delete i: " << i <<endl;
			list[i] = ' ';
		}
		return *this;
	}
	MyChar operator[](int* i){
		if (i[0]<size)
		{
			list[i[0]] = (char)i[1];
			cout<<"on position: "<<i[0] << "; Char: "<< i[1] <<endl;
		}

		return *this;
	}

	int* operator,( int i){
		int * res = new int(2);
		res[1] = this->list[0];
		return res;
	}


};

int main(int argc, char const *argv[])
{
	MyChar c(5);
	MyChar a(3);
	c.Input();
	a.Input();

	c = c[2];
	c.Output();

	c = c[a,3];
	c.Output();


	bool test = c!='f';

	cout << test << endl;
	return 0;
}