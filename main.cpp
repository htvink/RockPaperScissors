#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(0));

    char again;

    do
    {
        int playerChoice;
        int computerChoice;

        computerChoice = rand() % 3 + 1;

        std::cout << "\n=== Камінь, ножиці, папір ===\n";
        std::cout << "1 - Камінь\n";
        std::cout << "2 - Ножиці\n";
        std::cout << "3 - Папір\n";

        std::cout << "Твій вибір: ";
        std::cin >> playerChoice;

        if (computerChoice == 1)
        {
            std::cout << "Комп'ютер вибрав: Камінь\n";
        }
        else if (computerChoice == 2)
        {
            std::cout << "Комп'ютер вибрав: Ножиці\n";
        }
        else
        {
            std::cout << "Комп'ютер вибрав: Папір\n";
        }

        if (playerChoice == computerChoice)
        {
            std::cout << "Нічия!\n";
        }
        else if (
            (playerChoice == 1 && computerChoice == 2) ||
            (playerChoice == 2 && computerChoice == 3) ||
            (playerChoice == 3 && computerChoice == 1)
        )
        {
            std::cout << "Ти переміг!\n";
        }
        else
        {
            std::cout << "Переміг комп'ютер!\n";
        }

        std::cout << "\nЗіграти ще раз? (y/n): ";
        std::cin >> again;

    } while (again == 'y');

    std::cout << "\nДякую за гру!\n";

    return 0;
}