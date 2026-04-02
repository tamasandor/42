#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &org) : std::stack<T>(org)
{

}

template <typename T>
MutantStack <T>&MutantStack<T>::operator=(const MutantStack &org)
{
	if (this != &org)
	{
		std::stack<T>::operator=(org);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return this->c.end();
}