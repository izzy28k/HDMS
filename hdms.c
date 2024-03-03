#include <stdio.h>  
#include <conio.h>   
#include <stdlib.h>  
#include <string.h>  
  

struct library  
{   
    char patient_name[100];  
    char doctor_name[100];  
    int age;  
    int room;  
};  

int main()  
{   
    struct library lib[100];  
    char pat_name[100];  
    int i, j, total;  
    i = 0;  
    j = 0;  
    total = 0;  
  
    while(j!=6)  
    {  
        printf("\n\n1. Add patient details\n");  
        printf("2. Display the list of patients and their details\n");  
        printf("3. Display the total no. of patients in the admitted\n");  
        printf("4. Exit\n\n");  
        printf("Enter your request number: ");  
        scanf(" %d", &j);  
  
        switch(j)  
        {  
            case 1:  
                printf(" \nAdd the details of patient ");  
                printf(" \nEnter the patient's name: ");  
                scanf(" %s", lib[i].patient_name);  
                printf(" \nEnter the doctor's name: ");  
                scanf(" %s", lib[i].doctor_name);  
                printf(" \nEnter the room no.: ");  
                scanf(" %d", &lib[i].room);  
                printf(" \nEnter the patient's age: ");  
                scanf(" %d", &lib[i].age);  
                total = total + 1;  
                i = i + 1;  
                break;  
  
            case 2:  
                if (total==0)  
                {  
                    printf(" \nThere are no patients admitted!\n\n ");  
                }  
                else  
                {    
                    printf(" \nThe details of all patients are: ");  
                    for(i=0; i < total; i++)  
                    {  
                        printf(" \n\nPatient Name: %s ", lib[i].patient_name);  
                        printf(" \nDoctor Name: Dr. %s ", lib[i].doctor_name);
                        printf(" \nAge of Patient: %d ", lib[i].age);  
                        printf(" \nRoom No.: %d ", lib[i].room);  
                    }  
                }  
                break;  
  
            case 3:  
                printf(" \nTotal number of patients admitted: %d\n\n ", total);  
                break;  
              
            case 4:  
                exit(0);  
                  
            default:  
                printf(" \nInvalid number entered\n\n ");  
        }  
  
    }  
  
}  