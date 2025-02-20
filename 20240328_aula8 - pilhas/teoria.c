/*
Pilhas

Uma Pilha � um tipo especial da Lista Linear em que as inser��es e remo��es ser�o realizadas numa �nica extremidade chamado topo.
Cada vez que um novo elemento for inserido na Pilha, ser� no topo, e toda vez que ocorre uma Remo��o no topo.
Portanto Pilha � conhecida como sendo last-in / first-out - LIFO.
As Pilhas s�o empregadas em recursos de mem�ria em aplica��es matem�tica, compiladores, fun��es ou subprogramas utilizando-se da natureza das pr�prias mem�rias.
Quanto a disciplina de Pilha permite poucas opera��es, como veremos:

TOP: CONSULTA O TOPO.
PUSH: INSERE ELEMENTO NA PILHA.
POP: REMOVE ELEMENTO DA PILHA.

1. INSERIR DADO NA PILHA
	EX: PILHA[] //ELA EST� VAZIA NO MOMENTO
	
2. PUSH PILHA[10] <- TOPO

3. PUSH [5] <- TOPO
		[10]

4. PUSH [7] <- TOPO
		[5]
		[10]
		
5. POP [7]X <- TOPO
	   [5]
	   [10]
	   
O PONTEIRO TOPO EM PILHAS SERIA CORRESPONTE AO PONTEIRO IN�CIO NA LISTA DUPLAMENTE ENCADEADA!

� IMPORTANTE TER COMO BASE O MODELO DA LISTA ENCADEADA / DUPLAMENTE ENCADEADA.

IMPORTANTE INICIAR O PONTEIRO TOPO COMO NULL E UM IF, CASO SIM, � POSS�VEL FAZER A INSER��O DE DADOS NA MEM�RIA!

*/