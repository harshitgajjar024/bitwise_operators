//bitwise operators
#include <iostream>
using namespace std;

int main() {

int a = 5;
int b = 3;
int bit_and = a&b;
int bit_or = a|b;
int bit_xor = a^b;
int bit_not = -a;
int left_shift = a<<2;
int right_shift = a>>2;

cout<<"AND="<<bit_and<<endl;
cout<<"or="<<bit_or<<endl;
cout<<"xor="<<bit_xor<<endl;
cout<<"not="<<bit_not<<endl;
cout<<"left="<<left_shift<<endl;
cout<<"right="<<right_shift<<endl;

return 0;


}
   