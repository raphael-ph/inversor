/* Data de submissao: 07.05.2020
 * Nome: RAPHAEL CARVALHO DA SILVA E SILVA
 * RA: 205125
 */

#include <stdio.h>
const int tam_buffer = 100;

int main()
{
    char buffer[tam_buffer];
	char aux_buffer[tam_buffer];
	int i, j, x;
	j = 0, i = 0, x = 0;
    fgets(buffer, tam_buffer, stdin);
	while(buffer[i] != '\n')
	{
		if(buffer[i] == ' ')
		{
			x = i;
			for(i = x-1, x; j < x; i--, j++)
			{
				aux_buffer[j] = buffer[i];
			}
			aux_buffer[x] = buffer[x]; //acrescentar o espaco na nova string invertida
			i = x;
			j = x + 1;
		}
		i++;
	}
	if(buffer[i] == '\n')
		{
			x = i;
			for(i = x-1, x; j < x; i--, j++)
			{
				aux_buffer[j] = buffer[i];
			}
		}
	aux_buffer[x] = '\n';
	for(i = 0; aux_buffer[i] != '\n'; i++) // colocar a string invertida na variavel original
	{
		buffer[i] = aux_buffer[i];
	}
    printf("%s", buffer);
    return 0;
}
