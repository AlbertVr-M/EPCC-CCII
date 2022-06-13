#include <random>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    random_device rd;
    mt19937 g(rd());
    int opc;
    int tam;
    bool xf=true;
    uniform_int_distribution <> num(100,999);
    uniform_int_distribution <char> let1('A','Z');
    uniform_int_distribution <char> let2('A','Z');
    cout<<"Crea robots"<<endl;
    cout<<"Cuantos robots quiere ";
    cin>>tam;
    int n1[5];
    char l1[5],l2[5];
    for (int i=0; i<tam; i++){
        l1[i]=let1(g);
        l2[i]=let2(g);
        n1[i]=num(g);
    }
    while (xf==true){
    cout<<"Que deseas hacer: "<<endl;
    cout<<"1.Eliminar"<<endl;
    cout<<"2.Resetear"<<endl;
    cout<<"3.Mostrar"<<endl;
    cout<<"4.salir"<<endl;
    cin>>opc;

    if (opc==1){
        int num;
        cout<<"Que robot deseas eliminar: ";
        cin>>num;
        l1[num] = 0;
        l2[num] = 0;
        n1[num] = 0;
    }
    else if (opc==2){
        for (int i=0; i<tam; i++){
            l1[i]=let1(g);
            l2[i]=let2(g);
            n1[i]=num(g);
        }
        for (int i=0; i<tam; i++){
            int aux=tam;
            if (l1[i]==l1[aux]){
                if (l2[i]==l2[aux]){
                    if (n1[i]==n1[aux]){
                        l1[i]=let1(g);
                        l2[i]=let2(g);
                        n1[i]=num(g);
                        i--;
                    }
                }
            }
            aux--;
        }
        cout<<"Reseteados"<<endl;
    }
    else if (opc==3){
        for (int i=0; i<tam; i++){
            if (l1[i]==0 && l2[i]==0 && n1[i]==0){
                l1[i]=let1(g);
                l2[i]=let2(g);
                n1[i]=num(g);
            }
        }
        for (int i=0; i<tam; i++){
            int aux=tam;
            if (l1[i]==l1[aux]){
                if (l2[i]==l2[aux]){
                    if (n1[i]==n1[aux]){
                        l1[i]=let1(g);
                        l2[i]=let2(g);
                        n1[i]=num(g);
                        i--;
                    }
                }
            }
            aux--;
        }
        for (int i=0;i<tam;i++){
        cout<<l1[i]<<l2[i]<<n1[i]<<endl;
        }
    }
    else if (opc==4){
        xf = false;
    }
    }
    return 0;
    }