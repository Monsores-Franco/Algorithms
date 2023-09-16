//o foco aq é mover o array para a direita e colocar o elemento no lugar dele: 6,3,8,5,2

#include <stdio.h>

int main(){
    int v[] = {6,3,8,5,2};
    int i,k,j,copia;
    int n = sizeof(v)/sizeof(v[0]);

    for(i = 1; i < n; i++){
        j = (i - 1);
        k = i;
        copia = v[i];

        while((k > 0) && (v[j] > copia)){
            v[k] = v[j];
            j--;
            k--;
        }
        if(k==i){
            v[i] = v[k];
        }
        else{
            v[k] = copia;
        }
    }
    for(int g = 0;g<n;g++){
        printf("%d",v[g]);
    }

    return 0;
}