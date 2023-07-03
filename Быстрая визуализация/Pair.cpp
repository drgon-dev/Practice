#include "Pair.h"

Pair::Pair()
{
	first = 0;
	second = 0;
}

Pair::Pair(int a,int b){
	this->first = a;
	this->second = b;
}

Pair::Pair(Pair&a)
{
	this->first = a.first;
	this->second = a.second;
}

int Pair::g1()
{
	return first;
}

int Pair::g2()
{
	return second;
}

void Pair::in1(int a)
{
	first = a;
}

void Pair::in2(int a)
{
	second = a;
}

Pair& Pair::operator=(Pair a)
{
	this->first = a.first;
	this->second = a.second;
	return *this;
}
