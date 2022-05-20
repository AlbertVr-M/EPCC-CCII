#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec(10);
    int nmr,ax;
    cout<<"Cuantos numeros quiere ingresar: ";cin>>nmr;
    for(int i=0;i<nmr;i++){
        cout<<"Ingresar numero: "<<endl;cin>>vec[i];
    }
    for(int i=0;i<nmr;i++){
        for(int j=i+1;j<nmr;j++){
            if(vec[i]<vec[j]){
                ax=vec[i];
                vec[i]=vec[j];
                vec[j]=ax;
            }

        }
    } 
    cout<<"De forma Ascendente"<<endl;
    for(int i=0; i<nmr;i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}