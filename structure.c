#include <stdio.h> 
#include <string.h> 
// Define a structure for DOB 
struct DOB { 
int day; 
int month; 
int year; 
}; 
// Define a structure for Student 
struct Student { 
int roll_no; 
char name[50]; 
char faculty[50]; 
struct DOB dob; // Nested structure 
}; 
int main() { 
int N,i; 
printf("Enter the number of students: "); 
scanf("%d", &N); 
struct Student students[N]; // Array of structures 
// Input student records 
for ( i = 0; i < N; i++) { 
printf("\nEnter details for student %d:\n", i + 1); 
printf("Roll No: "); 
scanf("%d", &students[i].roll_no); 
printf("Name: "); 
scanf(" %s", &students[i].name); // To read string with spaces 
printf("Faculty: "); 
scanf(" %s",& students[i].faculty); 
printf("Date of Birth (DD MM YYYY): "); 
scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, 
&students[i].dob.year); 
} 
// Display records of BIOTECHNOLOGY students only 
printf("\nRecords of BIOTECHNOLOGY students:\n"); 
for (i = 0; i < N; i++) { 
if (strcmp(students[i].faculty, "BIOTECHNOLOGY") == 0) { 
printf("\nRoll No: %d\n", students[i].roll_no); 
printf("Name: %s\n", students[i].name); 
printf("Faculty: %s\n", students[i].faculty); 
printf("Date of Birth: %02d-%02d-%04d\n", 
students[i].dob.day, students[i].dob.month, students[i].dob.year); 
} 
} 
return 0; 
}
