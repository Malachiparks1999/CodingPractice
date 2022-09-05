/*
Date:                   September 3rd, 2022
Creator(s):             Malachi Parks
Problem Prompt:         Write a C program to print your name, date of birth. and mobile number. Go to the editor

Expected Outlput:

Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999
*/

#include "./p1.h"

int main(void){
    char name[30], *number[11];
    int month, day, year;
    printName(name);
}

/*
 * Function: printName
 * ----------------------------
 *   Prints the name passed in then returns if the command ran successfully
 *
 *   Parameters
 *   name: inputted name to be printed
 *
 *   returns: none
 */
void printName(char *username){
    printf("%s","ENTER YOUR FIRST NAME: ");
    fgets(username, 29, stdin);
    printf("%s %s%s", "NAME:",username,"\n");
}

/*
 * Function: printDOB
 * ----------------------------
 *   Prints the name passed in then returns if the command ran successfully
 *
 *   Parameters
 *   month:   inputted month in two digits
 *   day:     inputted day in two digits
 *   year:    inputed year in four digits
 *
 *   returns: none
 */
void printDOB(int month, int day, int year);

/*
 * Function: printName
 * ----------------------------
 *   Prints the name passed in then returns if the command ran successfully
 *
 *   Parameters
 *   cellNum: inputted cell # to be printed
 *
 *   returns: none
 */
void printNumber(char *cellNum);