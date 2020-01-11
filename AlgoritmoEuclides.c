#include <stdio.h>

int Euclides(int, int);

int main(){
    int a,b,i;
    char opc;
    do{
        printf("\n\tIntroduce el dividendo: ");
            scanf("%d",&a);
        printf("\tIntroduce el divisor: ");
            scanf("%d",&b);
        if(b<0){
            b=-b;
        }
        if(a<0){
            a=-a;
        }
        if(b>a){
            int aux;
            aux=a;
            a=b;
            b=aux;
        }
        printf("\n\tEl m%cximo com%cn divisor es %d",160,163,Euclides(a,b));
        printf("\n\n\t%cRepetir?",168);
        printf("\n\t-->(s/n) ");
            fflush(stdin);
            scanf("%c",&opc);
        for(i=0;i<100;i++){
            printf("-");
        }
    }while(opc=='s' || opc=='S');
    return 0;
}

int Euclides(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return Euclides(b,a%b);
    }
}
