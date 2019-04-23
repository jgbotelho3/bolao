# bolao
Segundo suas regras, os apostadores informam o placar do jogo e ganham 10 pontos se 
acertarem o vencedor ou se acertarem que foi empate, e ganham mais 5 pontos para o placar de cada time que acertarem. 
Aqui um exemplo imaginando que o jogo foi 3x2

Placar apostado    Pontos        Razão

      0x1             0           Não acertou o vencedor e nem o número de gols dos times. 

      0x2             5           Não acertou o vencedor, mas acertou o número de gols do segundo time. 
      
      3x5             5           Não acertou o vencedor, mas acertou o número de gols do primeiro time.
      
      1x0             10          Acertou o vencedor, mas não acertou o número de gols dos times. 
      
      3x1             15          Acertou o vencedor e o número de gols do primeiro time.
      
      3x2             20          Acertou o vencedor e o número de gols de ambos os times. 
      
      
      Escreva um programa que requisita do usuário o placar apostado e depois o placar do jogo e
informa quantos pontos o apostador fez. 
