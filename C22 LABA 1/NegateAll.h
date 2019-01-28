#pragma once
#include <typeinfo>
#include <iterator>
#include <string>

std::string operator-(std::string str) 
{	
	for (int i = 0; i < str.length(); i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}

	return str;
}


template <class container>
void NegateAll(container & myCont)
{
	auto it = std::begin(myCont);
	auto it_end = std::end(myCont);

	while (it != it_end)
	{
		*it = -(*it); 
		++it;
	}
	
	/*else
	{
		while (it != it_end)
		{
			if (*it < 'A')
			{
				static_cast<int>(*it) += 20;
			}
			if (*it > 'A')
			{
				static_cast<int>(*it) -= 20;
			}
		}
	}*/
}