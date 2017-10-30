#include <iostream>
using namespace std;
int main ()
{
int edad[14];
int suma=0;
cout<< "Este es un programa para saber la edad promedio"<<endl;
for(int i=0; i < 14 ;i++)
{
cout<<"A que edad terminaste la carrera de Física?"<<endl;
cin>>edad[i];
suma+=edad[i];
}
for (int j=0; j < 14 ;j++)
cout << edad[j] << " , ";
cout<<"Esta es la edad promedio de graduacion de los estudiantes de fisica."<<suma<<endl;
return 0;
}
