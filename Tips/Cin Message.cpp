#include <iostream>
#include <string> 
using namespace std;
int main ()
{
string message;
cout << "Please enter your message\n";
getline(cin,message);
cout << "Message : " << message << endl;

return 0; 
}
