#include <stdio.h>
int main()
{


	float base, altura, area, opc, exit;



	printf("Hoje vamos calcular area do triangulo retangulo\n\n");

		do
	{

	printf("o que deseja descobrir do triangulo retangulo\n");

	printf(" 1:area\n 2:altura \n 3:base\n");

	scanf("%f", &opc);

	if (opc==1)

	{

	printf("digite a base do triangulo retangulo:");

	scanf("%f", &base);

	printf("digite a altura do triangulo retangulo:");

	scanf("%f", &altura);

	area = (base * altura) / 2 ;

	printf("a area do triangulo retangulo eh %f\n", area);


}

	if(opc==2)

	{

		printf("digite a base do triangulo retangulo:");

		scanf("%f", &base);

		printf("digite a area do triangulo retangulo:");

		scanf("%f", &area);


		printf(" a altura do triangulo retangulo e %f\n", (2*area) / base)  ;

	}

	if(opc==3)
	{


		printf("digite a altura do triangulo retangulo:");

		scanf("%f", &altura);

		printf("digite a area do triangulo retangulo:");

		scanf("%f", &area);


		printf(" a base do triangulo retangulo e %f\n", (2*area) / altura);

	}






	printf("deseja repetir a operacao\n 1:sim\n 2:nao\n");

	scanf("%f", & exit);






   } while (exit==1);

	if (exit>=2)

	printf("obrigado ate a proxima\n");





	return 0;



}
