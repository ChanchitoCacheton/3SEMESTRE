#include <iostream>

using namespace std;

void imprimirC(char (*A)[3][3]){
    char*i=**A;
    for(;i<**A+27;i++){
            cout << *i;
        }

}

void jugada(int x, int y, int z){


}

int main()
{
    char C[3][3][3]={{{'0','1','2'},
                      {'3','4','a'},
                      {'8','7','6'}},

                     {{'a','b','c'},
                      {'d','e','f'},
                      {'g','h','i'}},

                     {{'A','B','C'},
                      {'D','E','F'},
                      {'G','H','I'}}};

    int x,y,z;
    imprimirC(C);
    cout <<endl <<  int(C);
    return 0;
}
