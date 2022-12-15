//Kyryl Kobzar
//Variant 6

//журнал, книга, друковане видання, підручник

#include <iostream>

using namespace std;

class Book
{
private:
	string pages[] = {};
public:
	Book();
	~Book();
	virtual void read() = 0;
	
};


class Magazine :public Book
{
public:
	Magazine();
	~Magazine();
	
};

class StoryBook : public Book
{
public:
	StoryBook();
	~StoryBook();
	
};

class PrintedPublishment :public Book
{
public:
	PrintedPublishment();
	~PrintedPublishment();
	
};

int main(int argc, char const *argv[])
{
	

	return 0;
}