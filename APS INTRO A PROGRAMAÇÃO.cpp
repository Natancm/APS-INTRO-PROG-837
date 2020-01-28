#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*	Os três jurados de um concurso de fantasias avaliam 2 critérios distintos:
originalidade e beleza. A nota final do candidato é calculada do seguinte modo:
nota_final = (0.6 * nota_da_originalidade) + (0.4 * nota_da_beleza)
Para evitar distorções, são desprezadas a maior e a menor nota de cada critério.
Faça um programa, que leia, para cada candidato, o seu número de inscrição
(inteiro) e suas 3 notas (reais) de cada critério, exibindo sua nota final. Ao
término do programa, também deve ser exibido o número de inscrição do
candidato vencedor. A entrada de dados é finalizada pela digitação do valor 0
(zero) como número do candidato.

O seu programa deve, obrigatoriamente, utilizar uma função chamada
nota_valida, implementada por você, que receba as 3 notas de um critério e
retorne apenas a nota válida. Para facilitar, considere que as 3 notas de cada
critério serão sempre diferentes entre si. */


float nota_da_beleza, nota_da_originalidade, nota_final, n1, n2, n3;
 	///Função nota válida///
float nota_valida(float a, float b, float c){
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
	setlocale (LC_ALL, "")
	float nota_final, no1, no2, no3, nb1, nb2, nb3;
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
            
            printf("\nInforme seu número de inscrição ou Informe 0(zero) para finalizar: ");
            scanf("%d", &inscricao);
        
		}
    
	}
    
    //////////*INSCRIÇÃO E NOTA FINAL DO VENCEDOR*//////////
    printf("\nO vencedor foi o candidato de inscrição %d com nota: %.2f", vencedor, maior_nota);
    return 0;
}
