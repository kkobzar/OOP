#include <iostream>

using namespace std;

class Rational{

private:
int num, den; // Стан класу - чисельник і знаменник дробу
int gcd() const
{
    int hcf = 1;
    for(int i = 1; i <= num || i <= den; i++)
    {
        if(num % i == 0 && den % i == 0)
            hcf = i;
    }

    return hcf;
};
 // Метод класу - знаходження найбільшого
//спільного дільника
void reduce(); // Метод класу - скорочення дробу
void correct(); // Метод класу - корекція дробу

protected:
/* Відсутній: можна зовсім не включати дану частину класу,
разом з ключовим словом */

public:
/* Конструктори класу */
Rational()
{

}; //Порожній конструктор
Rational(int num)
{
    assign(num,num);
}; //Конструктор з 1 аргументом
Rational(int num, int den)
{
    assign(num,den);
}; //Конструктор з 2 аргументами

/* Деструктор класу */
~Rational();

/* Методи класу: селектори */
void print()const
{
    cout<<this->gcd();
}; //Вивід значення дробу в потік
Rational add(const Rational &opd)const; //Додавання дробів

/* Модифікатор */
void assign(int x, int y)
{
    if(y > 0){
        this->den = y;
    }else{
        this->den = 1;
    }
    this->num = x;

}; //Присвоювання дробу нового значення

};

int main()
{

    Rational* r = new Rational(5,10);
    //cout<<r->gcd();
    r->print();
    return 0;
}