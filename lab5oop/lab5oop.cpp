#include "Vector.h"
#include "List.h"
#include "VectorItor.h"
#include "ListItor.h"

#include <iostream>
#include <list>
#include "ReverseVectorItor.h"
#include "ReverseListItor.h"

int main()
{

	Vector<int> vector(5);
	for (int i = 0; i < 5; i++)
	{
		vector[i] = i;
	}

	std::cout << "VectorItor" << std::endl;
	VectorItor<int> vector_itor(vector);
	for (vector_itor.first(); vector_itor.end(); vector_itor.next())
	{
		std::cout << *vector_itor << " ";
	}
	std::cout << std::endl;

	std::cout << "ReverseVectorItor" << std::endl;
	ReverseVectorItor<int> reverse_vector_itor(vector);
	for (reverse_vector_itor.first(); reverse_vector_itor.end(); reverse_vector_itor.next())
	{
		std::cout << *reverse_vector_itor << " ";
	}
	std::cout << std::endl;

	List<int> list;
	for (int i = 4; i > -1; i--)
	{
		list.put(&vector[i]);
	}

	std::cout << "ListItor" << std::endl;
	ListItor<int> list_itor(list);
	for (list_itor.first(); list_itor.end(); list_itor.next())
	{
		std::cout << *list_itor << " ";
	}
	std::cout << std::endl;

	std::cout << "ReverseListItor" << std::endl;
	ReverseListItor<int> reverse_list_itor(list);
	for (reverse_list_itor.first(); reverse_list_itor.end(); reverse_list_itor.next())
	{
		std::cout << *reverse_list_itor << " ";
	}
	std::cout << std::endl;

	return 0;
}
