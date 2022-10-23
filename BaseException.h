#pragma once
#include<iostream>
using namespace std;

class BaseException
{
protected:
	char str[100];
public:
	BaseException() {};
	BaseException(const char* s)
	{
		strcpy_s(str, strlen(s) + 1, s);
	}
	void Print()
	{
		cout << str << endl;
	}
};
class NullException : public BaseException
{
public:
	NullException() {}
	NullException(const char* s) :BaseException(s)
	{}
	void Print()
	{
		cout << "NullException\n";
	}
};
class SizeException : public BaseException
{
public:
	SizeException() { }
	SizeException(const char* s) :BaseException(s)
	{}
	void Print()
	{
		cout << "SizeException\n";
		cout << str << endl;
	}
};
