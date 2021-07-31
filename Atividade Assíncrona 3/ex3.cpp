#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int numero_lesmas, aux, maior=1;

    while(scanf("%d", &numero_lesmas)!=EOF){
        vector<int> velocidades_lesmas(numero_lesmas);
        vector<int> niveis_velocidade(numero_lesmas);
        for(int i=0; i<numero_lesmas; i++){
            scanf("%d", &aux);
            velocidades_lesmas[i]=aux;
            if(aux<10){
                niveis_velocidade[i]=1;
            }else if(aux>=10 && aux<20){
                niveis_velocidade[i]=2;
            }else{
                niveis_velocidade[i]=3;
            }
            if(niveis_velocidade[i]>maior){
                maior=niveis_velocidade[i];
            }
        }
        printf("%d\n", maior);
        maior=1;
    }
    return 0;
}