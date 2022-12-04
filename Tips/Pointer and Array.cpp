#include <iostream> 
using namespace std; 
int main ()
{
int num [7] = {1,2,3,8,11,10,14}, *p, i;
p = num;
for (int i=0; i<7; i++)
cout << "Show values : <p[i]<<"; 
cout <<"Show address: " <<&p[i] << endl;
}
