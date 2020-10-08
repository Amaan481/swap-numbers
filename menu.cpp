#include<stdio.h>
main()
{
	printf("Enter a number : \n1.\n2.\3.\4.\5");
	int number =0;
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("Pizza,Rs239.");
			break;
		case 2:
		    printf("burger,Rs129");
		    break;
		case 3:
		    printf("Pasta,Rs179");
		    break;
		case 4:
		    printf("french fries,Rs99");
		    break;
		case 5:
		    printf("Sandwich,149");
		    break;
		default : printf("Invalid choice");	
	}
	return 0;
}
