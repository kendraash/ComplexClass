//
// Assignment  :  #4
// Class       :  CST 136
//
// Author      :  Kendra Ash 
//
// File        :  complex.cpp	
//
//
// Description :  Complex class implementation.
//

#include <iostream>
#include <cstdlib>
#include "complex.h"

using namespace std;

Complex::Complex(float real, float imaginary) : m_real(real), m_imaginary(imaginary)
{

}
float Complex::real() const
{
	return m_real;
}
float Complex::imaginary() const
{
	return m_imaginary;
}


// Operators 
// Arithmetic + - * / ect. 
Complex Complex:: operator+(const Complex &rhs)
{	

	return Complex(m_real + rhs.m_real, m_imaginary + rhs.m_imaginary);
	
}
Complex Complex:: operator-(const Complex &rhs) 
{
	return Complex(m_real-rhs.real(), m_imaginary-rhs.imaginary());
}

Complex Complex :: operator*(const Complex &rhs) 
{
	return Complex((m_real * rhs.real() - m_imaginary * rhs.imaginary())
		,(m_real * rhs.imaginary() + m_imaginary *rhs.real()));
}
Complex Complex :: operator/(const Complex &rhs)
{
	return Complex((m_real * rhs.real() + m_imaginary * rhs.imaginary())
		/ (rhs.real()*rhs.real() + rhs.imaginary() * rhs.imaginary()),
		 ((m_imaginary *rhs.real() - m_real * rhs.imaginary())
		/ (rhs.real()*rhs.real() + rhs.imaginary() * rhs.imaginary())));
}
Complex Complex :: operator-()
{
	return -m_real, -m_imaginary;
}
// += -= *= and /= operators 
Complex &Complex:: operator+=(const Complex &rhs)
{
	m_real += rhs.real();
	m_imaginary += rhs.imaginary();
	return *this;
}
		

Complex &Complex :: operator-=(const Complex &rhs)
{
	m_real -= rhs.real();
	m_imaginary -= rhs.imaginary();
	return *this;
}
Complex &Complex :: operator*=(const Complex &rhs)
{
	m_real *= rhs.real();
	m_imaginary *= rhs.imaginary();
	return *this;

}
Complex &Complex :: operator/=(const Complex &rhs)
{
	m_real /= rhs.real();
	m_imaginary /= rhs.imaginary();
	return *this;
}

// Non memeber operators
// Comparison

bool operator==(const Complex &lhs, const Complex &rhs)
{
	return lhs.real() == rhs.real() && lhs.imaginary() == rhs.imaginary();

}

bool operator!=(const Complex &lhs, const Complex &rhs)
{
	return !(lhs == rhs);
}
bool operator<(const Complex &lhs, const Complex &rhs)
{
	return (lhs < rhs);
}
bool operator>(const Complex &lhs, const Complex &rhs)
{
	return !(lhs < rhs);
}
bool operator<=(const Complex &lhs, const Complex &rhs)
{
	return (lhs < rhs || lhs == rhs);
}
bool operator>=(const Complex &lhs, const Complex &rhs)
{
	return (lhs > rhs || lhs == rhs);
}