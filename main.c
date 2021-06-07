#include <stdio.h>
#include <stdlib.h>

int main()
{
double n1;
double n2;
double n3;
double media;
double mediaparcial;

    printf("FACULDADE METROPOLITANAS UNIDAS");
    printf(" \n");
    printf(" \n");
    printf("APS - LOGICA DE PROGRAMACAO - 1º SEMESTRE");
    printf(" \n");
    printf(" \n");
    printf("Desenvolvedor: Marcus Neves\n");
    printf("RA: 6932681\n");
    printf("Contato: marcus-neves@outlook.com\n");
    printf(" \n");
    printf("*******************\n");
    printf("*fmu-calcula-notas*\n");
    printf("*******************\n");
    printf("\nDIGITE A NOTA (N1):");
    scanf("%lf", &n1);
    printf("\nDIGITE A NOTA (N2):");
    scanf("%lf", &n2);
    printf("\nDIGITE A NOTA (N3):");
    scanf("%lf", &n3);
    mediaparcial = n1 + n2 + n3;
    media = mediaparcial / 3;
    
    if(media < 3){
        printf("\nSUA MÉDIA É: %f", media);
        printf("\nRESULTADO: REPROVADO, A MÉDIA PARA SER APROVADO É 6,0\n");
        printf("\n------------------------------------------------------\n");
    }
    if(media > 3){
        printf("\nSUA MÉDIA É: %f", media);
        printf("\nRESULTADO: EXAME, VOCÊ REALIZARÁ UM EXAME E PRECISA TIRAR 6,0 PARA SER APROVADO.\n");
        printf("\n------------------------------------------------------\n");
    }
    if(media > 6){
        printf("\nSUA MÉDIA É: %f", media);
        printf("\nRESULTADO: APROVADO, PARABÉNS.\n");
        printf("\n------------------------------------------------------\n");
    }

}