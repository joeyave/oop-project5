#pragma once
template<class T>
class Itor
{
public:
	virtual T* first() = 0;
	virtual T* next() = 0;
};

