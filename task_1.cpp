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
void reduce() const
{
    int num1 = num;
    int num2 = den;
    int denom = this->gcd();
    num1/=denom;
    num2/=denom;

    cout<< "Lowest Fraction : "<<num1<<"/"<<num2;

}; // Метод класу - скорочення дробу
void correct()
{

}; // Метод класу - корекція дробу

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


/* Методи класу: селектори */
void print()
{
    cout << gcd();
    cout << '\n';
    reduce();
    cout << '\n';
}; //Вивід значення дробу в потік

Rational add(const Rational &opd)const
{
    cout << opd.gcd() << endl;
    cout << gcd() << endl;
    return opd;
}; //Додавання дробів

/* Модифікатор */
void assign(int x, int y)
{
    if(y > 0){
        den = y;
    }else{
        den = 1;
    }
    num = x;

}; //Присвоювання дробу нового значення

};

int main()
{

    Rational r(5,10);
    r.print();

    const Rational& r2 = *new Rational(4,8);

    r.add(r2);
    //const Rational &r2(4,8);

    //Rational::add(r2);
    return 0;
}