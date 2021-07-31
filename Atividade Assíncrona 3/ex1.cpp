#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> valores_par(5);
    vector<int> valores_impar(5);
    int valor_lido, aux_par=0, aux_impar=0;

    for (int i=0; i<15; i++){
        scanf("%d", &valor_lido);
        if(valor_lido%2 == 0){
            valores_par[aux_par]=valor_lido;
            aux_par++;
        }else{
            valores_impar[aux_impar]=valor_lido;
            aux_impar++;
        }
        if(aux_par==5){
            for(int j=0; j<5; j++){
                printf("par[%d] = %d\n", j, valores_par[j]);
            }
            aux_par=0;
        }
        if(aux_impar==5){
            for(int k=0; k<5; k++){
                printf("impar[%d] = %d\n", k, valores_impar[k]);
            }
            aux_impar=0;
        }
    }
    if(aux_impar!=0){
        for(int i=0; i<aux_impar; i++){
            printf("impar[%d] = %d\n", i, valores_impar[i]);
        }
    } 
    if(aux_par!=0){
        for(int i=0; i<aux_par; i++){
            printf("par[%d] = %d\n", i, valores_par[i]);
        }
    }
    
    return 0;
}