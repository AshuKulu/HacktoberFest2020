# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;      // If '+' is entered
            break;

        case '-':
            cout << num1-num2;    // If '-' is entered
            break;

        case '*':
            cout << num1*num2;     // If '*' is entered
            break;

        case '/':
            cout << num1/num2;      // If '/' is entered
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct"<<endl;
            break;
    }

    return 0;
}
