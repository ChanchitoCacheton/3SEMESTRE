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
        i=i+((9*x)+(3*y)+z);

        if(*i=='_'){
            if (jugador==1)
                *i='X';
            else if (jugador==2)
                *i='O';
        }
        else
        cout << endl << "JUGADA INVALIDA - PIERDE TURNO" << endl;

}

bool ganador (char (*A)[3][3]){
    char*i = **A;

    if (*i!='_' && *i==*(i+4) && *(i+4)==*(i+8)) return true;
    else if (*i!='_' &&  *i==*(i+13) && *(i+13)==*(i+26)) return true;
    else if (*i!='_' && *i==*(i+12) && *(i+12)==*(i+24)) return true;
    else if (*i!='_' && *i==*(i+10) && *(i+10)==*(i+20)) return true;

    else if (*(i+2)!='_' && *(i+2)==*(i+4) && *(i+4)==*(i+6)) return true;
    else if (*(i+2)!='_' && *(i+2)==*(i+13) && *(i+13)==*(i+24)) return true;
    else if (*(i+2)!='_' && *(i+2) == *(i+14) && *(i+14)==*(i+26)) return true;
    else if (*(i+2)!='_' && *(i+2) == *(i+10) && *(i+10)==*(i+18)) return true;

    else if (*(i+9)!='_' && *(i+9) == *(i+13) && *(i+13)==*(i+17)) return true;
    else if (*(i+9)!='_' && *(i+9) == *(i+13) && *(i+13)==*(i+17)) return true;

    else if(*(i+3)!= '_' && *(i+3) == *(i+13) && *(i+13)==*(i+23)) return true;
    else if(*(i+6)!= '_' && *(i+6) == *(i+16) && *(i+16)==*(i+26)) return true;
    else if (*(i+11)!='_' && *(i+11)== *(i+13) && *(i+13) == *(i+15)) return true;
    else if (*(i+18)!='_' && *(i+18)==*(i+22) && *(i+22)==*(i+26)) return true;
    else if (*(i+20)!='_' && *(i+20)==*(i+22) && *(i+22)==*(i+24)) return true;

    else return false;
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

    cout << "TURNO DE JUGADOR 1: " << endl;

    do{cout << "x: "; cin >> x;}while(x>2);
    do{cout << "y: "; cin >> y;}while(y>2);
    do{cout << "z: "; cin >> z;}while(z>2);


    jugada(C,x,y,z,1);
    imprimirC(C);

    if(ganador(C)){
        cout << endl << "//////////////////////" << endl
                     << "/-- GANA JUGADOR 1 --/" << endl
                     << "//////////////////////" << endl;
        break;
    }

    cout << endl << "**********************************************" << endl << endl;

    cout << "TURNO DE JUGADOR 2: " << endl;

    do{cout << "x: "; cin >> x;}while(x>2);
    do{cout << "y: "; cin >> y;}while(y>2);
    do{cout << "z: "; cin >> z;}while(z>2);

    jugada(C,x,y,z,2);
    imprimirC(C);

    if(ganador(C)){
        cout << endl << "//////////////////////" << endl
                     << "/-- GANA JUGADOR 2 --/" << endl
                     << "//////////////////////" << endl;
        break;
    }

    cout << endl << "**********************************************" << endl << endl;
    }

    return 0;
}
