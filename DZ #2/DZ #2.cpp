#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction() {};
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	Fraction operator+ (const Fraction& right)
	{
		int num = numerator_ * right.denominator_ +
			denominator_ * right.numerator_;
		int denum = denominator_ * right.denominator_;
		return Fraction(num, denum);
	}
	Fraction operator- (const Fraction& right)
	{
		int num = numerator_ * right.denominator_ -
			denominator_ * right.numerator_;
		int denum = denominator_ * right.denominator_;
		return Fraction(num, denum);
	}
	Fraction operator* (const Fraction& right)
	{
		int num = numerator_ * right.numerator_;
		int denum = denominator_ * right.denominator_;
		return Fraction(num, denum);
	}
	Fraction operator/ (const Fraction& right)
	{
		int num = numerator_ * right.denominator_;
		int denum = denominator_ * right.numerator_;
		return Fraction(num, denum);
	}
	Fraction operator- ()
	{
		return Fraction(-numerator_, denominator_);
	}
	void operator++ ()
	{
		numerator_ = numerator_ + 1;
		denominator_ = denominator_ + 1;
	}
	void operator++ (int)
	{
		numerator_ = numerator_ + 1;
		denominator_ = denominator_ + 1;
	}
	void operator-- ()
	{
		numerator_ = numerator_ - 1;
		denominator_ = denominator_ - 1;
	}
	void operator-- (int)
	{
		numerator_ = numerator_ - 1;
		denominator_ = denominator_ - 1;
	}
	void printFunc()
	{
		std::cout << numerator_ << "/" << denominator_;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	int num1, num2, denum1, denum2;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denum1;

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> num2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denum2;

	Fraction f1(num1, denum1);
	Fraction f2(num2, denum2);

	Fraction sum = f1 + f2;
	Fraction diff = f1 - f2;
	Fraction proizv = f1 * f2;
	Fraction delen = f1 / f2;

	std::cout << num1 << "/" << denum1 << " + " <<
		num2 << "/" << denum2 << " = ";
	sum.printFunc();
	std::cout << std::endl;

	std::cout << num1 << "/" << denum1 << " - " <<
		num2 << "/" << denum2 << " = ";
	diff.printFunc();
	std::cout << std::endl;

	std::cout << num1 << "/" << denum1 << " * " <<
		num2 << "/" << denum2 << " = ";
	proizv.printFunc();
	std::cout << std::endl;

	std::cout << num1 << "/" << denum1 << " / " <<
		num2 << "/" << denum2 << " = ";
	delen.printFunc();
	std::cout << std::endl;

	f1++;
	std::cout << "++";
	f1.printFunc();
	std::cout << std::endl;

	--f1;
	std::cout << "--";
	f1.printFunc();
	std::cout << std::endl;

	return 0;
}