#pragma once
#include <functional>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include "PrintAnyCont.h"

template <class Cont1, class Cont2, class Cont3, typename T>
void Separate(Cont1 & container1, Cont2 & container2, Cont3 & container3, std::function<void(Cont1& C1, Cont2& C2, Cont3& C3)> f)
{
	f(container1, container2, container3);
	std::cout << "\n";
	PrintAnyCont(container1);
	std::cout << "\n";
	std::cout << "\n";
	PrintAnyCont(container2);
	std::cout << "\n";
	std::cout << "\n";
	PrintAnyCont(container3);
}



