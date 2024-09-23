
#include <stdio.h>
int main(){
    float n1, n2, n3, n4, div;
    
    printf("Digite Sua Primeira Nota: ");
    scanf("%f", &n1);
    
    printf("Digite Sua Segunda Nota: ");
    scanf("%f", &n2);
    
    printf("Digite Sua Terceira Nota: ");
    scanf("%f", &n3);
    
    printf("Digite Sua Quarta Nota: ");
    scanf("%f", &n4);
    
    div = (n1 + n2 + n3 + n4) / 4; 
    
    //printf("%f", div)
    
    if (div >= 7){
        printf("Aluno Aprovado!");
    }
    else{
        printf("Aluno Reprovado! \n");
        
        printf("Estude mais! \n");
    }
}

