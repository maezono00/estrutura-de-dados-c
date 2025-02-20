/*
Pilhas

Uma Pilha é um tipo especial da Lista Linear em que as inserções e remoções serão realizadas numa única extremidade chamado topo.
Cada vez que um novo elemento for inserido na Pilha, será no topo, e toda vez que ocorre uma Remoção no topo.
Portanto Pilha é conhecida como sendo last-in / first-out - LIFO.
As Pilhas são empregadas em recursos de memória em aplicações matemática, compiladores, funções ou subprogramas utilizando-se da natureza das próprias memórias.
Quanto a disciplina de Pilha permite poucas operações, como veremos:

TOP: CONSULTA O TOPO.
PUSH: INSERE ELEMENTO NA PILHA.
POP: REMOVE ELEMENTO DA PILHA.

1. INSERIR DADO NA PILHA
	EX: PILHA[] //ELA ESTÁ VAZIA NO MOMENTO
	
2. PUSH PILHA[10] <- TOPO

3. PUSH [5] <- TOPO
		[10]

4. PUSH [7] <- TOPO
		[5]
		[10]
		
5. POP [7]X <- TOPO
	   [5]
	   [10]
	   
O PONTEIRO TOPO EM PILHAS SERIA CORRESPONTE AO PONTEIRO INÍCIO NA LISTA DUPLAMENTE ENCADEADA!

É IMPORTANTE TER COMO BASE O MODELO DA LISTA ENCADEADA / DUPLAMENTE ENCADEADA.

IMPORTANTE INICIAR O PONTEIRO TOPO COMO NULL E UM IF, CASO SIM, É POSSÍVEL FAZER A INSERÇÃO DE DADOS NA MEMÓRIA!

*/