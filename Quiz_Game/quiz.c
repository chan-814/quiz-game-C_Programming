#include <stdio.h>

void intro();
void start();
void easy();
void medium();
void hard();
void easysubmit(char q1,char q2,char q3,char q4,char q5);
void mediumsubmit(char q1,char q2,char q3,char q4,char q5);
void hardsubmit(char q1,char q2,char q3,char q4,char q5);

void easyans(char q1,char q2,char q3,char q4,char q5);
void mediumans(char q1,char q2,char q3,char q4,char q5);
void heardans(char q1,char q2,char q3,char q4,char q5);


void intro(){
    printf("\t\t\t------------------------\n");
    printf("\t\t\t| Welcome To Quiz Game |\n");
    printf("\t\t\t------------------------\n");
    
    printf("\n1. Start\n");
    printf("2. Exit\n\n");
    
    int task;
    printf("Enter the option: ");
    scanf("%d",&task);
    
    if(task==1){
        
        start();
        
    }else if(task==2){
        
        return;
    }else{
        printf("\nEnter the Correct option\n\n");
        intro();
        
        }

    return;
}

void start(){
    printf("\n------------------------------------------");
    printf("\n| Choose the Levels of questions to solve |\n");
    printf("------------------------------------------\n");
    printf("\n1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("4. Exit\n\n");
    
    int level;
    printf("Enter the option: ");
    scanf("%d",&level);
    
    
   if(level==1){
      easy();
    }else if(level==2){
      medium();   
    }else if(level==3){
      hard();   
    }else if(level==4){
        return;
    }else{
        printf("\nEnter the correct option\n");
        start();
    }
}

void easy(){
    
    char q1,q2,q3,q4,q5;
    printf("\n------------------");
    printf("\n| Easy Questions |");
    printf("\n------------------\n\n");
    
    printf("1. Who is known as the father of C language?\n");
    printf("\na. James Gosling\nb. Dennis Ritchie\nc. Bjarne Stroustrup\nd. Guido van Rossum\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q1);
    
    printf("\n2. Which symbol is used to declare a pointer in C?\n\n");
    printf("\na. &\nb. *\nc. %\nd. #\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q2);
    
    printf("\n3. Which function is used to print output in C?\n");
    printf("\na. scanf()\nb. print()\nc. printf()\nd. display()\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q3);
    
    printf("\n4. Which header file is required for printf() and scanf()?\n");
    printf("\na. conio.h\nb. math.h\nc. stdio.h\nd. string.h\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q4);
    
    printf("\n5. Which loop is guaranteed to execute at least once?\n");
    printf("\na. for loop\nb. while loop\nc. do-while loop\nd. nested loop\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q5);
    
    
    printf("\n1. Submit\n2. Restart\n3. Back to level\n\nEnter the option: ");
    int option;
    scanf("%d",&option);
    
    if(option==1){
        easysubmit(q1,q2,q3,q4,q5);
    }else if(option==2){
        easy();
    }else if(option==3){
        start();
    }
    else{
        printf("\nPlease enter the correct option\n");
        easy();
    }
   
}

void medium(){
   
   char q1,q2,q3,q4,q5;
    printf("\n------------------");
    printf("\n| Medium Questions |");
    printf("\n------------------\n\n");
    
    printf("1. Which of the following is a correct way to declare a pointer in C?\n");
    printf("\na. int ptr;\nb. int *ptr;\nc. pointer int ptr;\nd. int &ptr;\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q1);
    
    printf("\n2. What is the default initial value of a global variable in C?\n\n");
    printf("\na. Garbage value\nb. NULL\nc. 0\nd. Depends on compiler\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q2);
    
    printf("\n3. Which loop is most suitable when the number of iterations is known?\n");
    printf("\na. while\nb. do-while\nc. for\nd. Infinite loop\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q3);
    
    printf("\n4. Which function is used to compare two strings in C?\n");
    printf("\na. strcompare()\nb.strcmp()\nc. compare()\nd. stringcmp()\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q4);
    
    printf("\n5. Which of the following statements about arrays in C is TRUE?\n");
    printf("\na. Array size can change automatically\nb. Arrays are stored in non-contiguous memory\nc. Array index starts from 1\nd. Arrays are stored in contiguous memory\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q5);
    
    
    printf("\n1. Submit\n2. Restart\n3. Back to level\n\nEnter the option: ");
    int option;
    scanf("%d",&option);
    
    if(option==1){
        mediumsubmit(q1,q2,q3,q4,q5);
    }else if(option==2){
        medium();
    }else if(option==3){
        start();
    }
    else{
        printf("\nPlease enter the correct option\n");
        easy();
    } 
}

void hard(){
    
    char q1,q2,q3,q4,q5;
    printf("\n------------------");
    printf("\n| Hard Questions |");
    printf("\n------------------\n\n");
    
    printf("1. Which memory area stores local variables of a function?\n");
    printf("\na. Heap\nb. Stack\nc. Data Segment\nd. Code Segment\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q1);
    
    printf("\n2. Which of the following storage classes retains its value between function calls?\n\n");
    printf("\na. auto\nb. register\nc. static\nd. extern\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q2);
    
    printf("\n3. Which of the following is TRUE about calloc()?\n");
    printf("\na. Allocates memory without initialization\nb. Allocates and initializes memory to zero\nc. Cannot allocate multiple blocks\nd. Is faster than malloc() always\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q3);
    
    printf("\n4. What is the main difference between Structure and Union?\n");
    printf("\na. Structure stores only one member at a time\nb. Union stores all members separately\nc. Structure allocates memory for all members, union shares memory\nd. No difference\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q4);
    
    printf("\n5. What happens if a recursive function does not have a base condition?\n");
    printf("\na. Compile-time error\nb. Logical error only\nc. Infinite recursion leading to stack overflow\nd. Program runs normally\n");
    printf("\n\nEnter the option: ");
    scanf(" %c",&q5);
    
    
    printf("\n1. Submit\n2. Restart\n3. Back to level\n\nEnter the option: ");
    int option;
    scanf("%d",&option);
    
    if(option==1){
        hardsubmit(q1,q2,q3,q4,q5);
    }else if(option==2){
        hard();
    }else if(option==3){
        start();
    }
    else{
        printf("\nPlease enter the correct option\n");
        hard();
    } 
}

void easysubmit(char q1,char q2,char q3,char q4,char q5){
    int count=0;
    if(q1=='b'){
        count++;
    }
    if(q2=='b'){
        count++;
    }
    if(q3=='c'){
        count++;
    }
    if(q4=='c'){
        count++;
    }
    if(q5=='c'){
        count++;
    }
    
    if(count<=2){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nNeed to improve you Fail the test\n");
        printf("\n------------------------------END---------------------------\n");
        easyans(q1,q2,q3,q4,q5);
       
    }
    else if(count==3){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nOhhhh Just Miss You Need 1 to Pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        easyans(q1,q2,q3,q4,q5);
        
    }else if(count==4){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nGood Mark you pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        easyans(q1,q2,q3,q4,q5);
        
    }else if(count==5){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nExcellent Mark you pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        easyans(q1,q2,q3,q4,q5);
        
    }
    
}

void mediumsubmit(char q1,char q2,char q3,char q4,char q5){
    int count=0;
    
    if(q1=='b'){
        count++;
    }
    if(q2=='c'){
        count++;
    }
    if(q3=='c'){
        count++;
    }
    if(q4=='b'){
        count++;
    }
    if(q5=='d'){
        count++;
    }
    
    if(count<=2){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nNeed to improve you Fail the test\n");
        printf("\n------------------------------END---------------------------\n");
        mediumans(q1,q2,q3,q4,q5);
       
    }
    else if(count==3){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nOhhhh Just Miss You Need 1 to Pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        mediumans(q1,q2,q3,q4,q5);
        
    }else if(count==4){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nGood Mark you pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        mediumans(q1,q2,q3,q4,q5);
        
    }else if(count==5){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nExcellent Mark you pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        mediumans(q1,q2,q3,q4,q5);
        
    }
    
}

void hardsubmit(char q1,char q2,char q3,char q4,char q5){
    int count=0;
    
    if(q1=='b'){
        count++;
    }
    if(q2=='c'){
        count++;
    }
    if(q3=='b'){
        count++;
    }
    if(q4=='c'){
        count++;
    }
    if(q5=='c'){
        count++;
    }
    
    if(count<=2){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nNeed to improve you Fail the test\n");
        printf("\n------------------------------END---------------------------\n");
        heardans(q1,q2,q3,q4,q5);
       
    }
    else if(count==3){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nOhhhh Just Miss You Need 1 to Pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        heardans(q1,q2,q3,q4,q5);
        
    }else if(count==4){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nGood Mark you pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        heardans(q1,q2,q3,q4,q5);
    }else if(count==5){
        printf("\nYour Total Marks: %d\n",count);
        printf("\nExcellent Mark you pass the test\n");
        printf("\n------------------------------END---------------------------\n");
        heardans(q1,q2,q3,q4,q5);
        
    }
    
}

void easyans(char q1,char q2,char q3,char q4,char q5){
    
    printf("\nIf you want to see the answer\n\n");
    printf("1. Yes\n");
    printf("2. No\n\n");
    printf("Please Enter the Right Option: ");
    int option;
    scanf("%d",&option);
    
    if(option==1){
    printf("\nYour Wrong Questions Answers\n\n");    
    if(q1!='b') printf("Q1. Dennis Ritchie\n");
    if(q2!='b') printf("Q2. *\n");
    if(q3!='c') printf("Q3. printf()\n");
    if(q4!='c') printf("Q4. stdio.h\n");
    if(q5!='c') printf("Q5. do-while loop\n");
     printf("\n------------------------------END---------------------------\n");
    start();
    }else if(option==2){
         printf("\n------------------------------END---------------------------\n");
        start();
    }else{
        printf("\nChoose the correct optionr\n");
        easyans(q1,q2,q3,q4,q5);
    }
}

void mediumans(char q1,char q2,char q3,char q4,char q5){
    
    printf("\nIf you want to see the answer\n\n");
    printf("1. Yes\n");
    printf("2. No\n\n");
    printf("Please Enter the Right Option: ");
    int option;
    scanf("%d",&option);
    
    if(option==1){
    printf("\nYour Wrong Questions Answers\n\n");    
    if(q1!='b') printf("Q1. int *ptr\n");
    if(q2!='c') printf("Q2. 0\n");
    if(q3!='c') printf("Q3. for\n");
    if(q4!='b') printf("Q4. strcmp()\n");
    if(q5!='d') printf("Q5. Arrays are stored in contiguous memory\n");
     printf("\n------------------------------END---------------------------\n");
    start();
    }else if(option==2){
         printf("\n------------------------------END---------------------------\n");
        start();
    }else{
        printf("\nChoose the correct optionr\n");
        mediumans(q1,q2,q3,q4,q5);
    }
}

void heardans(char q1,char q2,char q3,char q4,char q5){
    
    printf("\nIf you want to see the answer\n\n");
    printf("1. Yes\n");
    printf("2. No\n\n");
    printf("Please Enter the Right Option: ");
    int option;
    scanf("%d",&option);
    
    if(option==1){
    printf("\nYour Wrong Questions Answers\n\n");    
    if(q1!='b') printf("Q1. Stack\n");
    if(q2!='c') printf("Q2. static\n");
    if(q3!='b') printf("Q3. Allocates and initializes memory to zero\n");
    if(q4!='c') printf("Q4. Structure allocates memory for all members, union shares memory\n");
    if(q5!='c') printf("Q5. Infinite recursion leading to stack overflow\n");
     printf("\n------------------------------END---------------------------\n");
    start();
    }else if(option==2){
         printf("\n------------------------------END---------------------------\n");
        start();
    }else{
        printf("\nChoose the correct optionr\n");
        heardans(q1,q2,q3,q4,q5);
    }
}

int main()
{
    intro();
}