#include <stdio.h>
#include <stdlib.h>

// Helper Function Declarations
void printWelcomeMessage();
void printConclusionMessage();
void getEducationDetails();
void displayEducationLevels();
void printLifestyleBenefits();
void printCareerBenefits();

// Main function 
int main() 
{
	// Print the welcome message
	printWelcomeMessage();

	// Get education details
	getEducationDetails();

	// Display current level of education
	displayEducationLevels();

	// Print the lifestyles and career benefits of pursuing an education
	printLifestyleBenefits();
	printCareerBenefits();

	// Print a conclusion message
	printConclusionMessage();

	return 0;
}

// Function to print the welcome message
void printWelcomeMessage() 
{
	printf("\nWelcome to the Education Pursuit Program!\n");
	printf("This program will help you to understand the benefits of pursuing an education.\n\n");
}

// Function to get the user's educational details
void getEducationDetails() 
{
	// Declare the variables
	int currentLevel;
    int highestLevel;
    int yearsOfEducation;
	
	// Ask the user for their current level of education
	printf("What is your current level of education?\n\n");
	printf("1. No education\n2. High School Diploma\n3. Associate's Degree\n4. Bachelor's Degree\n5. Master's Degree\n");
    scanf("%d", &currentLevel);
    
	// Ask the user for their highest level of education
    printf("What is your highest level of education?\n\n");
	printf("1. No education\n2. High School Diploma\n3. Associate's Degree\n4. Bachelor's Degree\n5. Master's Degree\n");
    scanf("%d", &highestLevel);

	// Ask the user for their years of education
    printf("Please enter the total number of years of education:\n");
    scanf("%d", &yearsOfEducation);
}

// Function to display the current level of education
void displayEducationLevels() 
{
	printf("\nYour current level of education is: ");
    switch(currentLevel) {
        case 1:
            printf("No education\n");
            break;
        case 2:
            printf("High School Diploma\n");
            break;
        case 3:
            printf("Associate's Degree\n");
            break;
        case 4:
            printf("Bachelor's Degree\n");
            break;
        case 5:
            printf("Master's Degree\n");
            break;
    }
    printf("Your highest level of education is: ");
    switch(highestLevel) {
        case 1:
            printf("No education\n");
            break;
        case 2:
            printf("High School Diploma\n");
            break;
        case 3:
            printf("Associate's Degree\n");
            break;
        case 4:
            printf("Bachelor's Degree\n");
            break;
        case 5:
            printf("Master's Degree\n");
            break;
    }
	printf("Total number of years of education: %d\n\n", yearsOfEducation);
}

// Function to print the lifestyle benefits of pursuing an education
void printLifestyleBenefits() 
{
	printf("The lifestyle benefits of pursuing an education include:\n");
	printf("- Increased self-confidence and self-esteem\n");
	printf("- Improved communication skills\n");
	printf("- Developing critical thinking skills\n");
	printf("- Increased knowledge of a variety of subjects\n");
	printf("- Increased earning potential\n\n");
}

// Function to print the career benefits of pursuing an education
void printCareerBenefits() 
{
	printf("The career benefits of pursuing an education include:\n");
	printf("- Improved job opportunities\n");
	printf("- Increased job security\n");
	printf("- Improved networking opportunities\n");
	printf("- Increased earning potential\n");
	printf("- Improved problem-solving skills\n\n");
}

// Function to print the conclusion message
void printConclusionMessage() 
{
	printf("Thank you for using the Education Pursuit Program!\n");
	printf("We hope you have learned something about the benefits of pursuing an education.\n");
	printf("For more information, please visit our website or contact us.\n\n");
}