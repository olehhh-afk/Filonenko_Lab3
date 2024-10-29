#include <iostream>

int main() {
    int n;
    int сума = 0;
    int i = 1;

    std::cout << "Введіть число n: ";
    std::cin >> n;

    do {
        сума += i;
        i++;
    } while (i <= n);

    std::cout << "Сума чисел від 1 до " << n << " дорівнює " << сума << std::endl;

    return 0;
}
