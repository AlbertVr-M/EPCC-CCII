#include <iostream>
#include <vector>

using namespace std;

void binario(int decimal,vector<int> num_bin ){

    int residuo = decimal%2;
    num_bin.push_back(residuo);
    int cociente = decimal/2;
    if (cociente<1){
        cout<<"El numero binario:"<<endl;
        for(int i=num_bin.size()-1;i>=0;i--)
        {
            cout<<num_bin[i];
        }
    }
    else{
        binario(cociente,num_bin);
    }
}
int main(){
    vector<int> bin;
    int deci; 
    cout<<"Ingrese el numero decimal: ";cin>>deci;
    binario(deci,bin);
    return 0;
}
