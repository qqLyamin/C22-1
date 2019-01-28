#pragma once

template <class container>
void IncAnyCont(container & myCont)
{
	auto it = std::begin(myCont);
	auto it_end = std::end(myCont);

	while (it != it_end)
	{
		*it = ++(*it);

		++it;
	}
}