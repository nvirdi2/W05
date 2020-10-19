//==============================================
// Name:           Navdeep virdi
// Student Number: 166485193
// Email:          nvirdi2@myseneca.ca
// Section:        NAA
// Workshop:       5 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 4
#define SIZE 4		

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
	int option = 0;
	int i = 0;
	int findUserID = -1; 
	int Search = -1;
	// Declare a struct Employee array "emp" with SIZE elements 
    int Emp = 0;   

	// and initialize all elements to zero
    struct Employee emp[SIZE] = { { 0 } };    //Array for employee
    
	printf("---=== EMPLOYEE DATA ===---\n\n");   //output employee data

	do 
	{
		// Print the option list
		printf("1. Display Employee Information\n");   //output option 1
		printf("2. Add Employee\n");           //output option 2
		printf("3. Update Employee Salary\n");         //output option 3
		printf("4. Remove Employee\n");            //output option 4
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
				
			printf("EMP ID  EMP AGE EMP SALARY\n");      //array output 
			printf("======  ======= ==========\n");       //array output

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
				i = 0;
				printf("\n");
			break;

		case 2:	// Adding Employee
				// 
				
			printf("Adding Employee\n");  //output option 2
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly. 
			if (Emp < SIZE)     // enter up to 2 inputs
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
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			} 
			break;

		case 3: // Update Employee Salary
				//@AT-HOME
			printf("Update Employee Salary\n");
			printf("======================\n");

			do
			{
			printf("Enter Employee ID: ");
            scanf("%d", &findUserID);
			
				for (i = 0; i < Emp; i++)
						{
							if (findUserID == emp[i].ID) 
							{
								Search = i;
								i = SIZE;
								printf("The current salary is %.2f\n", emp[Search].salary);
								printf("Enter Employee New Salary: ");
								scanf("%lf", &emp[Search].salary);
								printf("\n");
							}
							else if (i == SIZE - 1 )
							{
							printf ("*** ERROR: Employee ID not found! ***\n");
							}
						}
			} while (Search < 0);

			Search = -1;

			break;

		case 4:
			printf("Remove Employee\n");
			printf("===============\n");
			
			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &findUserID);

				
				for (i = 0; i < SIZE; i++)		
				{

					if (findUserID == emp[i].ID)
					{
						Search = i;
						emp[i].ID = 0;	
						i = Emp;		
						printf("Employee %d will be removed\n", findUserID);
						printf("\n");

					}

					else if (i == Emp - 1)
					{
						printf("*** ERROR: Employee ID not found! ***\n");
					}
				}

			} while (Search < 0);

			Emp--;		// this will earse the data for the removed value
			Emp--;
			Emp--;

			Search--;

			break;


		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");  //more than 2 times, give the user a error message 
		}

	} while (option != 0);

	return 0; 
}



// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 222
Enter Employee Age: 22
Enter Employee Salary: 22222.22

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 333
Enter Employee Age: 33
Enter Employee Salary: 33333.33

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 444
Enter Employee Age: 44
Enter Employee Salary: 44444.44

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 555
Enter Employee Age: 55
Enter Employee Salary: 55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached
1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   33333.33
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 123
*** ERROR: Employee ID not found! ***
Enter Employee ID: 321
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
The current salary is 33333.33
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   99999.99
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 789
*** ERROR: Employee ID not found! ***
Enter Employee ID: 987
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
Employee 333 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 666
Enter Employee Age: 66
Enter Employee Salary: 66666.66

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
666       66   66666.66
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!
*/
