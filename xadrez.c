#include <stdio.h>

void MoverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        MoverTorre(casas - 1);
    }
}
void MoverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        MoverRainha(casas - 1);
    } 
}
int vertical, horizontal;
void MoverBispo(int casas){
    if (casas > 0)
    {
        for ( vertical = 0; vertical < 5; vertical++)
        {
            printf("Cima, ");
            
            for (horizontal = 0; horizontal < 1; horizontal++)
            {
                printf("Direita\n");
                
            }
            
        }
        
    }
}
int main() {
    int c;

    printf("Torre Move:\n");
    MoverTorre(5);
    printf("Rainha Move:\n");
    MoverRainha(7);
    printf("Bispo Move:\n");
    MoverBispo(5);
    printf("Cavalo move:\n");
    while (c < 1)
    {
        for (c = 0; c < 2 ; c++)
        {
        printf("Cima\n");
        }
        printf("Direita\n");
           
    }
   
}