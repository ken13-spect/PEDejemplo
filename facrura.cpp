#include <iostream>
#include <string.h>
using namespace std;

const int longCad=20;
typedef struct costoPorArticulo
{
    char nombreArticulo[longCad +1];
    int cantidad;
    float precio;
    float costoArticulo;
}cpat;// otro forma de invocar la estructura cada vez que la necesite
void llenar(cpat arreglo[], int*);
void costo(cpat arreglo[], int*);
void desplegar(cpat arreglo[],int*);
void total(cpat arreglo[], int*,float*);

int main(void){
    int articulo;
    cpat arreglo[100];// declaro el arreglo que contendra todos mis datos
    float totals;

    cout<< endl;
    cout<<"BIENVENIDO A SU TIENDA LA PREFERIDA"<<endl;
    cout<< endl;
    cout <<"Cantidad de productos ha agregar a su factura:"<< endl;
    cin>> articulo;
    cin.ignore(100,'\n');   // ya que el siguiente dato que se procesara es de tipo char 

    llenar(arreglo,&articulo);//utilizo la direcion del dato
    costo(arreglo,&articulo); 
    desplegar(arreglo,&articulo); 
    total(arreglo,&articulo,&totals); 
    cout << endl << endl;

    cout <<"TOTAL A PAGAR....................... $" << totals << " dolares";
    cout <<"............Muchas gracias por su compra...:)" << endl;                                        
    cout << endl;
}
void llenar(cpat arreglo[], int*articulo)// utilizo el dato contendio en el puntero
{
    int i;             
    for(i=0;i<*articulo;i++){
        cout << "Descripcion del "<< i + 1 << " producto:"<<endl;
        cout<<endl;
        cout<<"Nombre del " << i +1 <<" producto:";
        cin>> arreglo[i].nombreArticulo;
        cin.ignore(100, '\n');// coloco uno despues de cada dato ya que cada uno es de diferente tipo
        cout<<"Cantidad comprada del " << i + 1 << " producto:";
        cin>> arreglo[i].cantidad;
        cin.ignore(100,'\n');
        cout<<"Precio unitario del " << i +1 << " producto $:";
        cin>> arreglo[i].precio;
        cin.ignore(100, '\n');
        cout << endl;
        
    }
}

void costo(cpat arreglo[], int*articulo){

for ( int i=0;i < *articulo;i++){
    arreglo[i].costoArticulo = arreglo[i].cantidad * arreglo[i].precio;
}
}

void desplegar(cpat arreglo[],int*articulo)
{
    int i;
    cout << "Descripcion de la factura:"<< endl;
    for(i=0;i<*articulo;i++){
          cout<< "Nombre del producto:.......... " << arreglo[i].nombreArticulo << endl;
            cout<<"Unidades compradas:.......... " << arreglo [i].cantidad << endl;
            cout<<"Precio por unidad:...........$ "<< arreglo[i].precio  <<endl;
            cout <<"Costo total:................$ "<< arreglo[i].costoArticulo <<endl;
            cout<< endl;
    }
}

void total(cpat arreglo[],int*articulo,float*totals)
{
    for(int i=0;i<*articulo;i++)
    {
        *totals= *totals + arreglo[i].costoArticulo;
    }
}