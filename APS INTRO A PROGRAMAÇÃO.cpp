#include <stdio.h>
#include <stdlib.h>

/*	Os tr�s jurados de um concurso de fantasias avaliam 2 crit�rios distintos:
originalidade e beleza. A nota final do candidato � calculada do seguinte modo:
nota_final = (0.6 * nota_da_originalidade) + (0.4 * nota_da_beleza)
Para evitar distor��es, s�o desprezadas a maior e a menor nota de cada crit�rio.
Fa�a um programa, que leia, para cada candidato, o seu n�mero de inscri��o
(inteiro) e suas 3 notas (reais) de cada crit�rio, exibindo sua nota final. Ao
t�rmino do programa, tamb�m deve ser exibido o n�mero de inscri��o do
candidato vencedor. A entrada de dados � finalizada pela digita��o do valor 0
(zero) como n�mero do candidato.

O seu programa deve, obrigatoriamente, utilizar uma fun��o chamada
nota_valida, implementada por voc�, que receba as 3 notas de um crit�rio e
retorne apenas a nota v�lida. Para facilitar, considere que as 3 notas de cada
crit�rio ser�o sempre diferentes entre si. */


float nota_da_beleza, nota_da_originalidade, nota_final, n1, n2, n3;
 	///Fun��o nota v�lida///
int nota_valida(float a, float b, float c){
    if ((a>b && a<c) || (a<b && a>c)){
        return a;
    }
    else
    if ((b>a && b<c) || (b<a && b>c)){
        return b;
    }
    else
    if ((c>a && c<b) || (c<a && c>b)){
        return c;
    }
} 
int main(){
	float nota_da_beleza, nota_da_originalidade, nota_final, no1, no2, no3, nb1, nb2, nb3;
    int inscricao, vencedor;
    float maior_nota=0;
    printf("Informe seu numero de inscricao: ");
    scanf("%d", &inscricao);
    
    while(inscricao !=0){
    	
        if(inscricao !=0){
        	//////////*NOTA DA ORIGINALIDADE*//////////
        	
            printf("\n(Jurado 1) nota da originalidade: ");
            scanf("%f", &no1);
            
            printf("\n(Jurado 2) nota da originalidade: ");
            scanf("%f", &no2);
            
            printf("\n(Jurado 3) nota da originalidade: ");
            scanf("%f", &no3);
            
            nota_da_originalidade = nota_valida(no1, no2, no3);
            //////////*NOTA DA BELEZA*//////////
            
            printf("\n(Jurado 1) nota da beleza: ");
            scanf("%f", &nb1);
            
            printf("\n(Jurado 2) nota da beleza: ");
            scanf("%f", &nb2);
            
            printf("\n(Jurado 3) nota da beleza: ");
            scanf("%f", &nb3);
            
            nota_da_beleza = nota_valida(nb1, nb2, nb3);     
            //////////*NOTA FINAL*//////////
            
            nota_final = (0.6 *nota_da_originalidade) + (0.4 *nota_da_beleza);
            printf("\n%.2f\n", nota_final);
            if (nota_final>maior_nota){
                maior_nota=nota_final;
                vencedor=inscricao;
            }
            
            printf("\nInforme seu numero de inscricao ou Informe 0(zero) para finalizar: ");
            scanf("%d", &inscricao);
        
		}
    
	}
    
    //////////*INSCRI��O E NOTA FINAL DO VENCEDOR*//////////
    printf("\nO vencedor foi o candidato de inscricao %d com nota: %3.2f", vencedor, maior_nota);
    return 0;
}
