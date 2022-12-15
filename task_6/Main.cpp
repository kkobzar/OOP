//Kyryl Kobzar
//Variant 6

//журнал, книга, друковане видання, підручник


#include <iostream>
using namespace std;

#include "Publishment.cpp"

#include "Book.cpp"
#include "Magazine.cpp"
#include "Printed.cpp"
#include "Textbook.cpp"


int main(int argc, char const *argv[])
{
	Book b("Hemingway");

	b.read();

	Magazine m(5);

	m.read();

	Printed p("C++ pointers");
	p.read();

	Textbook t("student", "publizzzzz");

	t.read();
	return 0;
}