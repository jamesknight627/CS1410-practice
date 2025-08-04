#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class Calculator {
private:
    int a, b;

public:
    Calculator(T a, T b): a(a), b(b) {}

    T add() const {return a + b;}
    T subtract() const {return a - b;}
    T multiply() const {return a * b;}
    T divide() const {
        if(b == 0){
            throw runtime_error("Division by zero");
        }
        return a / b;
    }
};

int main(){
    try {
        Calculator<double> c(10, 2);
        cout << c.add() << endl
             << c.subtract() << endl
             << c.multiply() << endl
             << c.divide() << endl;

        Calculator<int> c1(4, 0);
        cout << c1.add() << endl
             << c1.subtract() << endl
             << c1.multiply() << endl
             << c1.divide() << endl;

    } catch (runtime_error& e){
        cerr << "An exeption happened: " << e.what() << endl;
    }

    return 0;
}