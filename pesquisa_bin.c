#include <stdio.h>

int pbinario(int v[],int tamanho,int chave);

int main(){
    int k;
    int v[] = {1,2,3,4,5,6};
    int tamanho = sizeof(v)/sizeof(v[0]);
    printf("Digite uma chave de 1 à 7: ");
    scanf("%d",&k);

    int p = pbinario(v,tamanho,k);
    printf("o numero esta na posição %d: ",p);
    }

int pbinario(int v[],int tamanho,int chave){
    int c = 0,f = (tamanho),i;
    
    while(c <= f){
        i = (c+f)/2;
        if(v[i] == chave){
            return i;
            break;
        }
        else if(v[i] > chave){
            f = i -1;
        }
        else{
            c = i +1;
        }
    }
    return -1;
}