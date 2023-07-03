#pragma once
class Pair
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	Pair(Pair&);
	~Pair() {};
	int g1();
	int g2();
	void in1(int);
	void in2(int);
	Pair& operator=(Pair);
};

