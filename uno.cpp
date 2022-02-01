#include <iostream>
#include<time.h>
 
using namespace std;



void recetas(int cant, string nombres[]){

    for(int i = 0; i <cant; i++){
        cout<<"Ingrese nombre receta: "<<endl;
        getline(cin >> ws,nombres[i]);  
    }

   /* for(int i = 0; i < cant; i++){
        cout<<nombres[i]<<" ";
    } */

}

string recetaAleatoria( int cant, string nombres[]){


    srand (time(NULL));
    int indiceAleatorio = rand() % (cant -1);

   return (nombres[indiceAleatorio]);
}



int main(){

    
    int cant;
    
    cout<<" Ingrese cantidad de recetas: "<<endl;
    cin>>cant;
    string nombres[cant];


    recetas(cant, nombres);

    string receta = recetaAleatoria(cant, nombres);
    
    cout<<receta;

    return 0;
}