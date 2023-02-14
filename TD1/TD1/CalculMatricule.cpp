#include <iostream>
#include <math.h>
using namespace std;
void matricule(){
    int m1 = 2222954;
    int m2 = 2207305;
    int value = 3 - (abs(m1 + m2) %13);
    cout << value << endl;

}

int main(){
    matricule();
}