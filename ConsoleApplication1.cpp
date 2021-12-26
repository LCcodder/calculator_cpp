#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main( int argc, const char * argv[]) {

    
    
    int num1, num2;
    char act;
    
    
    cout << "Write first number: ";
    cin >> num1;
    cout << "Write second num: ";
    cin >> num2;
    cout << "Write action(+, -, /, *): ";
    cin >> act;

    if (act == '+') {
        cout << num1 + num2;
    };
    if (act == '-') {
        cout << num1 - num2;
    };
    if (act == '/' || act == ':') {

        switch (num2) {
            case 0:
                cout << "Error, number2 can't be zero";
                break;
            default:
                double res;
                res = (double)num1 / (double)num2;
                cout << res;
        }

  

    };
    if (act == '*') {
        cout << num1 * num2;
    }
    

    return 0;
}