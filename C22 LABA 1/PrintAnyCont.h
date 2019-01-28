#pragma once
#include <string>
#include <iterator>

template <class container/*, typename T*/>  //не понимаю нужен ли Т
void PrintAnyCont(const container & myCont)
{
	auto it = std::begin(myCont);
	auto it_end = std::end(myCont);

	while (it != it_end)
	{
		std::cout << *it << std::endl;
		++it;
	}
}