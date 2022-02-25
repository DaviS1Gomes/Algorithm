#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char game, restart;
		printf("Start the Game? (Y/N)\n");
			scanf("%c", &game);
	
		if(game == 'Y' || game == 'y')
		{
			do
			{
				system("cls");
				int options;
					printf("Please! Choose the options: \n");
					printf("1. Addition \n");
					printf("2. Subtraction \n");
					printf("3. Multiplication \n");
					printf("4. Division \n");
                    printf("5. Game Over.\n");
						scanf("%d", &options);
				do
				{
					switch(options)
					{
						case 1:
							system("cls");
							int A, B;
								printf("Please Type two numbers: \n");
									scanf("%d %d", &A, &B);
								printf("Result is %d\n", A + B);
								system("pause");
						break;

						case 2:
								system("cls");
								printf("Please Type two numbers: \n");
									scanf("%d %d", &A, &B);
								printf("Result is %d\n", A - B);
								system("pause");
						break;

						case 3:
								system("cls");
								printf("Please Type two numbers: \n");
									scanf("%d %d", &A, &B);
								printf("Result is %d\n", A * B);
								system("pause");
						break;

						case 4:
								system("cls");
								printf("Please Type two numbers: \n");
									scanf("%d %d", &A, &B);
								printf("Result is %d\n", A / B);
								system("pause");
						break;

							case 5:
								system("exit");
							break;

					}
				}while(options == '1' || options == '2' || options == '3' || options == '4' || options == '5');
			}while(game == 'y' || game == 'Y');
		
		}

		else if (game == 'N' || game == 'n')
		{
			printf("Thanks for your time!");
		}
		else
		{
			printf("Wrong options! Thanks for your time!");
		}

}