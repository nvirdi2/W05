//==============================================
// Name:           Navdeep virdi
// Student Number: 166485193
// Email:          nvirdi2@myseneca.ca
// Section:        NAA
// Workshop:       5 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define SIZE 2		

// Declare Struct Employee 
struct Employee
{
    int ID;
    int age;
    double salary;
};

/* main program */
int main(void) 
{
	int option = 0;    //interger option

	// Declare a struct Employee array "emp" with SIZE elements 
    int Emp = 0;       
	// and initialize all elements to zero
    struct Employee emp[SIZE] = { { 0 } };    //Array for emplyee
    
	printf("---=== EMPLOYEE DATA ===---\n\n");   //output employee data

	do 
	{
		// Print the option list
		printf("1. Display Employee Information\n");   //output option 1
		printf("2. Add Employee\n");           //output option 2
		printf("0. Exit\n\n");    //output option 3
		printf("Please select from the above options: ");       //output to take input from user 
		
		// Capture input to option variable
		scanf("%d",&option);    //scanner to take input about the users option choice
		printf("\n");   //empty line
		
		switch (option) 
		{
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");      //array output 
			printf("======  ======= ==========\n");       //array output

			int i = 0;
			for (i = 0; i < SIZE; i++)    //for loop starting 
			{
				if (emp[i].ID > 0)
				{
					printf("%6d%9d%11.2lf\n", emp[i].ID, emp[i].age, emp[i].salary);    //array output numbers
				}
			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0
			}
				printf("\n");
			break;

		case 2:	// Adding Employee
				// @IN-LAB
				
			printf("Adding Employee\n");  //output option 2
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly. 
			if (Emp >= SIZE)     // enter up to 2 inputs
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}
			else
			{
				printf("Enter Employee ID: ");        //output option 2 QUESTION 1
				scanf("%d", &emp[Emp].ID);
				printf("Enter Employee Age: ");       //output option 2 QUESTION 2
				scanf("%d", &emp[Emp].age);
				printf("Enter Employee Salary: ");      //output option 2 QUESTION 3
				scanf("%lf", &emp[Emp].salary);
				printf("\n");

				Emp++;
			}
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");  //more than 2 times, give the user a error message 
		}

	} while (option != 0);

	return 0; 
}



//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!
*/
