#include <iostream>
using namespace std;
int main ()
{
size_t talla=14;
int *edad=new int[talla];
int suma=0;
cout<< "Este es un programa para saber la edad promedio"<<endl;
for(int i=0; i < talla ;i++)
{
cout<<"A que edad terminaste la carrera de Física?"<<endl;
cin>>edad[i];
suma+=edad[i];
}
for (int j=0; j < talla ;j++)
cout << edad[j] << " , ";
cout<<"Esta es la edad promedio de graduacion de los estudiantes de fisica."<<talla<<endl;
return 0;
delete [] edad;
}
