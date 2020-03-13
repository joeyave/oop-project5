#pragma once
#include "ReverseVectorItor.h"

template<class T>
class ConstReverseVectorItor final : public ReverseVectorItor<T>
{
public:
	ConstReverseVectorItor(Vector<T>& elements);

	T operator*() const;
};

template <class T>
ConstReverseVectorItor<T>::ConstReverseVectorItor(Vector<T>& elements):
	ReverseVectorItor<T>(elements)
{
}

template <class T>
T ConstReverseVectorItor<T>::operator*() const
{
	return ReverseVectorItor<T>::elements[ReverseVectorItor<T>::index];
}
