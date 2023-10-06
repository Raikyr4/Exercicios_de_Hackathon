#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float v1, v2;
    double v3, v4;
    
    cin >> v1 >> v2 >> v3 >> v4;
    
    cout << "A = " << fixed << setprecision(6) << v1 << ", B = " << v2 << endl;
    cout << "C = " << v3 << ", D = " << v4 << endl;
    
    cout << "A = " << fixed << setprecision(1) << v1 << ", B = " << v2 << endl;
    cout << "C = " << v3 << ", D = " << v4 << endl;
    
    cout << "A = " << fixed << setprecision(2) << v1 << ", B = " << v2 << endl;
    cout << "C = " << v3 << ", D = " << v4 << endl;
    
    cout << "A = " << fixed << setprecision(3) << v1 << ", B = " << v2 << endl;
    cout << "C = " << v3 << ", D = " << v4 << endl;
    
    cout << "A = " << fixed << setprecision(3) << scientific << uppercase << v1 << ", B = " << v2 << endl;
    cout << "C = " << v3 << ", D = " << v4 << endl;
    
    cout << "A = " << fixed << setprecision(0) << v1 << ", B = " << v2 << endl;
    cout << "C = " << v3 << ", D = " << v4 << endl;
    
    return 0;
}