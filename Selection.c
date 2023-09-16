#include <stdio.h>

void selecao(char v[],int n);

int main()
{
    char x[100]; 
    printf("digite seu nome: ");
    fgets(x,sizeof(x),stdin);
    
    int k = 0;
    while(x[k] != '\0'){  //fazendo leitura do array e tirando \n do valor digitado
        if(x[k] == '\n'){
            x[k] = '\0';
        }
        k++;
    }
    
    selecao(x,k);
    
    for(int i = 0;i < k;i++){ //imprimindo o array ordenado
        printf("%c",x[i]);
    }
    return 0;
}

void selecao(char v[], int n){
    int i,j;
    char m;
    
    for(i = 0; i < n; i++){
        for(j = (i + 1);j < n; j++){
            if(v[i] > v[j]){
                m = v[i];
                v[i] = v[j];
                v[j] = m;
            }
        }
    }
}