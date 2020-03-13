#pragma once
#include "Itor.h"
#include "List.h"

template<class T>
class ReverseListItor : public Itor<T>
{
public:
	ReverseListItor(List<T>& list);

	T* first() override;
	T* next() override;
	bool end() override;

	virtual T& operator*();

protected:
	List<T>& list;
	typename List<T>::Link* current;
};

template <class T>
ReverseListItor<T>::ReverseListItor(List<T>& list) :
	list(list), current(list.head)
{
}

template <class T>
T* ReverseListItor<T>::first()
{
	current = list.head;
	while (current->next != nullptr)
	{
		current = current->next;
	}
	return current ? current->value : nullptr;
}

template <class T>
T* ReverseListItor<T>::next()
{
	current = current->prev;
	return current ? current->value : nullptr;
}

template <class T>
bool ReverseListItor<T>::end()
{
	if (current != nullptr)
	{
		return true;
	}		
	return false;
}

template <class T>
T& ReverseListItor<T>::operator*()
{
	return *current->value;
}