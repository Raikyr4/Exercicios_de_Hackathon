#include <stdio.h>
#include <string.h>

int main ()
{

	unsigned short numDias, i;
	int saldoInicial, menorSaldo, movimentacao;
	int saldoAtual = 0;

	scanf("%hu %d", &numDias, &saldoInicial);

	menorSaldo = saldoInicial;
	for (i = 0; i < numDias; i++)
	{

		scanf("%d", &movimentacao);
		saldoInicial += movimentacao;

		if (saldoInicial < menorSaldo)
			menorSaldo = saldoInicial;

	}

	printf("%d\n", menorSaldo);

}