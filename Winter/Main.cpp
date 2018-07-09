#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct StudentMarks
{
	int RollNo;
	char Name[100];
	int M1;
	int M2;
	int M3;
	int M4;
	float avg;
	float CGPA;
	char phone[15];
	char Address[300];
	char City[50];
	char pincode[7];
} student[1024];

int csvLineCount = 0;
bool isAvgComputed = false;
bool isCGPAComputed = false;
int order = 0;
bool isFirst = true;
int current = -1;
bool isJoined = false;

const char* getfield(char *line1, int num)
{
	char *line = _strdup(line1);
	const char* tok;
	for (tok = strtok(line, ","); tok && *tok;tok = strtok(NULL, ",\n"))
	{
		if (!(--num))
			return tok;
	}
	return NULL;
}

void computeAverage(StudentMarks *student, int current){
	student[current].avg = (float)(student[current].M1 + student[current].M2 + student[current].M3 + student[current].M4) / 4;
}

void computeCGPA(StudentMarks *student, int current){
	if (student[current].avg >= 90 && student[current].avg<=100)
		student[current].CGPA = 4;
	else if (student[current].avg >= 85 && student[current].avg < 90)
		student[current].CGPA = 3.76;
	else if (student[current].avg >= 80 && student[current].avg < 85)
		student[current].CGPA = 3.5;
	else if (student[current].avg >= 75 && student[current].avg < 80)
		student[current].CGPA = 3.33;
	else if (student[current].avg >= 70 && student[current].avg < 75)
		student[current].CGPA = 3;
	else if (student[current].avg >= 65 && student[current].avg < 70)
		student[current].CGPA = 2.76;
	else if (student[current].avg >= 60 && student[current].avg < 65)
		student[current].CGPA = 2.5;
	else student[current].CGPA = 2;
}

void load(){
	char *inputFile = (char*)malloc(sizeof(char) * 1024);
	int ch;
	bool valid = true;
	char line[1024];

	printf("\n\t1.Marks List\n\t2.Address List\n\tEnter type of list :");
	scanf("%d", &ch);

	printf("\nEnter the source file :");
	scanf(" %s", inputFile);

	FILE* input = fopen(inputFile, "r");
	if (input == NULL){
		printf("\nInput file cannot be opened.\n");
		return;
	}

	switch (ch)
	{
	case 1:
		while (fgets(line, 1024, input))
		{
			//current = atoi(getfield(line, 1));
			student[++current].RollNo = atoi(getfield(line, 1));
			strcpy(student[current].Name, getfield(line, 2));
			student[current].M1 = atoi(getfield(line, 3));
			student[current].M2 = atoi(getfield(line, 4));
			student[current].M3 = atoi(getfield(line, 5));
			student[current].M4 = atoi(getfield(line, 6));

			csvLineCount++;
		}
		break;

	case 2:
		while (fgets(line, 1024, input))
		{
			current = atoi(getfield(line, 1));
			strcpy(student[current].phone,getfield(line, 2));
			strcpy(student[current].Address, getfield(line, 3));
			strcpy(student[current].City, getfield(line, 4));
			strcpy(student[current].pincode , getfield(line, 5));
		}
		break;

	default:
		printf("\nInvalid choice");
		break;
	}
	fclose(input);
}

void show(int ch){
	switch (ch)
	{
	case 1:
		if (isAvgComputed && isCGPAComputed)
			printf("\tName\tRollNo\tM1\tM2\tM3\tM4\tAverage\tCGPA\n");
		else if (isAvgComputed && !isCGPAComputed)
			printf("\tName\tRollNo\tM1\tM2\tM3\tM4\tAverage\n");
		else if (!isAvgComputed && isCGPAComputed)
			printf("\tName\tRollNo\tM1\tM2\tM3\tM4\tCGPA\n");
		else
			printf("\tName\tRollNo\tM1\tM2\tM3\tM4\n");

		for (int i = 1; i < csvLineCount; i++){
			if (isAvgComputed && isCGPAComputed)
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%0.2f\t%0.2f", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].avg, student[i].CGPA);
			else if (isAvgComputed && !isCGPAComputed)
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%0.2f", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].avg);
			else if (!isAvgComputed && isCGPAComputed)
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%0.2f", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].CGPA);
			else
				printf("%10s\t%d\t%d\t%d\t%d\t%d", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4);
			printf("\n");
		}
		break;
	case 2:
		for (int i = 1; i < csvLineCount; i++){
			if (isAvgComputed && isCGPAComputed)
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%0.2f\t%0.2f%15s%40s%15s%10s\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].avg, student[i].CGPA, student[i].phone, student[i].Address, student[i].City, student[i].pincode);
			else if (isAvgComputed && !isCGPAComputed)
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%0.2f%15s%40s%15s%10s\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].avg, student[i].phone, student[i].Address, student[i].City, student[i].pincode);
			else if (!isAvgComputed && isCGPAComputed)
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%0.2f%15s%40s%15s%10s\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].CGPA, student[i].phone, student[i].Address, student[i].City, student[i].pincode);
			else
				printf("%10s\t%d\t%d\t%d\t%d\t%d\t%15s%40s%15s%10s\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].phone, student[i].Address, student[i].City, student[i].pincode);
		}
			
	default:
		break;
	}
	printf("\n");

	
	
	for (int i = 1; i < csvLineCount; i++){

	}

	printf("\nFile parsing successful.");
	
}

void computeAverage_Wrapper(){
	for (int i = 0; i < csvLineCount;i++)
		computeAverage(student, i);
	isAvgComputed = true;
	if (isFirst == true){
		order = 1;
		isFirst = false;
	}
	else order = 2;

	printf("\nAverage Calculation successful!");
}

void computeCGPA_Wrapper(){
	for (int i = 0; i < csvLineCount; i++)
		computeCGPA(student, i);
	isCGPAComputed = true;
	if (isFirst == true){
		order = 2;
		isFirst = false;
	}
	else order = 1;
	printf("\nGPA Calculation successful!");
}

void join(){
	isJoined = true;
}

void save(){
	char *outputFile = (char*)malloc(sizeof(char) * 1024);

	printf("\nEnter the destination file :");
	scanf(" %s", outputFile);

	FILE* output = fopen(outputFile, "w"); 

	if (isAvgComputed && isCGPAComputed)
		fprintf(output, "Name,RollNo,M1,M2,M3,M4,Average,CGPA\n");
	else if (isAvgComputed && !isCGPAComputed)
		fprintf(output, "Name,RollNo,M1,M2,M3,M4,Average\n");
	else if (!isAvgComputed && isCGPAComputed)
		fprintf(output, "Name,RollNo,M1,M2,M3,M4,CGPA\n");
	else
		fprintf(output, "Name,RollNo,M1,M2,M3,M4\n");

	for (int i = 1; i < csvLineCount; i++)
	{
		if (isAvgComputed && isCGPAComputed)
			fprintf(output,"%s,%d,%d,%d,%d,%d,%.2f,%.2f\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].avg, student[i].CGPA);
		else if (isAvgComputed && !isCGPAComputed)
			fprintf(output,"%s,%d,%d,%d,%d,%d,%.2f\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].avg);
		else if (!isAvgComputed && isCGPAComputed)
			fprintf(output,"%s,%d,%d,%d,%d,%d,%.2f\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4, student[i].CGPA);
		else
			fprintf(output,"%s,%d,%d,%d,%d,%d\n", student[i].Name, student[i].RollNo, student[i].M1, student[i].M2, student[i].M3, student[i].M4);
	}

	fclose(output);
}



void main()
{
	int choice;
	bool close = false;
	while (!close)
	{
		printf("\n\n\t1. Load\n\t2. Show\n\t3. Compute Average\n\t4. Compute CGPA\n\t5. Save\n\t6. Join and Show\n\t7.Exit\n\nEnter your choice :");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			load();
			
			break;
		case 2:
			
			show(1);
			break;
		case 3:	
			
			computeAverage_Wrapper();
			break;
		case 4:
			
			computeCGPA_Wrapper();
			break;
		case 5:
			
			save();
			break;
		case 6:
			join();
			show(2);
			break;
		case 7:
			close = true;

			printf("\nExiting!\n");
			break;
		default:
			printf("Enter valid choice : ");
			break;
		}
	}
}