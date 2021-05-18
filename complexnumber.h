#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>

using namespace std;

template <class T>
class ComplexNumber
{
private:
    //Z = A+(B)i
    T a; //реальная часть
    T b; //мнимая часть
public:
    ComplexNumber(){}
    ComplexNumber(T Re, T Im): a(Re),b(Im){} //конструктор

    T Re(){
        return a;
    }

    T Im(){
        return b;
    }

    //перегрузка оператора +
    template <class Type> friend const ComplexNumber<Type> operator+ (const ComplexNumber<Type> &left,const ComplexNumber<Type> &rigth);

    //перегрузка оператора -
    template <class Type> friend const ComplexNumber<Type> operator- (const ComplexNumber<Type> &left,const ComplexNumber<Type> &rigth);

    //перегрузка оператора <<
    template <class Type> friend std::ostream& operator<< (std::ostream &out, const ComplexNumber<Type> &point);

    //перегрузка оператора >>
    template <class Type> friend std::istream& operator>> (std::istream &in, ComplexNumber<Type> &point);
};

//реализация
template <class T> const ComplexNumber<T> operator+ (const ComplexNumber<T> &left, const ComplexNumber<T> &rigth)
{
    T a = left.a + rigth.a;
    T b = left.b + rigth.b;
    return ComplexNumber<T>(a, b);
}

template <class T> const ComplexNumber<T> operator- (const ComplexNumber<T> &left, const ComplexNumber<T> &rigth)
{
    T a = left.a - rigth.a;
    T b = left.b - rigth.b;
    return ComplexNumber<T>(a, b);
}

template <class T> std::ostream& operator<< (std::ostream &out, const ComplexNumber<T> &ComplexNumber)
{
    out << ComplexNumber.a << " + (" << ComplexNumber.b << ")i";

    return out;
}
template <class T> std::istream& operator>> (std::istream &in, ComplexNumber<T> &ComplexNumber)
{
    cout << "a = ";
    in >> ComplexNumber.a;
    cout << "b = ";
    in >> ComplexNumber.b;

    return in;
}

#endif // COMPLEXNUMBER_H
