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


	std::cout << one << ".Доллар:" << Dol << "\n";
	std::cout << two << ".Евро:" << Eu << "\n";
	std::cout << three << ".Юань:" << Ua << "\n";
	std::cout << four << ".Фарит:" << Farit << "\n";
	std::cout << five << ".Йена:" << Ye << "\n";


	std::cout << "Сумма для покупки валюты:";
	std::cin >> sum;
	comiss = sum / 100 * 5;
	sum = sum - comiss;
	std::cout << "Выберите валюту:";
	std::cin >> val;

	if (val == 1)
	{
		std::cout << "Получается купить:" << sum / Dol << " Доллар";
	}
	if (val == 2)
	{
		std::cout << "Получается купить:" << sum / Eu << " Евро";
	}
	if (val == 3)
	{
		std::cout << "Получается купить:" << sum / Ua << " Юань";
	}
	if (val == 4)
	{
		std::cout << "Получается купить:" << sum / Farit << " Фарит";
	}
	if (val == 5)
	{
		std::cout << "Получается купить:" << sum / Ye << " Йена";
	}


	std::cout << "\n" << "Комиссия составит:" << comiss << "р.";













	return 0;
}




