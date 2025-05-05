#ifndef MAIN_H
#define MAIN_H

// Include necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Structure declarations
struct details {
    char uname[50];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
};

struct Shops {
    char shop[100];
    char item1[20];
    char item2[20];
    char item3[20];
    char item4[25];
    int first, second, third, fourth;
};

// Global variables
extern struct Shops m[5];
extern struct details s[100];
extern int total;

// Function prototypes
void signup();
void login();
void shop();
void items();
void cart();

#endif
