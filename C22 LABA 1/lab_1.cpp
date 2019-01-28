//�������� 1:
// enum class
// initializer_list � ������������� ������ �������������
// auto
// decltype
// lambda functions

#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <iostream>
#include <algorithm>

#include "PrintAnyCont.h"
#include "NegateAll.h"
#include "IncAnyCont.h"
#include "absSort.h"
#include "SumContT.h"
#include "Separate.h"

//***********************************************
//enum � ���������
// https://habr.com/post/276763/ 
//************************************************

#define stop __asm nop


int main()
{


	//������� 1. 
	{
		enum class months : char { January, February, March, April, May, June, July, August, September, October, November, December };
		enum class weekDays : char { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

		months m = months::January;
		//�) ������� ��������
		//if (m == weekDays::Monday) {}; ��� ������
		//�) ������������� ������������� ������

		months year[] = { months::January, months::February, months::March, months::April, 
							months::May, months::June, months::July, months::August,
								months::September, months::October, months::November, months::December };

		size_t n = sizeof(year); //???

	stop
	}

	//////////////////////////////////////////////////////////////////////////////////
	//������� 2. �������� � � ������� ������ ������������� ��������� ���������� ������ �
	//���������� - string

	//� ������� range-based for ������������ ��� ����� � ������� �������

	//� ��������� ������� ������ �������� ����������� // ��� ������ if �������� �� ��������� ���� ��������� ���������
	//{
	//	std::vector<std::string> vStr = {"asiudh", "aiuwyhgq", "uuwhhh"};

	//	for (std::string& i : vStr)
	//	{
	//		for (auto& j : i)
	//		{
	//			j -= 0x20;		// ������ � �����		
	//		}
	//	}

	//stop
	//}

	/////////////////////////////////////////////////////////////////////
	//������� 3. �������� � � ������� ������ ������������� ��������� ����������
	//map ����� �������, ����� �� �������� � �������� ����� �����, � � �������� �������� 
	//��������������� �� �������� ������������ ���� (string), ������������ � ���� �����
	
	//� ������� range-based for ������������ ����������, ��������: A: any, apple, away
	//{
	//	//{ {'a', "any"}, {'a', "apple"}, {'a', "away"} }

	//	//std::set<std::string> mySet = { "any", "apple", "away" };

	//	std::map<char, std::set<std::string>> myMap = { {'w', {"wear", "weather", "water", "walk", "winchester"} },
	//													{'a', {"any", "apple", "away"} } };
	//	
	//	for (const auto& [ch ,str] : myMap)
	//	{
	//		std::cout << ch << ": ";
	//		for (const auto& var : str)
	//		{
	//			std::cout << var << " ";
	//		}
	//		std::cout << "\n";
	//	}


	//}

	//stop
	/////////////////////////////////////////////////////////////////////
	//������� 4. ������� ������� ��� ������ �� ������ ��������� �������������������, �������� ����

	/*{
		std::vector<double> vd = { 1.1, 2.2, 3.3 };

		PrintAnyCont(vd);

		std::string s("abc");
		PrintAnyCont(s);

		int ar[] = { 1, 2, 3 };
		PrintAnyCont(ar);

		std::initializer_list<int> il{ 3,4,5 };
		PrintAnyCont(il);

		
	stop

	}*/

	/////////////////////////////////////////////////////////////////////
	//������� 5. 	
	//������� ������� ��� "���������" ��������, ��������:
	// ����: {1, -2, 5}, �����: {-1, 2, -5})
	// ��������� �������� ���� std::string ����� ��������� "aBc1" -> "AbC1"
	//��������� �������������������, �������� ����:

	/*{
		std::vector<double> vd{ 1.1,2.2,3.3 };
		NegateAll(vd);

		std::list<std::string> ls{ "aBc", "Qwerty", "n12" };
		NegateAll(ls);

		int ar[]{ 1, 2, 3 };
		NegateAll(ar);
		
	stop

	}*/




	//������� 5�. ������� ������� ��� ���������� ��������� �������������������, �������� ����

	/*{
		std::vector<double> vd = { 1.1, 2.2, 3.3 };
		IncAnyCont(vd);


		int ar[] = { 1, 2, 3 };
		IncAnyCont(ar);

		std::string s("123");
		IncAnyCont(s);


	stop
	}
*/
	//////////////////////////////////////////////////////////////////////////////////
	//������� 6. ����������� ������� ���������� �� ������ ��������� �������������������, �������� ����
	//���������� ��� ���������� ����� ������������ ���������� �������� sort(), 
	//� ��� ������� ������� - ������-�������

	{
		std::vector<double> vd = { -3.3,  2.2, -1.1 };
		//absSort(vd);


		int ar[] = { -3, 2, -1 };
		//absSort(ar);

		__asm nop
	}

	//////////////////////////////////////////////////////////////////////////////////
	//������� 7.
	//�������� �������, ������� ����� ����������� � ���������� ������, ������ ������� 
	//�������� �������� ������ ��������� ���� ������������������� 
	//������ ����� � � ���������� ������� ����.

	//��������� 1: ��� ��� ������������������ ����� ���� ������ �����, �������
	//������� ������ ��������������� ������� ������������ �� ����
	 
	//��������� 2: ��������� � ����������� ������������� ��������� transform(), 
	//� ������� ���������������� �������� ������ � ���� ������� �������� ������-��������

	//��������:

	//{
	//	std::vector<int> v{ 1,2,3,4 };
	//	std::list<double> l{ 1.1, 2.2, 3.3, 4.4, 5.5 };

	//	size_t mysize;
	//	std::size(v) > std::size(l) ? mysize = std::size(v) : mysize = std::size(l);

	//	/*myVec = SumCont(v, l);*/

	//	std::list<int> ll{ 1, 2, 3, 4, 5, 6, 7, 8 };
	//	double ar[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	//	
	//	std::vector<decltype(ll)> myVec;
	//	myVec.reserve(mysize);

	//	myVec = SumContT(ar, ll);

	//	__asm nop
	//}


	
	//////////////////////////////////////////////////////////////////////////////////
	//������� 8. ���������� �������, ������� ��������� ��������� ���������:	
	//�������������� ������������������ ������ ���� � ���������� ������ ����, 
	//template <class Cont, typename T>
	//��� (������) ���������� ������ ���� �� vector, list, deque, set � ���������� ���� �� 
	//����, ��� � � �������������� ������������������ 

	//������� ������ "���������" �������� �������� ������������������ � ��� ������ ���������� 
	//�������� ��������� �������. ������� ������ �����-��������
	//�������� ������������������ ��� ���� �� ��������

	{
		
		std::vector<int> v{ 1,2,3,4,5 };
		std::list<int> l; //���� ������
		std::deque<int> d; //� ���� ��������
		
		auto f = [&](void) {
			if (!v.empty())
			{
				for (auto var : v)
				{
					if (var % 2 == 0)
					{
						l.push_back(var);
					}
					else
					{
						d.push_back(var);
					}

				}
			}
			else if (!l.empty())
			{
				for (auto var : l)
				{
					if (var % 2 == 0)
					{
						v.push_back(var);
					}
					else
					{
						d.push_back(var);
					}

				}
			}
			else if (!d.empty())
			{
				for (auto var : d)
				{
					if (var % 2 == 0)
					{
						v.push_back(var);
					}
					else
					{
						l.push_back(var);
					}

				}
			}
		};

		Separate(v, l, d, f);
		__asm nop
	}


	//////////////////////////////////////////////////////////////////////////////////
	//������� 9. C ������� ��������� for_each()!!! (� �� count_if()) ��������� ������� 
	//���� � ������� ��������
	//  ������������ ������ �������
	{
		char s[] = "Hello World!";
		size_t length = strlen(s);

		for_each(s[0], s[length], [&](char a) 
		{
			size_t counter;
			for (auto var : s)
			{
				if (isupper(a))
				{
					++counter;
				}
			}
			return counter;
		}	);



	}


	//////////////////////////////////////////////////////////////////////////////////
	//������� 10a. �������� �����, ������� ������ ���� "��������" ��� ������� � ����������� ����������
	//������ ����. 
	//��� �������� ��������� ����������� std::vector

	//���������� �����������, ������� ����� ��������� ����� ���������� �������� (�������� ����� �����������)
	//���������� ����� ���������� ������ ���������� �������� (�������� ����� �����������)
	//���������� ����� �������� ������ ���������� �������� (�������� ����� �����������)
	//���������� ����� ����������, ������� ����� ��������� � �������� ��������� ������� �� ����������� / �� ��������

	


	
	//������� 10b. ������������� ����� �� ����������� ������� (��� �������� �����) ����� �������,
	//����� �������� �� ������ ���� �� �����������, �� � ���������� � �������� ���������.
	//���������: ����� ����� � ����� ���� (��� ����� ������) ������, �������, �� �����, �� ��� �����
	//������������ ��� ����� ����� ������, ��� �����, ��������� � ��� ����������������, ��� �������
	//����� ����� �������� ��������� (������, ������)
	//���������: ����� ������ ����� �������� � ����� � ����� ������ ����� �������������� 
 

	//////////////////////////////////////////////////////////////////////////////////
	//������� 11*. ����������� ����������� enum � ��������� �������������  - enumToString
	// � �������� - stringToEnum

	//���������: 
	//***********
	//1. ��������������� ����������� ���������� ������ ��� ����� ����� ���-�� ������� =>
	//1.1 ����������� ��������� � ������������ ������ ���� ����������� => ��������������� ������
	//���� ������ ���� �����������, => ���������� ������ ����� ���� ������������ � ��������
	//����� � std::map
	
	//1.2 � ��� �������� (��������������� ���������� ����������)
	//����� ���� ������ � ���� ����� ����������� (�������� ������, ������, ��� �������� �� �����������) 
	//=> �������� ��������� std::map<string,<��������> >
	
	//1.3 �������� ��������� �++11 ���������� ������������� ���� ����� ���� ������� ������� � ����,
	//� �������� �� ���������� ������������� ����������� 
	
	//***********
	//2. ��� ��� ���� ������������ ������, �� enumToString � stringToEnum ������ ���� ����������
	//2.1 ������������ ����� ��������� ��� ������������ �������� � ������� ��������, �������
	//   ������ �� ������������� => ������!
	//2.2 � �������� enumToString � stringToEnum (� ����������� �� ���� ������������) ����� �����
	//   ������������� ��������������� ������������� ���� ������������ ���������
	
	

	{
	//��������:
/*
		COLORS c1;
		try {
			c1 = stringToEnum<COLORS>("blue");
		}
		catch (...)
		{
		//...
		}

	
		auto Str = enumToString(c1);
*/
	}
}