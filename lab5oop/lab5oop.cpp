#include "Vector.h"
#include "List.h"
#include "VectorItor.h"
#include "ListItor.h"

#include <iostream>
#include <list>
#include "ReverseVectorItor.h"
#include "ReverseListItor.h"
#include "ConstReverseListItor.h"
#include "ConstReverseVectorItor.h"
#include "ConstListItor.h"
#include "ConstVectorItor.h"

template<class T>
void vector_itor_test(Vector<T>& vector);

template<class T>
void const_vector_itor_test(Vector<T>& vector);

template<class T>
void reverse_vector_itor_test(Vector<T>& vector);

template<class T>
void const_reverse_vector_itor_test(Vector<T>& vector);

template<class T>
void list_itor_test(List<T>& list);

template<class T>
void const_list_itor_test(List<T>& list);

template<class T>
void reverse_list_itor_test(List<T>& list);

template<class T>
void const_reverse_list_itor_test(List<T>& list);

int main()
{
	Vector<int> vector(5);
	for (int i = 0; i < 5; i++)
	{
		vector[i] = i;
	}

	// Vector tests.
	vector_itor_test(vector);
	const_vector_itor_test(vector);
	reverse_vector_itor_test(vector);
	const_reverse_vector_itor_test(vector);

	List<int> list;
	for (int i = 0, size = vector.get_size(); i < size; i++)
	{
		list.put(&vector[i]);
	}

	// List tests.
	list_itor_test(list);
	const_list_itor_test(list);
	reverse_list_itor_test(list);
	const_reverse_list_itor_test(list);
	
	return 0;
}

template<class T>
void vector_itor_test(Vector<T>& vector)
{
	std::cout << "VectorItor" << std::endl;
	VectorItor<int> vector_itor(vector);
	for (vector_itor.first(); vector_itor.end(); vector_itor.next())
	{
		std::cout << *vector_itor << " ";
	}
	std::cout << std::endl;
}

template<class T>
void const_vector_itor_test(Vector<T>& vector)
{
	std::cout << "ConstVectorItor" << std::endl;
	ConstVectorItor<int> const_vector_itor(vector);
	for (const_vector_itor.first(); const_vector_itor.end(); const_vector_itor.next())
	{
		std::cout << *const_vector_itor << " ";
	}
	std::cout << std::endl;
}

template<class T>
void reverse_vector_itor_test(Vector<T>& vector)
{
	std::cout << "ReverseVectorItor" << std::endl;
	ReverseVectorItor<int> reverse_vector_itor(vector);
	for (reverse_vector_itor.first(); reverse_vector_itor.end(); reverse_vector_itor.next())
	{
		std::cout << *reverse_vector_itor << " ";
	}
	std::cout << std::endl;
}

template<class T>
void const_reverse_vector_itor_test(Vector<T>& vector)
{
	std::cout << "ConstReverseVectorItor" << std::endl;
	ConstReverseVectorItor<int> const_reverse_vector_itor(vector);
	for (const_reverse_vector_itor.first(); const_reverse_vector_itor.end(); const_reverse_vector_itor.next())
	{
		std::cout << *const_reverse_vector_itor << " ";
	}
	std::cout << std::endl;
}

template<class T>
void list_itor_test(List<T>& list)
{
	std::cout << "ListItor" << std::endl;
	ListItor<int> list_itor(list);
	for (list_itor.first(); list_itor.end(); list_itor.next())
	{
		std::cout << *list_itor << " ";
	}
	std::cout << std::endl;
}
template<class T>
void const_list_itor_test(List<T>& list)
{
	std::cout << "ConstListItor" << std::endl;
	ConstListItor<int> const_list_itor(list);
	for (const_list_itor.first(); const_list_itor.end(); const_list_itor.next())
	{
		std::cout << *const_list_itor << " ";
	}
	std::cout << std::endl;
}

template<class T>
void reverse_list_itor_test(List<T>& list)
{
	std::cout << "ReverseListItor" << std::endl;
	ReverseListItor<int> reverse_list_itor(list);
	for (reverse_list_itor.first(); reverse_list_itor.end(); reverse_list_itor.next())
	{
		std::cout << *reverse_list_itor << " ";
	}
	std::cout << std::endl;
}
template<class T>
void const_reverse_list_itor_test(List<T>& list)
{
	std::cout << "ConstReverseListItor" << std::endl;
	ConstReverseListItor<int> const_reverse_list_itor(list);
	for (const_reverse_list_itor.first(); const_reverse_list_itor.end(); const_reverse_list_itor.next())
	{
		std::cout << *const_reverse_list_itor << " ";
	}
	std::cout << std::endl;
}

