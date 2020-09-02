#include <iostream>
using namespace std;
 void leer(int a[], int n){
     for(int i=0;i<n;i++){
         cout <<"Ingrese el elemento "<< n -i <<" de su arreglo:" <<endl;
         cin>> a[i];
     }
 }
 void suma(int ar1[],int ar2[], int n, int resul[]){
     for(int i=0;i<n;i++){ 
         resul[i]= ar1[i] + ar2[i];
     }
 }
 void desplegar(int resul[],int n){
     cout<< "El resultado es:[";
     for(int i=0;i<n;i++){cout << resul[i] << ",";}cout <<"]";
     
     
 }
 int main (){
        int n, k;
        cout<< endl << endl;
        cout<< endl<<endl;
        cout<<"BIENVENIDO AL SUMADOR DE ARREGLOS"<<endl;
            cout<< "Ingrese el numero de elementos a agregar en su arreglo 1:"<< endl;
        cin>>n;
        k=n;
        int Arreglo1[n];
        leer(Arreglo1,n);
        
        cout<<"Ingrese el numero de elementos a agregar  en su arreglo 2:"<<endl;
        cin>>n;
        int Arreglo2[n];
        leer(Arreglo2,n);
        int Arreglo3[k];
        if(k !=n){
            cout << "Las longitudes de los arreglos no es la misma, la operacion no puede realizarse:( "<<endl;
        }else{
        suma(Arreglo1,Arreglo2,n,Arreglo3);
        desplegar(Arreglo3,n);
        cout<<endl;
        cout<<endl;
        
       
        }
         
    }
 
 
   