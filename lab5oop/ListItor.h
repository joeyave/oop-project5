#pragma once
#include "Itor.h"
#include "List.h"

template<class T> class ListItor : public Itor<T>
{
public:
	ListItor(List<T>& list);

	T* first() override;
	T* next() override;
	bool end();
	
	virtual T& operator*();

protected:
	List<T>& list;
	typename List<T>::Link* current;
};

template <class T>
ListItor<T>::ListItor(List<T>& list) : list(list), current(list.head)
{
}

template <class T>
T* ListItor<T>::first()
{
	current = list.head;
	return current ? current->value : nullptr;
}

template <class T>
T* ListItor<T>::next()
{
	current = current->next;
	return current ? current->value : nullptr;
}

template <class T>
bool ListItor<T>::end()
{
	if (current != nullptr)
	{
		return true;
	}
	return false;
}

template <class T>
T& ListItor<T>::operator*()
{
	return *current->value;
}
