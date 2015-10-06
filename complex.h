//
// Assignment  :  #4
// Class       :  CST 136
//
// Author      :  Kendra Ash 
//
// File        :  complex.h	
//
//
// Description :  Complex class declaration.
//

#include <iostream>
#include <cstdlib>

using namespace std;

class Complex 
{
	friend ostream &operator<<(ostream &lhs, const Complex &rhs)
	{
		if (rhs.m_imaginary != 1)
		{
			// Checking if either one is equal to zero 
			if (rhs.m_real != 0 && rhs.m_imaginary > 0)
			{
				lhs << rhs.m_real << " + " << rhs.m_imaginary << "i";
				return lhs;
			}
			if (rhs.m_real != 0 && rhs.m_imaginary < 0)
			{
				lhs << rhs.m_real << rhs.m_imaginary << "i";
			}
			// if the real part is zeor, returning only imaginary
			else if (rhs.m_real == 0 && rhs.m_imaginary != 0)
			{
				lhs << rhs.m_imaginary << "i";
				return lhs;
			}
			// if imaginary part is zero, returning only real part
			else if (rhs.m_real != 0 && rhs.m_imaginary == 0)
			{
				lhs << rhs.m_real;
				return lhs;
			}
		}
		if (rhs.m_imaginary == 1)
		{
			if (rhs.m_real != 0)
				cout << rhs.m_real << " + i";
			else
				cout << "i";
		}
		if (rhs.m_imaginary == -1)
		{
			if (rhs.m_real != 0)
				cout << rhs.m_real << " - i";
			else
				cout << "-i";
		}

	}
	friend istream &operator>>(istream &lhs,  Complex &rhs)
	{
		char dumy;
		lhs >> rhs.m_real >> dumy >> rhs.m_imaginary>>dumy;
		return lhs;
	}

	public:
		Complex(float real=0, float imaginary=0);
		float real() const;
		float imaginary() const;

		// operators 
		Complex operator+(const Complex &rhs);
		Complex operator-(const Complex &rhs);
		Complex operator*(const Complex &rhs);
		Complex operator/(const Complex &rhs);
		// negation
		Complex operator-();
		// += *= -= /=
		Complex &operator+=(const Complex &rhs);
		Complex &operator-=(const Complex &rhs);
		Complex &operator*=(const Complex &rhs);
		Complex &operator/=(const Complex &rhs);

	private:
		float m_real;
		float m_imaginary;

};

bool operator==(const Complex &lhs, const Complex &rhs);

bool operator!=(const Complex &lhs, const Complex &rhs);

bool operator<(const Complex &lhs, const Complex &rhs);

bool operator>(const Complex &lhs, const Complex &rhs);

bool operator<=(const Complex &lhs, const Complex &rhs);

bool operator>=(const Complex &lhs, const Complex &rhs);