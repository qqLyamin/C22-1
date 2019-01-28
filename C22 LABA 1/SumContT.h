//#pragma once
//#include <vector>
//
//template <class F_class, class S_class>
//auto SumContT(const F_class & firstclass, const S_class & secondclass)
//{
//	
//	auto it_first = std::begin(firstclass);
//	auto it_second = std::begin(secondclass);
//	typedef decltype(*it_first + *it_first) type1;
//	typedef decltype(*it_second + *it_second) type2;
//	typedef decltype(*it_second + *it_first) RESULTTYPE;
//
//	size_t a = std::size(firstclass) > std::size(secondclass) ? std::size(firstclass) : std::size(secondclass);
//	std::vector<RESULTTYPE> my_F_vector; /*decltype(*it_first + *it_second); - вместо F*/      
//	
//	my_F_vector.reserve(a); /*вместо этого сразу а элементов в векторе сверху*/
//
//	RESULTTYPE left = *it_first;
//	RESULTTYPE right = static_cast<RESULTTYPE>(*it_second);
//
//	for (auto var : my_F_vector)
//	{
//		my_F_vector.push_back(left + right);
//
//		if (it_first != std::end(firstclass))
//		{
//			++it_first;
//			left = *it_first;
//		}
//		else
//		{
//			left = type1();
//		}
//		
//		if (it_second != std::end(secondclass))
//		{
//			++it_second;
//			right = static_cast<F>(*it_second);
//		}
//		else
//		{
//			right = type2();
//		}
//	}
//
//	return my_F_vector;
//}