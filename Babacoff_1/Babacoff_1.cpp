// Babacoff_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

void welcome() {
	puts("      ___           ___           ___           ___           ___                       ___           ___     ");
	puts("     /\\  \\         /\\__\\         /\\  \\         /\\  \\         /\\  \\          ___        /\\  \\         /\\  \\    ");
	puts("    /::\\  \\       /:/  /         \\:\\  \\       /::\\  \\       /::\\  \\        /\\  \\      /::\\  \\       /::\\  \\   ");
	puts("   /:/\\:\\  \\     /:/  /           \\:\\  \\     /:/\\:\\  \\     /:/\\:\\  \\       \\:\\  \\    /:/\\:\\  \\     /:/\\:\\  \\  ");
	puts("  /::\\~\\:\\  \\   /:/  /  ___       /::\\  \\   /:/  \\:\\  \\   /::\\~\\:\\__\\      /::\\__\\  /:/  \\:\\  \\   /:/  \\:\\  \\ ");
	puts(" /:/\\:\\ \\:\\__\\ /:/__/  /\\__\\     /:/\\:\\__\\ /:/__/ \\:\\__\\ /:/\\:\\ \\:|__|  __/:/\\/__/ /:/__/ \\:\\__\\ /:/__/_\\:\\__\\");
	puts(" \\/__\\:\\/:/  / \\:\\  \\ /:/  /    /:/  \\/__/ \\:\\  \\ /:/  / \\:\\~\\:\\/:/  / /\\/:/  /    \\:\\  \\ /:/  / \\:\\  /\\ \\/__/");
	puts("      \\::/  /   \\:\\  /:/  /    /:/  /       \\:\\  /:/  /   \\:\\ \\::/  /  \\::/__/      \\:\\  /:/  /   \\:\\ \\:\\__\\  ");
	puts("      /:/  /     \\:\\/:/  /     \\/__/         \\:\\/:/  /     \\:\\/:/  /    \\:\\__\\       \\:\\/:/  /     \\:\\/:/  /  ");
	puts("     /:/  /       \\::/  /                     \\::/  /       \\::/__/      \\/__/        \\::/  /       \\::/  /  ");
	puts("     \\/__/         \\/__/                       \\/__/         ~~                        \\/__/         \\/__/    ");
}

int main()
{
	setlocale(LC_ALL, "rus");
	welcome();
	cout << "1.ФИО:              Луценко Владислав Алексеевич" << endl;
	cout << "2.Год рождения:     1997" << endl;
	cout << "3.Месяц рождения:   06" << endl;
	cout << "4.День рождения:    16" << endl;
	cout << "5.Место рождения:   Винница" << endl;
	cout << "6.Место проживания: Винница" << endl;
	cout << "7.Учились в садике?:Да" << endl;
	cout << "8.Номер садика:     61" << endl;
	cout << "9.В сколько лет пошли в садик?: 4" << endl;
	cout << "10.В солько лет окончили садик?:6" << endl;
	cout << "11.В сколько лет пошли в школу?:6" << endl;
	cout << "12.Номер школы:                 21" << endl;
	cout << "13.Школы/гимназия/лицей:        Гимназия" << endl;
	cout << "14.Год окончания школы:         2014" << endl;
	cout << "15.Мнения о школе:              Хорошо" << endl;
	cout << "16.Учёба в ВУЗе:                Да" << endl;
	cout << "17.Год поступления:             2015" << endl;
	cout << "18.Год окончания:               2019" << endl;
	cout << "19.ВУЗ:                         ДонНУ им Василя Стуса" << endl;
	cout << "20.Мения о ВУЗе:                Лучше чем в школе" << endl;
    return 0;
}

