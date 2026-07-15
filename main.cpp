#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int playerChoice;

    std::cout << "=== Камінь, ножиці, папір ===\n";
    std::cout << "1 - Камінь\n";
    std::cout << "2 - Ножиці\n";
    std::cout << "3 - Папір\n";

    std::cout << "Твій вибір: ";
    std::cin >> playerChoice;

    std::cout << "Ти зробив вибір: " << playerChoice << "\n";

    return 0;
}