#include <stdio.h>
#include <stdlib.h>


int main()

{
	
	//variáveis para armazenar os dados dos apostadores
    char apostador[5][10];
    
    
    //Variáveis para armazenar os placares e resultado do jogo
    int placarTime1, placarTime2, resultado;
    
    //variáveis para armazenar os palpites dos apostadores
    int palpite1, palpite2, pontos[5];
    
    printf("\n\n############################# BOLÃO DO MARIO PAULO ############################\n\n");
    
    printf("PLACAR DO JOGO ==> \n");
    scanf("%d", &placarTime1);
    scanf("%d", &placarTime2);
    
    resultado = placarTime1 - placarTime2;
    
    for(int i= 0; i < 5; i++){
		printf("Nome do apostador ==> ");
		scanf("%s", apostador[i]);
		
		printf("APOSTA PARA O TIME 1: ");
		scanf("%d", &palpite1);
		printf("APOSTA PARA O TIME 2: ");
		scanf("%d", &palpite2);
		
		pontos [i] = 0;
		

		
		//Aplicando a lógica para verificação de 0 pontos			
		
		if (resultado < 0 && palpite1 - palpite2 > 0 && placarTime1 != palpite1 && placarTime2 != palpite2)
			pontos[i] += 0;
			
		else if (resultado > 0 && palpite1 - palpite2 < 0 && placarTime1 != palpite1 && placarTime2 != palpite2)
			pontos[i] += 0;
			
		//Aplicando a lógica para verificar se o apostador acertou o número de gols de cada placar
		if (palpite1 == placarTime1 || palpite2 == placarTime2)
			pontos[i] += 5;

		
		//lógica para aplicar a pontuação 10
		if (resultado > 0 && palpite1 > palpite2 && palpite1 != placarTime1)
			pontos[i] += 10;
		
		
		else if (resultado < 0 && palpite1 < palpite2 && palpite2 != placarTime2)
			pontos[i] += 10;
		
		
		//calculando a pontuação de 15
		
		if (resultado > 0 && palpite1 > palpite2 && palpite1 == placarTime1 && palpite2 != placarTime2)
			pontos[i] += 10;
		
		else if (resultado < 0 && palpite1 < palpite2 && palpite2 == placarTime2 && palpite1 != placarTime1)
			pontos[i] += 10;
			
		//calculando a pontuação 20
		
		if (resultado > 0 && palpite1 > palpite2 && palpite1 == placarTime1 && palpite2 == placarTime2)
			pontos[i] += 15;
			
		else if(resultado < 0 && palpite1 < palpite2 && palpite2 == placarTime2 && palpite1 == placarTime1)
			pontos[i] += 15;
		
		}		
		printf("\n\n#############################PONTUAÇÃO FINAL#####################\n\n");
		
		for (int i = 0; i < 5; i++)
		{
			printf("APOSTADOR: %s\n", apostador[i]);
			printf("PONTOS: %d\n", pontos[i]);
		}
    return 0;

}
