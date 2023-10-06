#include <iostream>

using namespace std;

int main() {
    
    int b, g, r;
    cin >> b >> g;
    r = g/2 - b;
    if (r > 0)
        cout << "Faltam " << r << " bolinha(s)" << endl;
    else
        cout << "Amelia tem todas bolinhas!" << endl;

    return 0;
}