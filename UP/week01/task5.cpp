#include <iostream>
#include <cmath>

using namespace std;

struct hemi {
    double radius;
} hemi;

struct cone {
    double radius;
    double side;
} cone;

int main()
{
    int hmsCount;
    double coneVol, hmsVol;

    cout << "Vuvedi danni za konus (r, h): ";
    cin >> cone.radius >> cone.side;
    cout << "Vuvedi danni za polusfera (r): ";
    cin >> hemi.radius;
    cout << "Vuvedi broi topki: ";
    cin >> hmsCount;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Vuvedi danni za konus (r, h): ";
        cin >> cone.radius >> cone.side;
        cout << "Vuvedi danni za polusfera (r): ";
        cin >> hemi.radius;
        cout << "Vuvedi broi topki: ";
        cin >> hmsCount;
    }
    
    coneVol = (1/3) * M_PI * cone.radius * 2 * sqrt(cone.side*cone.side - cone.radius*cone.radius);
    hmsVol = (2 * M_PI * hemi.radius * hemi.radius) / 3;
    
    cout << "Suma na sladoled = " << coneVol + (hmsVol * hmsCount);
    
	return 0;
}
