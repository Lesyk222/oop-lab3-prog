#include "CFixedPointNumber.h"

int main() {
	CFixedPointNumber a(5, 13);
	CFixedPointNumber b(4, 67);

	CFixedPointNumber sum = a.findSum(b);
	CFixedPointNumber substract = a.findSubstraction(b);
	CFixedPointNumber multiply = a.findMultiplication(b);
	CFixedPointNumber division = a.findDivision(b);

	std::cout << "a = " << a.getDoubleValue() << std::endl;
	std::cout << "b = " << b.getDoubleValue() << std::endl;
	std::cout << "sum = " << sum.getDoubleValue() << std::endl;
	std::cout << "substract = " << substract.getDoubleValue() << std::endl;
	std::cout << "multiply = " << multiply.getDoubleValue() << std::endl;
	std::cout << "division = " << division.getDoubleValue() << std::endl;
}