#include <iostream>

int matricule() {
    int m1 = 2222954;
    int m2 = 2207305;
    int value = 3 - (abs(m1 + m2) % 13);
    return value;
}

int fonction(int matricule) {
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
    std::cout << fonction(matricule());
    return 0;
}