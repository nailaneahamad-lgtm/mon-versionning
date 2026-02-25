#include <stdio.h>
int main(){
    int N,i,j;
    do{
        printf("Entrer un entier positif: ");
        scanf("%d",&N);
        if(N<=0){
            puts("Erreur: la valeur saisi n'est pas positif.");
        }
    }while(N<=0);
    printf("\n------------Tableau de multiplication------------\n");
    for(i=1;i<=N;i++){
        for(j=1;j<=10;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    printf("\n------------Tableau d'addition----------------\n");
    for(i=1;i<=N;i++){
        for(j=1;j<=10;j++){
            printf("%d + %d = %d\n",i,j,i+j);
        }
        printf("\n");
    }
    return 0;
}
