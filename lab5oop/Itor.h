#pragma once
template<class T>
class Itor
{
public:
	virtual ~Itor() = default;
	virtual T* first() = 0;
	virtual T* next() = 0;
	virtual bool end() = 0;
};

