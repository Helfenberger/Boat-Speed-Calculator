/*********************************************************************************************
 *   Program Name:     BOAT SPEED CALCULATOR        Author(s): ANDREW HELFENBERGER
 *   ENGR 200.02                                    Assignment: # 1
 *   Date 9-9-2015
 *
 *********************************************************************************************
 *
 *   Variables   | Functions                        
 *   --------------------------------------------------------------------------
 *      t        | Motor RPM                            
 *      d        | Boat speed (knots)                      
 *********************************************************************************************/


 /* Header Files */
#include <stdio.h> /*This is needed for the printf function*/

 /*Start of main function*/
 int main(void)
 {
    /* declarations: */
	double d, t;
    char g;

	/*Print the title of the program*/
	printf("          BOAT SPEED CALCULATOR\n");
	printf("______________________________________________________________________\n");
	printf("                             \n");


	/*Get the needed input*/

	/*get the motor RPM from the user*/
	printf("Enter the motor RPM: ");
	scanf("%lf", &t);
	printf("______________________________________________________________________\n");

	/*Statements that perform the desired task*/
    d = 2.261*1e-6*t*t-7.027*1e-5*t+4.832;

    /*Printing of the results*/
	printf("                             \n");
	printf("                             \n");
    printf("                    RESULTS\n");

	/*print the values*/
    
    printf("          B0AT SPEED (KNOTS):    %6.1f\n", d);    

   
	/*Keeps the window open.  Please do not alter this.*/
	printf("\n\nEnter to q to quit.\n");
    do{ 
       g = getchar();
    }while( g != 'q' );

	return 0;
 }
