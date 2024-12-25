#include <iostream>
using namespace std;
int main() 
{
        char c1 = 'f',c2 = 'l',c3 = 'y';
        c1 = c1 + 3 > 'z' ? c1 + 3 - 26 : c1 + 3;
        c2 = c2 + 3 > 'z' ? c2 + 3 - 26 : c2 + 3;
        c3 = c3 + 3 > 'z' ? c3 + 3 - 26 : c3 + 3;
        cout << c1 << c2 << c3 << endl;
        system("pause");
        return 0;
}