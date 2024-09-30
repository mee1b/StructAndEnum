#include <iostream>

struct accounts
{
    int cash{};
    int numberAccount{};
    std::string name;
};

void editCash(int& cash);

int main()
{
    setlocale(LC_ALL, "rus");
    accounts account;

    std::cout << "Введите номер счёта: ";
    std::cin >> account.numberAccount;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.name;
    std::cout << "Введите баланс: ";
    std::cin >> account.cash;

    editCash(account.cash);

    std::cout << "Ваш счет: " << account.name << ", " << account.numberAccount << ", " << account.cash;
    return 0;

}

void editCash(int& cash)
{
    std::cout << "Введите новый баланс: ";
    std::cin >> cash;
}
