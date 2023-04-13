#include <iostream>
#include <math.h>
using namespace std;
class simple_calculator
{
private:
    int add;
    int subtract;
    int multiple;
    float divide;

public:
    void set_add(int num1, int num2)
    {
        add = num1 + num2;
    }
    void show_add()
    {
        cout << "sum : " << add << endl;
    }
    void set_subtract(int num1, int num2)
    {
        subtract = num1 - num2;
    }
    void show_subtract()
    {
        cout << "subtract : " << subtract << endl;
    }
    void set_multiple(int num1, int num2)
    {
        multiple = num1 * num2;
    }
    void show_multiple()
    {
        cout << "multiple : " << multiple << endl;
    }
    void set_divide(int num1, int num2)
    {
        divide = num1 / num2;
    }
    void show_divide()
    {
        cout << "divide :" << divide << endl;
    }
};
class scientific_calculator
{
private:
    int power;
    float square_root;
    float natural_log;
    int absolute;

public:
    void set_power(int num1, int num2)
    {
        power = pow(num1, num2);
    }
    void show_power()
    {
        cout << "power : " << power << endl;
    }
    void set_sqrt(int num1)
    {
        square_root = sqrt(num1);
    }
    void show_sqrt()
    {
        cout << "sqrt : " << square_root << endl;
    }
    void set_log(int num1)
    {
        natural_log = log(num1);
    }
    void show_log()
    {
        cout << "log : " << natural_log << endl;
    }
    void set_abs(int num1)
    {
        absolute = abs(num1);
    }
    void show_abs()
    {
        cout << "abs : " << absolute << endl;
    }
};
class hybrid_calculator : public simple_calculator, public scientific_calculator
{
};
int main()
{
    hybrid_calculator calc;
    int choose, num1, num2;
    cout << "enter 1 for add" << endl
         << "enter 2 for subtract" << endl
         << "enter 3 for subtract" << endl
         << "enter 4 for divide" << endl
         << "enter 5 for power" << endl
         << "enter 6 for sqrt" << endl
         << "enter 7 for log" << endl
         << "enter 8 for absolute" << endl;
    cin >> choose;
    cout << "enter num1 and num2 : " << endl;
    cin >> num1 >> num2;

    switch (choose)
    {
    case 1:
        calc.set_add(num1, num2);
        calc.show_add();
        break;
    case 2:
        calc.set_subtract(num1, num2);
        calc.show_subtract();
        break;
    case 3:
        calc.set_multiple(num1, num2);
        calc.show_multiple();
        break;
    case 4:
        calc.set_divide(num1, num2);
        calc.show_divide();
        break;
    case 5:
        calc.set_power(num1, num2);
        calc.show_power();
        break;
    case 6:
        calc.set_sqrt(num1);
        calc.show_sqrt();
        break;
    case 7:
        calc.set_log(num1);
        calc.show_log();
        break;
    case 8:
        calc.set_abs(num1);
        calc.show_abs();
        break;
    default:
        cout << "invalid number";
    }
    return 0;
}
