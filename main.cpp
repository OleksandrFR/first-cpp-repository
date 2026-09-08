#include <iostream>

int main() {
    setlocale(LC_ALL, "UA, RU");

    int balance;
    int choice;
    int money;

    std::cout << "Введіть суму балансу:\n";
    std::cin >> balance;
    std::cout << "Ваш баланс: \n" << balance;

    std::cout << "1. Перевірити баланс:\n ";
    std::cout << "2. Покласти гроші: \n";
    std::cout << "3. Зняти гроші: \n";
    std::cout << "4. Вийти";

    std::cout << "Оберіть дію.";
    std::cin >> choice;

    switch (choice) {
        case 1: 
        std::cout << "Ваш баланс:\n " << balance; break;
        
        case 2:
        std::cout << "Введіть суму поповнення:\n "; 
        std::cin >> money;
        balance += money; break;

        case 3:
        std::cout << "Введіть суму зняття:\n ";
        std::cin >> money;
        balance -= money; break;

        case 4:
        std::cout << "Завершення роботи.."; break;

        default: 
        std::cout << "Неправильний вибір..";
    }
    return 0;


}