#include <iostream>
#include<string>
using namespace std;

void getName() {
    cout << "Aung Myat Moe" << endl;
}

void getStudent(string name) {
    cout << name << endl;
}


void getCountry(string country = "Myanmar") {
    cout << "My country is " << country<<endl;
}

int addition(int x, int y) {
    return x + y;
}

// reference
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

// function overloading

int addNums(int a,int b){
    return a + b;
}

double addNums(double a,double b){
    return a + b;
}

int main() {
    getName();
    getStudent("Noosi");
    getCountry();
    getCountry("Norway");
    std::cout << addition(10, 20) << std::endl;

    int a = 20;
    int b = 10;
    std::cout << "Before => " << a << b << std::endl;
    
    swapNums(a, b);
    
    std::cout <<"After =>" << a << b << std::endl;
    
    // function overloading
    int num1 = addNums(15,20);
    double num2 = addNums(17.0,18.9);
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    
}