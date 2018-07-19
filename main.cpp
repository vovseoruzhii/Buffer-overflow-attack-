#include <iostream>

using namespace std;

void myfunc();
int echer();

int main(){

cout<<"POPYTKA PEREPOLNEIEA BUFFERA";
myfunc();
cout<<"\r\n NE POLUCHILOS!";
int k;
cin>>k;

return 0;
}

void myfunc(){

int * m[1];
m[3] = (int *) &echer;


}

int echer(){

cout<<"\r\n HAHAHAHHAHAH BUFFER OVERFLOW IS SUCCESIEVE! \r\n";

return 1;
}
