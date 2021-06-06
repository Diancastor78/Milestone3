/********************************************************************************************************
*Milestone 3.Application Release 2
*In this assignment I am able to use a modular code by using user functions
*also, I used arrays or pointers.
*User define functions are defined and declared by a programmer to perform a specific task.
*It allow us to re-use the code. (King,2001)
**********************************************************************************************************/
/*
*  Student: Diana Bailey
*  Instructor: Mr.Jeremy Wright
*  ITT 310 Programming for security professionals
***********************************************************************************************************/

//including needed libraries
#include <stdio.h> //This is a header that defines functions and macros. 
#include <stdlib.h> //This is a header with the exit function

//declaring global variables
int globalContinue = 1;

/***********************************************************************************************************
* introPrinter() function
* Prints out student and instructor names as well as course information
***********************************************************************************************************/
void introPrinter()
{
	//I used void here as a function, and the function does not return value.//
	//  In this case I wanted to print all the information, I did not use the "return;" statement to stop
	//the function execution.
	printf("Student: Diana Bailey\n"); //print my name//
	printf("Instructor: Mr. Jeremy Wright\n"); //print my instructor's name//
	printf("Project of ITT 310 Programming for security professional\n");//print the course's name//
	printf("Grand Canyon University\n");//print college's name//
	printf("\n");
	printf("\n");
}

/***********************************************************************************************************
* getUserNameAndPassword() function
* Implementing put in comment
***********************************************************************************************************/
void getUserNameAndPassword()
{// get username and password from user
	char Password[30];
	char Username[30];
	// create get functions//
	printf("Enter Username :");
	fgets(Username, 30, stdin);
	printf("%s", Username);
	printf("\n");
	printf("Enter Password? :");
	fgets(Password, 30, stdin);
	printf("%s", Password);
	printf("\n");
}

/***********************************************************************************************************
* Implementing
***********************************************************************************************************/
void noteFromDianaBy()
{//function calling

	printf("\nFinally, I have created my own code thanks to my instructor who challenged me to do it!!!\n "); //function definition
}
//declaring global variables
int a; int b; int c;  int(add_values);

void playingtoadd()
{
	int slot_datavalue[10][10]; //Modular programming is when we divide or break a problem, a situation, a number into small parts//

	printf("\nInsert the number of rows/columns you want to add :\n");//Here the main program is divided in sub programs with an independent code that is combined in a single unit.//
	scanf_s("%d", &c);
	printf("Insert the numbers that you want to add in the row\n");
	if (c > 0)
	{
		for (a = 0; a < c; a++) {
			printf("\nRow %d Insert the slot value\n", a);
			for (b = 0; b < c; b++) {
				scanf_s("%d", &slot_datavalue[a][b]);
			}
		}
		printf("\nResult:\n");
		for (a = 0; a < c; a++) {
			add_values = 0;
			for (b = 0; b < c; b++) {
				add_values += slot_datavalue[b][a];
			}
			slot_datavalue[c][a] = add_values;
		}
		for (a = 0; a < c; a++) {
			add_values = 0;
			for (b = 0; b < c; b++) {
				add_values += slot_datavalue[a][b];
			}
			slot_datavalue[a][c] = add_values;
		}
		add_values = 0;
		for (a = 0; a < c; a++) {
			add_values += slot_datavalue[c][a];
		}
		slot_datavalue[c][c] = add_values;

		for (a = 0; a < c + 1; a++) {
			for (b = 0; b < c + 1; b++) {
				printf("%6d", slot_datavalue[a][b]);
			}
			printf("\n");
		}
	}
}

/***********************************************************************************************************
* exitFunction() method
* Method that is being utilized to close the program
***********************************************************************************************************/
void exitFunction()
{
	//declare local variables
	int yesNo;

	printf("\nGood job! Would you like to use another trainer?\n 1 for yes and 2 for no\n");
	scanf_s("%d", &yesNo);

	if (yesNo == 1)
	{
		globalContinue = 1; //For the user to use another math trainer
	}
	else
	{
		printf("\nExiting...\n");
		globalContinue = 3; //exiting while loop in main
		exit(0);
	}

}

/***********************************************************************************************************
* additionTrainer() function
* This function is one of the four math trainer functions. It is in simple stages currently and maybe be
* expanded upon to be more dynamic for the userings continued learning.
***********************************************************************************************************/
void additionTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n12 + 14 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (12 + 14)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct 
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n25 + 22 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (25 + 22)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n95 + 30 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (95 + 30)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n36 + 52 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (36 + 52)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}
	exitFunction(); //calling exit function to close the project
}

/***********************************************************************************************************
* Implementing
***********************************************************************************************************/
void subtractionTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n19 - 7 = ?\n"); //first problem
		scanf_s("%d", &guess);

		if (guess == (19 - 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n15 - 12 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (15 - 12)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n650- 325 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (650 - 325)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n98 - 36 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (98 - 36)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}
	exitFunction(); //calling exit function to close the project

}

/***********************************************************************************************************
* Implementing
***********************************************************************************************************/
void multiplicationTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	printf("\nTest %d\n", correct);
	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n95 X 7 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (95 * 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
		printf("\nTest %d\n", correct);
		printf("\n75 X 8 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (75 * 8)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
		printf("\nTest %d\n", correct);
		printf("\n15 X 7 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (15 * 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
		printf("\nTest %d\n", correct);
		printf("\n12 * 36 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (12 * 36)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}
	exitFunction(); //calling exit function to close the project

}

/***********************************************************************************************************
* Implementing
***********************************************************************************************************/
void divisionTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n63 ÷ 7 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (63 / 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n24 ÷ 2 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (24 / 2)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n49 ÷ 7 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (49 / 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n36 ÷ 6 = ?\n"); //problem for user to solve
		scanf_s("%d", &guess);

		if (guess == (36 / 6)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}

	exitFunction(); //calling exit function to close the project
}

/***********************************************************************************************************
*Implementing
***********************************************************************************************************/
void mathTrainer()
{
	//declare local variables
	int yesNo;
	int whatCase = 0;

	printf("\n");
	printf("\nWelcome to Math Trainer!\n");
	printf("\n");
	printf("\n");
	printf("Are you having difficulty with Addition? \nEnter 1 for yes and 2 for no\n");
	scanf_s("%d", &yesNo);

	if (yesNo == 1)
	{
		printf("Loading Addition trainer\n");
		whatCase = 1;
		yesNo = 0;
	}
	else
	{
		printf("You have entered no\n"); //setting math type
		yesNo = 0;

		printf("Are you having difficutlty with subtraction? \nEnter 1 for yes and 2 for no\n");
		scanf_s("%d", &yesNo);

		if (yesNo == 1)
		{
			printf("Loading Subtraction trainer\n");
			whatCase = 2;
			yesNo = 0;
		}
		else
		{
			printf("You have entered no\n"); // math type
			yesNo = 0;

			printf("Are you having difficutlty with Multiplication? \nEnter 1 for yes and 2 for no\n");
			scanf_s("%d", &yesNo);

			if (yesNo == 1)
			{
				printf("Loading Multiplication trainer\n");
				whatCase = 3;
				yesNo = 0;
			}
			else
			{
				printf("You have entered no\n"); //setting math type
				yesNo = 0;

				printf("Are you having difficutlty with Division? \nEnter 1 for yes and 2 for no\n");
				scanf_s("%d", &yesNo);

				if (yesNo == 1)
				{
					printf("Loading Division trainer\n");
					whatCase = 4;
					yesNo = 0;
				}
				else
				{
					printf("You have entered no\n"); // setting math type
					yesNo = 0;
				}
			}
		}
	}

	switch (whatCase)
	{
	case 0:
		printf("\nYou didn't select any math training and exiting...");
		exitFunction();
		break;
	case 1:
		additionTrainer();
		break;
	case 2:
		subtractionTrainer();
		break;
	case 3:
		multiplicationTrainer();
		break;
	case 4:
		divisionTrainer();
		break;
	}

}

/***********************************************************************************************************
* implementing
***********************************************************************************************************/
void checkToContinue()
{
	if (globalContinue == 1)
	{
		mathTrainer();
		globalContinue = 1;
	}
	else
	{
		globalContinue = 3;
	}
}

/***********************************************************************************************************
* Implementing
***********************************************************************************************************/
int main()
{
	introPrinter();
	getUserNameAndPassword();
	noteFromDianaBy();
	playingtoadd();

	while (globalContinue != 3)
	{
		checkToContinue();
	}
	return 0;
}