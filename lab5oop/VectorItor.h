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
	return elements.get_size() ? &elements[index = 0] : 0;
}

template <class T>
T* VectorItor<T>::next()
{
	return ++index < elements.get_size() ? &elements[index] : 0;
}
