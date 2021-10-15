#include <iostream>
#include <cmath>

using namespace std;

bool checkValidity(int a, int b, int c)
{
    if ((a + b > c || a + c > b || b + c > a)
        && (a > 0 && b > 0 && c > 0))
        return true;
    else
        return false;
}

double altitudeCalc(double area, double base) {
    return ((2*area) / base);
}

int main()
{
    double a, b, c, s, area;
    
    cin >> a >> b >> c;
    
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Vuvedi validni celi ili neceli chisla..." << endl;
        cin >> a >> b >> c;
    }
    
    if (checkValidity(a, b, c)) {
        s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Lice na tr.: " << area << endl;
        cout << "Visochini: " << endl;
        cout << "Kum A: " << altitudeCalc(area, a) << endl;
        cout << "Kum B: " << altitudeCalc(area, b) << endl;
        cout << "Kum C: " << altitudeCalc(area, c) << endl;
    } else {
        cout << "Tova ne obrazuva triugulnik, vuvedi strani otnovo...";
    }
    
    return 0;
}
