#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i,j,c,nbC=0;
    int ligne[100];
    char rep;
    int m[100][100];
    printf("saisie un nombre N:");
    scanf("%d",&n);
    printf("%d",n);
    printf("saisir les combinaison et . pour finir\n");
    for(i=0;i<100;i++){
        ligne[i]=0;
    }
    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            m[i][j]=0;
        }
    }
    i=0;
    while((c=getc(stdin))!='.'){
        if(c=='\n'){
            if(j>0) {
            i++;
            nbC=j;
            }
            j=0;
        }
        else if(c>='0'&& c<='9') m[i][j++]=c-'0';
    }
    int nbL=i-1,k=0;
    int f=0;
    printf("%d,%d\n",nbL,nbC);
    for(i=0;i<nbL;i++){
        if(ligne[k]==m[i][k]){
            f=0;
            }
            else{
                ligne[k++]=m[i][k];
                f=1;
            }
            if(f==1){
            for(j=0;j<nbC;j++){
                printf("%d ",m[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
