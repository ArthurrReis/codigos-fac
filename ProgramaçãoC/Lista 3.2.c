#include <stdio.h>

int main()
{
	int base, altura, raio;
	float resultado;
	const float PI=3.14159;
	char letra;

	printf("Escolha a forma geometrica: \n(c)irculo\n(r)etangulo\n(q)uadrado\n(t)riangulo\n");
	scanf(" %c", &letra);

	switch (letra) {
	case 'c':
		printf("Digite o raio do circulo:");
		scanf("%d", &raio);
		resultado = PI *(raio*raio);
		printf("Sua area e de %.2f", resultado);
		break;
	case 'r':
		printf("Digite a base e a altura do seu retangulo:");
		printf("Base: ");
		scanf("%d", &base);
		printf("Altura: ");
		scanf("%d", &altura);
		resultado = base*altura;
		printf("%f", resultado);
		break;
	case 'q':
		printf("Digite a medida do lado do quadrado: ");
		scanf("%d", &base);
		resultado = base*base;
		printf("%f", resultado);
		break;
	case 't':
		printf("Digite a base e a altura do seu triangulo:");
		printf("Base: ");
		scanf("%d", &base);
		printf("Altura: ");
		scanf("%d", &altura);
		resultado = (base*altura)/2;
		printf("%f", resultado);
		break;
	default:
		printf("forma nao reconhecida\n");
	}
	return 0;
}

