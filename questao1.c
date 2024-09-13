#include<stdio.h>
#include<math.h>

int eFibonacci(int num)  //Função que verifica se o número faz parte da lista de Fibonacci.
{
	int a1 = 0;
	int a2 = 1;
	int a3 = 0;

	while(a3 < num)  //Irá fazer a sequência de Fibonacci até encontrar ou passar o número.
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;

		if(a3 == num)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int num = 0;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(eFibonacci(num) == 1)
	{
		printf("\n\nO numero faz parte da sequencia de Fibonacci!\n");
	}
	else
	{
		printf("\n\nO numero nao faz parte da sequencia de Fibonacci!\n");
	}
}