#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator==(Fraction right) {
		return numerator_ * right.denominator_ == denominator_ * right.numerator_;
	}

	bool operator!=(Fraction right) {
		return !(numerator_ * right.denominator_ == denominator_ * right.numerator_);
	}

	bool operator<(Fraction right) {
		return numerator_ * right.denominator_ < denominator_ * right.numerator_;
	}

	bool operator>(Fraction right) {
		return denominator_ * right.numerator_ < numerator_ * right.denominator_;
	}

	bool operator<=(Fraction right) {
		return numerator_ * right.denominator_ <= denominator_ * right.numerator_;
	}

	bool operator>=(Fraction right) {
		return denominator_ * right.numerator_ <= numerator_ * right.denominator_;
	}
};


int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n'; 
	return 0;
}