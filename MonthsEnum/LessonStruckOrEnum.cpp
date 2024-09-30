#include <iostream>

enum class months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    setlocale(LC_ALL, "rus");

    int numberMonth;
    std::cout << "Добро пожаловать!\nДля того, чтобы узнать название месяца по его порядковому номеру - введите номер месяца!\nДля выхода - введите 0\n";
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> numberMonth;
        if (numberMonth == 0)
        {
            std::cout << "До встречи, друг!";
            return 0;
        }
        while (numberMonth < static_cast<int>(months::JANUARY) || numberMonth > static_cast<int>(months::DECEMBER))
        {
            std::cout << "Такого месяца нет!\n";
            std::cout << "Введите номер месяца: ";
            std::cin >> numberMonth;
        }

        switch (numberMonth)
        {
        case static_cast<int>(months::JANUARY):
            std::cout << "Январь!\n";
            break;
        case static_cast<int>(months::FEBRUARY):
            std::cout << "Февраль!\n";
            break;
        case static_cast<int>(months::MARCH):
            std::cout << "Март!\n";
            break;
        case static_cast<int>(months::APRIL):
            std::cout << "Апрель!\n";
            break;
        case static_cast<int>(months::MAY):
            std::cout << "Май!\n";
            break;
        case static_cast<int>(months::JUNE):
            std::cout << "Июнь!\n";
            break;
        case static_cast<int>(months::JULY):
            std::cout << "Июль!\n";
            break;
        case static_cast<int>(months::AUGUST):
            std::cout << "Август!\n";
            break;
        case static_cast<int>(months::SEPTEMBER):
            std::cout << "Сентябрь!\n";
            break;
        case static_cast<int>(months::OCTOBER):
            std::cout << "Октябрь!\n";
            break;
        case static_cast<int>(months::NOVEMBER):
            std::cout << "Ноябрь!\n";
            break;
        case static_cast<int>(months::DECEMBER):
            std::cout << "Декабрь!\n";
            break;

        }
    } while (true);
    
}
