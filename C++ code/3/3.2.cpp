#include "iostream"
using namespace std;
int main()
{
int i, j, k = 0, m = 0;
for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
        k++;
        k-= j;
    }
}
  m = i + j;
  cout<<"k="<<k<<"m="<<m<<endl;
  system("pause");
  return 0;
}