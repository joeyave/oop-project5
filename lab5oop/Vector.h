#pragma once
template<class T>
class Vector
{
public:
	explicit Vector(size_t n);
	~Vector();

	T& operator[](size_t i);
	size_t get_size() const;

private:
	T* elements;
	size_t size;
};

template <class T>
Vector<T>::Vector(size_t n) :
	elements(new T[n]), size(n)
{
}

template <class T>
Vector<T>::~Vector()
{
	delete[] elements;
}

template <class T>
T& Vector<T>::operator[](size_t i)
{
	// TODO: index validation.
	return elements[i];
}

template <class T>
size_t Vector<T>::get_size() const
{
	return size;
}
