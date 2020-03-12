#pragma once
#include "Itor.h"
#include "Vector.h"

template<class T>
class VectorItor : public Itor<T>
{
public:
	VectorItor(Vector<T>& elements);

	T* first() override;
	T* next() override;
	bool end() const;

	virtual T& operator*();

private:
	Vector<T>& elements;
	size_t index;
};

template <class T>
VectorItor<T>::VectorItor(Vector<T>& elements) :
	elements(elements), index(0)
{
}

template <class T>
T* VectorItor<T>::first()
{
	return elements.get_size() ? &elements[index = 0] : nullptr;
}

template <class T>
T* VectorItor<T>::next()
{
	return ++index < elements.get_size() ? &elements[index] : 0;
}

template <class T>
bool VectorItor<T>::end() const
{
	if (index < elements.get_size()) 
	{
		return true;
	}
	return false;
}

template <class T>
T& VectorItor<T>::operator*()
{
	return elements[index];
}
