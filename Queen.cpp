#include <cmath>
#include <iostream>

int main() {

    int Column_1, String_1;
    
    int Column_2, String_2;

    std::cin >> Column_1;
    std::cin >> String_1;
    std::cin >> Column_2;
    std::cin >> String_2;

    if (Column_1 && String_1 && Column_2 && String_2 > 0 && Column_1 && String_1 && Column_2 && String_2 <= 8) {
        if (Column_1 == Column_2) {
            std::cout << "YES\n";

        } else if (String_1 == String_2) {
            std::cout << "YES\n";
        } else if (std::abs(Column_1 - Column_2) == std::abs(String_1 - String_2)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    } else {
        std::cout << "Не соответствует размеру поля\n";
    }
    
}