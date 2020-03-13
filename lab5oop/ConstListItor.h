#pragma once
#include "ListItor.h"

template<class T>
class ConstListItor final : public ListItor<T>
{
public:
	ConstListItor(List<T>& list);

	T operator*() const;
};

template <class T>
ConstListItor<T>::ConstListItor(List<T>& list):
	ListItor<T>(list)
{
}

template <class T>
T ConstListItor<T>::operator*() const
{
	return *ListItor<T>::current->value;
}
