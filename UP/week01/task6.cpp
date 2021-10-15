#include <iostream>

using namespace std;

int main()
{
    bool p, q;
    
    cin >> p >> q;
    
    if (p && q)
        cout << "konunkciq" << endl;
    if (!p || q)
        cout << "implikaciq" << endl;
    if (p == q)
        cout << "ekvivalenciq" << endl;

    return 0;
}
