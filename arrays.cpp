#include<iostream>
using namespace std;
int main() {
    string cars[4] = {
        "Volvo",
        "BMW",
        "Ford",
        "Mazda"
    };
    cars[0] = "Opel";
    cout << cars[0];
}