#pragma once
////������� 6. ����������� ������� ���������� �� 
//  ������ ��������� �������������������, �������� ����
//  ���������� ��� ���������� ����� ������������ 
//  ���������� �������� sort(), 
//	//� ��� ������� ������� - ������-�������
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

	/*� ��� ������� ������� - ������ - �������*/

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

