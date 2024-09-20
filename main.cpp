#include <iostream>
using namespace std;

int main(){
    double n1=0.0, n2=0.0, n3=0.0, n4=0.0;
    double prom=0.0;
    string name, estado;

    cout<<"Ingrese el nombre del estudiante:"<<endl;
    getline(cin>>ws,name);
    cout<<"Ingrese las calificaciones:"<<endl;
    cout<<"Deberes:";
    cin>>n1;
    cout<<"Trabajos:";
    cin>>n2;
    cout<<"Pruebas:";
    cin>>n3;
    cout<<"Examenes:";
    cin>>n4;

    prom=(n1+n2+n3+n4)/4;
    cout<<"El promedio del estudiante es: "<<prom<<endl;

    if (prom>=7){
        cout<<"Estado academico : Aprobado"<<endl;
    }	if (prom<7 and prom>=5){
        cout<<"Estado academico : Suspendido"<<endl;
    }	if (prom>=1 and prom<5){
        cout<<"Estado academico : Reprobado"<<endl;
    }

    return 0;
}
