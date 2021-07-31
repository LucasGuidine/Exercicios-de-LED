#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int numero_jogadores;
    float soma_tentativas_s=0, soma_tentativas_b=0, soma_tentativas_a=0, soma_acertos_s=0, soma_acertos_b=0, soma_acertos_a=0;
    scanf("%d", &numero_jogadores);
    vector<int>s(numero_jogadores);
    vector<int>b(numero_jogadores);
    vector<int>a(numero_jogadores);
    vector<int>s1(numero_jogadores);
    vector<int>b1(numero_jogadores);
    vector<int>a1(numero_jogadores);

    for(int i=0; i<numero_jogadores; i++){
        char nome[50];
        scanf("%s", nome);
        scanf("%d", &s[i]);
        scanf("%d", &b[i]);
        scanf("%d", &a[i]);
        scanf("%d", &s1[i]);
        scanf("%d", &b1[i]);
        scanf("%d", &a1[i]);
    }

    for(int i=0; i<numero_jogadores; i++){
        soma_tentativas_s+=s[i];
        soma_tentativas_b+=b[i];
        soma_tentativas_a+=a[i];
        soma_acertos_s+=s1[i];
        soma_acertos_b+=b1[i];
        soma_acertos_a+=a1[i];
    }

    printf("Pontos de Saque: %.2f %%.\n", (soma_acertos_s/soma_tentativas_s)*100);
    printf("Pontos de Bloqueio: %.2f %%.\n",(soma_acertos_b/soma_tentativas_b)*100);
    printf("Pontos de Ataque: %.2f %%.\n", (soma_acertos_a/soma_tentativas_a)*100);
    return 0;
}