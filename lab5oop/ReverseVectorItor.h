#pragma once
#include "Itor.h"
#include "Vector.h"

template<class T>
class ReverseVectorItor : public Itor<T>
{
public:
	ReverseVectorItor(Vector<T>& elements);

	T* first() override;
	T* next() override;
	bool end() const;

	virtual T& operator*();

protected:
	Vector<T>& elements;
	size_t index;
};

template <class T>
ReverseVectorItor<T>::ReverseVectorItor(Vector<T>& elements) :
	elements(elements), index(0)
{
}

template <class T>
T* ReverseVectorItor<T>::first()
{
	if (elements.get_size())
	{
		return &elements[index = elements.get_size() - 1];
	}
	return nullptr;
}

template <class T>
T* ReverseVectorItor<T>::next()
{
	if (--index > -1)
	{
		return &elements[index];
	}
	return nullptr;
}

template <class T>
bool ReverseVectorItor<T>::end() const
{
	if (index + 1 > 0)
	{
		return true;
	}
	return false;
}

template <class T>
T& ReverseVectorItor<T>::operator*()
{
	return elements[index];
}
