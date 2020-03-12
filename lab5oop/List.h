#pragma once
#include <ostream>

template<class T>
class List
{
public:
	class Link
	{
	public:
		T* value;
		Link* next;

		Link(T* value, Link* next);
		~Link();
	};

	Link* head;

	List();
	~List();

	void put(T* value);
	T* get();
};

template <class T>
List<T>::Link::Link(T* value, Link* next) :
	value(value), next(next)
{
}

template <class T>
List<T>::Link::~Link()
{
	delete next;
}

template <class T>
List<T>::List() :
	head(nullptr)
{
}

template <class T>
List<T>::~List()
{
	delete head;
}

template <class T>
void List<T>::put(T* value)
{
	head = new Link(value, head);
}

template <class T>
T* List<T>::get()
{
	return head->value;
}
