#pragma once
#include "ReverseListItor.h"

template<class T>
class ConstReverseListItor final : public ReverseListItor<T>
{
public:
	ConstReverseListItor(List<T>& list);

	T operator*() const;
};

template <class T>
ConstReverseListItor<T>::ConstReverseListItor(List<T>& list):
	ReverseListItor<T>(list)
{
}

template <class T>
T ConstReverseListItor<T>::operator*() const
{
	return *ReverseListItor<T>::current->value;
}
