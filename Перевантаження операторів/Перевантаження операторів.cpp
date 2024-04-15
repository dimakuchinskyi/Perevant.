//№1
/*#include <iostream>
#include <Windows.h>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            cerr << "Помилка: Знаменник не може дорівнювати нулю. Встановлено значення знаменника на 1." << endl;
            denominator = 1;
        }
        simplify();
    }
    void simplify() {
        int common = gcd(numerator, denominator);
        numerator /= common;
        denominator /= common;
        if (denominator < 0) {
            numerator *= -1;
            denominator *= -1;
        }
    }
    Fraction operator+(const Fraction& other) const {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator-(const Fraction& other) const {
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator*(const Fraction& other) const {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) {
            cerr << "Помилка: Ділення на нуль. Повертаємо 0." << endl;
            return Fraction(0);
        }
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator);
    }
    friend ostream& operator<<(ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction sum = f1 + f2;
    Fraction difference = f1 - f2;
    Fraction product = f1 * f2;
    Fraction quotient = f1 / f2;
    cout << "Сума: " << sum << endl;
    cout << "Різниця: " << difference << endl;
    cout << "Добуток: " << product << endl;
    cout << "Частка: " << quotient << endl;
    return 0;
}
*/
//№2
/*#include <iostream>
#include <Windows.h>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    Complex operator*(const Complex& other) const {
        double newReal = real * other.real - imag * other.imag;
        double newImag = real * other.imag + imag * other.real;
        return Complex(newReal, newImag);
    }
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        if (denominator == 0) {
            cerr << "Помилка: Ділення на нуль. Повертаємо 0." << endl;
            return Complex(0, 0);
        }
        double newReal = (real * other.real + imag * other.imag) / denominator;
        double newImag = (imag * other.real - real * other.imag) / denominator;
        return Complex(newReal, newImag);
    }
    friend ostream& operator<<(ostream& os, const Complex& complex) {
        if (complex.imag >= 0)
            os << complex.real << " + " << complex.imag << "i";
        else
            os << complex.real << " - " << -complex.imag << "i";
        return os;
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;
    cout << "Сума: " << sum << endl;
    cout << "Різниця: " << difference << endl;
    cout << "Добуток: " << product << endl;
    cout << "Частка: " << quotient << endl;
    return 0;
}
*/