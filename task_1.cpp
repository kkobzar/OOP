class Rational{

private:
int num, den; // Стан класу - чисельник і знаменник дробу
int gcd() const; // Метод класу - знаходження найбільшого
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

}; //Конструктор з 1 аргументом
Rational(int num, int den); //Конструктор з 2 аргументами

/* Деструктор класу */
~Rational();

/* Методи класу: селектори */
void print()const; //Вивід значення дробу в потік
Rational add(const Rational &opd)const; //Додавання дробів

/* Модифікатор */
void assign(int x, int y)
{
    if(y > 0){
        this.den = y
    }else{
        this.den = 1
    }
    this.num = x

}; //Присвоювання дробу нового значення

};