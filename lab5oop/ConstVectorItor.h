#pragma once
#include "VectorItor.h"

template <class T>
class ConstVectorItor final : public VectorItor<T>
{
public:
	ConstVectorItor(Vector<T>& elements);

	T operator*() const;
};

template <class T>
ConstVectorItor<T>::ConstVectorItor(Vector<T>& elements):
	VectorItor<T>(elements)
{
}

template <class T>
T ConstVectorItor<T>::operator*() const
{
	return VectorItor<T>::elements[VectorItor<T>::index];
}
