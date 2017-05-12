/*
 * Union.hpp
 *
 *  Created on: 12.05.2017
 *      Author: frbe5612
 */

#ifndef UNION_HPP_
#define UNION_HPP_

#include <memory>
#include <vector>
#include "Bag.hpp"

template<class T> class Union: virtual public Bag<T>
{
public:
	Union()
	{
	}

	template<class U>
	Union(Union<U> const & u)
	{
		this->m_bag = std::dynamic_pointer_cast<std::vector<std::shared_ptr<T> > >(u.m_bag);
	}

	virtual ~Union()
	{
		std::cout << "Union ~~~~~~~~~~" << std::endl;
	}

	virtual void add(std::shared_ptr<T> el)
	{
		Bag<T>::add(el);
	}

	virtual void erase(std::shared_ptr<T> el)
	{
		Bag<T>::erase(el);
	}
};


#endif /* UNION_HPP_ */
