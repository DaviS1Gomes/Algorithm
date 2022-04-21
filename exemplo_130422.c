#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int V[7]={11, 7, 3, 5, 17, 23, 19};
	int x, k;
	int i=0;
	for(x=0; x<7; x++)
		printf("%d ", V[x]);
	getchar();
	while (i<6)
		{
			if (V[i] > V[i+1]) 
			  {
			    x = V[i+1];
			    V[i+1] = V[i];
				V[i] = x;
			  
			    for( k=0; k<7; k++)
			    printf("%d ", V[k]);
			  } 
			printf("Valor atual da vari�vel i:  %d", i);     
			getchar(); 
			i=i+1;  	
		}
	return 0;
}
