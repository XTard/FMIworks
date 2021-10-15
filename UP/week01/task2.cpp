#include <iostream>

using namespace std;

int main()
{
    int num, digits[3];
    
    cin >> num;
    
    while (cin.fail() || !(num >= 100 && num < 1000))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Vuvedi validno cqlo tricifreno chislo..." << endl;
        cin >> num;
    }

    digits[0] = num / 100;
    digits[1] = (num / 10) % 10;
    digits[2] = num % 10;
    
    
    cout << digits[0] << endl;
    cout << digits[1] << endl;
    cout << digits[2] << endl;
    
    cout << "Suma: " << digits[0] + digits[1] + digits[2] << endl;

    cout << "Proizv.: " << digits[0] * digits[1] * digits[2] << endl;

    return 0;
}
