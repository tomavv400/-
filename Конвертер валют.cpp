#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	double Dol, Eu, Ua, Farit, Ye, one, two, three, four, five, sum, comiss, val;

	Dol = 103.95;
	Eu = 110.48;
	Ua = 13.96;
	Farit = 37.0;
	Ye = 0.682534;
	one = 1;
	two = 2;
	three = 3;
	four = 4;
	five = 5;
	sum = 0;
	val = 0;


	std::cout << one << ".������:" << Dol << "\n";
	std::cout << two << ".����:" << Eu << "\n";
	std::cout << three << ".����:" << Ua << "\n";
	std::cout << four << ".�����:" << Farit << "\n";
	std::cout << five << ".����:" << Ye << "\n";


	std::cout << "����� ��� ������� ������:";
	std::cin >> sum;
	comiss = sum / 100 * 5;
	sum = sum - comiss;
	std::cout << "�������� ������:";
	std::cin >> val;

	if (val == 1)
	{
		std::cout << "���������� ������:" << sum / Dol << " ������";
	}
	if (val == 2)
	{
		std::cout << "���������� ������:" << sum / Eu << " ����";
	}
	if (val == 3)
	{
		std::cout << "���������� ������:" << sum / Ua << " ����";
	}
	if (val == 4)
	{
		std::cout << "���������� ������:" << sum / Farit << " �����";
	}
	if (val == 5)
	{
		std::cout << "���������� ������:" << sum / Ye << " ����";
	}


	std::cout << "\n" << "�������� ��������:" << comiss << "�.";













	return 0;
}




