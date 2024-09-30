#include <iostream>

struct address
{
    std::string city;
    std::string street;
    int numberHouse{};
    int numberFlat{};
    int index{};
};

void printAddress(const address& citizen);

int main()
{
    setlocale(LC_ALL, "rus");

    address citizenOne{ "Москва", "Арбат", 12, 8, 123456 };
    address citizenTwo{ "Инжевск", "Пушкина", 59, 143, 953769 };

    printAddress(citizenOne);
    std::cout << std::endl;
    printAddress(citizenTwo);
}

void printAddress(const address& citizen)
{
    std::cout << "Город: " << citizen.city << std::endl;
    std::cout << "Улица: " << citizen.street << std::endl;
    std::cout << "Номер дома: " << citizen.numberHouse << std::endl;
    std::cout << "Номер квартиры: " << citizen.numberFlat << std::endl;
    std::cout << "Индекс: " << citizen.index << std::endl;
}