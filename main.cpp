#include <iostream>

using namespace std;

void imprimirC(char (*A)[3][3]){
    char*i=**A;
    for(;i<**A+27;i++){
            if((int(i)- int(A))%3==0)
                cout <<endl;
            if((int(i)- int(A))%9==0)
                cout <<endl;

            cout << " " << *i ;
        }
        cout << endl;

}


void jugada(char (*A)[3][3], int x, int y, int z, int jugador){
    char*i=**A;
    if (jugador==1){
        i=i+((9*x)+(3*y)+z);
        *i='X';
    }

    else if (jugador==2){
        i=i+((9*x)+(3*y)+z);
        *i='O';
    }
}


int main()
{
    char C[3][3][3]={{{'_','_','_'},
                      {'_','_','_'},
                      {'_','_','_'}},

                     {{'_','_','_'},
                      {'_','_','_'},
                      {'_','_','_'}},

                     {{'_','_','_'},
                      {'_','_','_'},
                      {'_','_','_'}}};
    int x=0;
    int y=0;
    int z=0;

    while(true){

    cout << "Ingrese jugada del Jugador 1: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << endl;
    if (x>2 || y>2 || z>2){
        cout << endl << "JUGADA INVALIDA - PIERDE TURNO" << endl;
    }

    else{
    jugada(C,x,y,z,1);
    imprimirC(C);
    }


    cout << endl << "**********************************************" << endl << endl;

    cout << "Ingrese jugada del Jugador 2: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << endl;

    if (x>2 || y>2 || z>2)
        cout << endl << "JUGADA INVALIDA" << endl;

    else{
    jugada(C,x,y,z,2);
    imprimirC(C);
    cout << endl << "**********************************************" << endl << endl;
    }

    }


    return 0;
}
