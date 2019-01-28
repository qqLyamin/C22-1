#pragma once
////Задание 6. Реализовать функцию сортировки по 
//  модулю элементов последовательностей, заданных ниже
//  Собственно для сортировки можно использовать 
//  обобщенный алгоритм sort(), 
//	//а для задания условия - лямбда-функцию
//
//	{
//	std::vector<double> vd = { -3.3,  2.2, -1.1 };
//	//absSort(vd);
//
//
//	int ar[] = { -3, 2, -1 };
//	//absSort(ar);
//
//	__asm nop
//	}


template <class container, typename T>
void absSort(const container & myCont)
{
	auto it = std::begin(myCont);
	auto it_end = std::end(myCont);

	/*а для задания условия - лямбда - функцию*/

	for (int i = 0; i < std::size(myCont); i++)
	{
		for (int j = i; j < std::size(myCont); j++)
		{
			if (myCont[j] > myCont[i])
			{
				T tmp = myCont[j];
				myCont[j] = myCont[i];
				myCont[i] = tmp;
			}
		}
	}
}

