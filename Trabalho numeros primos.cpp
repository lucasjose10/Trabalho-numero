#include <stdio.h>
#include <stdlib.h>

int main()
{



  int i;
  int x;
  int y = 0;
  int sair = 0;


  printf("\n\nola meu nome eh lucas jose e vou calcular numeros primos\n\n");
  do
{
	y=0;
	do
   	{


  printf("entre com um numero positivo:\n\n");
  scanf("%d", &x);
	}  while(x<=0);


  for (i = 1; i <= x; i++)
   {
    if (x % i == 0)

	 {
      y++;
     }

  	}

  if (y == 2)
  {
    printf("\nEh primo\n", y);
  }
  else
   {
    printf("\nNao eh primo\n", y);
    }

	printf("\n\n----------------\n");

   printf("\ndeseja continuar\n1:sim\n2:nao\n");

  scanf("%d", &sair);

}

    while(sair==1);


    if(sair>=2)
  {


     printf("Obrigado, ate a proxima! Para ver o meu codigo entre no link\n\n");
  }


	system("pause");
	return 0;

}
