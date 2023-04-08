#include <iostream>
#include <cmath>

class CFixedPointNumber {
private: 
	int intPart;
	int fractPart;

public:
	CFixedPointNumber(int intPart = 0, int fractPart = 0);

	void setIntPart(int intPart);
	void setFractPart(int fractPart);
	void setDoubleValue(double value);

	int getIntPart() const;
	int getFractPart() const;
	double getDoubleValue() const;

	CFixedPointNumber findSum(const CFixedPointNumber& value);
	CFixedPointNumber findSubstraction(const CFixedPointNumber& value);
	CFixedPointNumber findMultiplication(const CFixedPointNumber& value);
	CFixedPointNumber findDivision(const CFixedPointNumber& value);
};