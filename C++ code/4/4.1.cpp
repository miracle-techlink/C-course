#include "iostream"
using namespace std;

int main() {
    int n, sum=0 ;
    for (n = 1;n+=2) 
    {
	  sum += n;
	  if(n>=20) break;
	
    }
	cout << "sum=" << sum << endl;
    system("pause");
    return 0;
}