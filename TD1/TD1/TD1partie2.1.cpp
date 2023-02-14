#include <iostream>
int function(int matricule) {
    int val1 = 0;
    int val2 = 0;
    for (int i = 0; i <= matricule; i++) {
        val1 += i;
    }
    for (int j = 0; j <= matricule; j++) {
        val2 += pow(j, 2);
    }
    int result = (val1 * val1) - val2;
    return result;
}
int main() {
    std::cout << function(5);
    return 0;
}