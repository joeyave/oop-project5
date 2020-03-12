#include "Vector.h"
#include "List.h"
#include "VectorItor.h"
#include "ListItor.h"

#include <iostream>

int main()
{
	Vector<int> vector(5);
	for (int i = 0; i < 5; i++)
	{
		vector[i] = i;
	}
	
	List<int> list;
	for (int i = 4; i > -1; i--)
	{
		list.put(&vector[i]);
	}

	VectorItor<int> vector_itor(vector);
	int* ptr = vector_itor.first();
	while (ptr)
	{
		std::cout << *ptr << ' ';
		ptr = vector_itor.next();
	}
	std::cout << std::endl;

	ListItor<int> list_itor(list);
	ptr = list_itor.first();
	while (ptr)
	{
		std::cout << *ptr << ' ';
		ptr = list_itor.next();
	}
	std::cout << std::endl;

	return 0;
}
