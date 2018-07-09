#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"Hasher.h"
#include"MainHeader.h"
#include"Syntax.h"
// Queries

struct Grammar
{
	char **syntax;
} grammar;

bool StartsWith(const char *a, const char *b)
{
	if (strncmp(a, b, strlen(b)) == 0) return 1;
	return 0;
}

int getSpaces(char *query){
	int spaces = 0, i = 0;

	while (query[i] != '\0')
	{
		if (query[i] == ' ')
			spaces++;
		i++;
	}

	return spaces;
}

char *addWithSpaces(char *s1, char *s2)
{
	strncat(s1, " ", strlen(s1) + 1);
	return strncat(s1, s2, strlen(s1) + strlen(s2));
}

void QueryString(char *operand, char *comparator, char *value);
char * toLower(char *string);

void M1QueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%d\n", marks[i]->M1);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%d\n", marks[i]->M1);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void M2QueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%d\n", marks[i]->M2);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "M2");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%d\n", marks[i]->M2);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void M3QueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%d\n", marks[i]->M3);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "M3");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%d\n", marks[i]->M3);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void M4QueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%d\n", marks[i]->M4);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "M4");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%d\n", marks[i]->M4);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void AvgQueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "avg");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "AVG");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "AVG");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%0.2f\n", marks[i]->avg);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void CGPAQueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "CGPA");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%0.2f\n", marks[i]->CGPA);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void NameQueryHandler(HashTable *hashtable)
{
	char *operand = toLower(getValue(hashtable, "operand"));
	char *operation = toLower(getValue(hashtable, "comparator"));
	char *criteria = getValue(hashtable, "value");

	if (!strcmp(operand, "m1"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 < atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 > atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 == atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 <= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M1 >= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m2"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 < atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 > atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 == atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 <= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M2 >= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m3"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 < atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 > atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 == atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 <= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M3 >= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "m4"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 < atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 > atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 == atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 <= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->M4 >= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "avg"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg < atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg > atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg == atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg <= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->avg >= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "cgpa"))
	{
		if (!strcmp("lt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA < atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("gt", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA > atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("eq", operation)){
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA == atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("le", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA <= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("ge", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (marks[i]->CGPA >= atoi(criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}

	else if (!strcmp(operand, "name"))
	{
		if (!strcmp("ct", operation))
		{
			printf("\n%s\n", "Name");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (kmp(marks[i]->Name, criteria) != -1)
					printf("%s\n", marks[i]->Name);
			}
		}
		else if (!strcmp("sw", operation))
		{
			printf("\n%s\n", "M1");
			for (int i = 0; i <= globals.MarksCurrent; i++)
			{
				if (StartsWith(marks[i]->Name, criteria))
					printf("%s\n", marks[i]->Name);
			}
		}
		else
			printf("\nInvalid Operation!");
	}
}

void QueryHandler(HashTable *hashtable)
{
	if (strcmp(toLower(getValue(hashtable, "table")), "marks") != 0)
	{
		printf("\n\tQuery Execution only works for Marks table");
		return;
	}

	if (!strcmp(toLower(getValue(hashtable, "column")), "m1"))
		M1QueryHandler(hashtable);
	if (!strcmp(toLower(getValue(hashtable, "column")), "m2"))
		M2QueryHandler(hashtable);
	if (!strcmp(toLower(getValue(hashtable, "column")), "m3"))
		M3QueryHandler(hashtable);
	if (!strcmp(toLower(getValue(hashtable, "column")), "m4"))
		M4QueryHandler(hashtable);
	if (!strcmp(toLower(getValue(hashtable, "column")), "avg"))
		AvgQueryHandler(hashtable);
	if (!strcmp(toLower(getValue(hashtable, "column")), "cgpa"))
		CGPAQueryHandler(hashtable);
	if (!strcmp(toLower(getValue(hashtable, "column")), "name"))
		NameQueryHandler(hashtable);
}

int calcSpaces(char *query)
{
	int i = 0;
	int count = 0;
	while (query[i] != '\0')
	{
		if (query[i] == ' ')
			count++;
		i++;
	}
	return i;
}

void ParseSyntax(char *query)
{
	int spaces = calcSpaces(query);

	if (spaces < 7)
	{
		printf("Insufficient arguments");
		return;
	}
	char *querystring = (char *)malloc(sizeof(char) * 100);
	HashTable *hashtable = CreateHashTable(6);
	char **temp = (char**)malloc(sizeof(char*) * 8);

	for (int i = 0; i < 8; i++)
		temp[i] = (char*)malloc(sizeof(char) * 50);
	int i = 0;
	for (char *tok = strtok(query, " "); i < 8; i++, tok = strtok(NULL, " "))
		strcpy(temp[i], tok);

	//for (int i = 0; i < 8; i++)
	//	printf("\n%s\t\t%s", grammar.syntax[i], temp[i]);

	for (int i = 0; i <= 4; i += 2)
	{
		if (strcmp(toLower(temp[i]), toLower(grammar.syntax[i])) != 0){
			printf("\nError parsing syntax.");
			return;
		}
	}

	char *toLower(char *string);

	if (strcmp(toLower(temp[1]), "m1") || strcmp(toLower(temp[1]), "m2") || strcmp(toLower(temp[1]), "m3") || strcmp(toLower(temp[1]), "m4") || strcmp(toLower(temp[1]), "avg") || strcmp(toLower(temp[1]), "cgpa") || strcmp(toLower(temp[1]), "phone") || strcmp(toLower(temp[1]), "address") || strcmp(toLower(temp[1]), "city") || strcmp(toLower(temp[1]), "pincode") || strcmp(toLower(temp[1]), "name"))
	{

	}
	else
	{
		printf("\nInvalid arguments");
		return;
	}

	if (strcmp(toLower(temp[3]), "marks") || strcmp(toLower(temp[3]), "info"))
	{

	}
	else
	{
		printf("\nInvalid arguments");
		return;
	}

	for (int i = 1; i < 8; i++)
	{
		if (i % 2 == 1)
		{
			if (strcmp("{column}", grammar.syntax[i]) == 0)
				set(hashtable, "column", temp[i]);
			else if (strcmp("{table}", grammar.syntax[i]) == 0)
				set(hashtable, "table", temp[i]);
		}
		if (i >= 5 && i <= 8)
		{
			if (strcmp("{operand}", grammar.syntax[i]) == 0)
				set(hashtable, "operand", temp[i]);
			else if (strcmp("{comparator}", grammar.syntax[i]) == 0)
				set(hashtable, "comparator", temp[i]);
			else if (strcmp("{value}", grammar.syntax[i]) == 0)
				set(hashtable, "value", temp[i]);
		}
	}

	if (getValue(hashtable, "operand") == NULL || getValue(hashtable, "comparator") == NULL || getValue(hashtable, "value") == NULL || getValue(hashtable, "column") == NULL || getValue(hashtable, "table") == NULL) {
		printf("\nError getting details from hashtable\n");
		return;
	}


	QueryHandler(hashtable);
}

void SyntaxParserMain()
{
	char *syntax = (char*)malloc(sizeof(char) * 200);
	strcpy(syntax, "select {column} from {table} where {operand} {comparator} {value}");
	grammar.syntax = (char**)malloc(sizeof(char*) * 8);

	for (int i = 0; i < 8; i++)
		grammar.syntax[i] = (char*)malloc(sizeof(char) * 50);

	int i = 0;
	for (char *tok = strtok(syntax, " "); i < 8; i++, tok = strtok(NULL, " "))
		strcpy(grammar.syntax[i], tok);

	char *query = (char*)malloc(sizeof(char) * 1024);
	printf("\nEnter your query : ");
	scanf("%d", &query);
	scanf("%d", &query);
	ParseSyntax(query);
}

char *toLower(char *string){
	int i = 0;
	while (string[i] != '\0')
	{
		if (isupper(string[i]))
			string[i] = tolower(string[i]);
		i++;
	}
	return string;
}

void M1Operations(char *operation, char *criteria){
	if (!strcmp("lt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M1");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M1 < atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M1);
		}
	}
	else if (!strcmp("gt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M1");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M1 > atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M1);
		}
	}
	else if (!strcmp("eq", toLower(operation))){
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M1");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M1 == atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M1);
		}
	}
	else if (!strcmp("le", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M1");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M1 <= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M1);
		}
	}
	else if (!strcmp("ge", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M1");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M1 >= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M1);
		}
	}
	else
		printf("\nInvalid Operation!");
}

void M2Operations(char *operation, char *criteria){
	if (!strcmp("lt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M2");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M2 < atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M2);
		}
	}
	else if (!strcmp("gt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M2");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M2 > atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M2);
		}
	}
	else if (!strcmp("eq", toLower(operation))){
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M2");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M2 == atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M2);
		}
	}
	else if (!strcmp("le", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M2");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M2 <= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M2);
		}
	}
	else if (!strcmp("ge", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M2");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M2 >= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M2);
		}
	}
	else
		printf("\nInvalid Operation!");
}

void M3Operations(char *operation, char *criteria){
	if (!strcmp("lt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M3");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M3 < atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M3);
		}
	}
	else if (!strcmp("gt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M3");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M3 > atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M3);
		}
	}
	else if (!strcmp("eq", toLower(operation))){
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M3");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M3 == atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M3);
		}
	}
	else if (!strcmp("le", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M3");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M3 <= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M3);
		}
	}
	else if (!strcmp("ge", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M3");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M3 >= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M3);
		}
	}
	else
		printf("\nInvalid Operation!");
}

void M4Operations(char *operation, char *criteria){
	if (!strcmp("lt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M4");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M4 < atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M4);
		}
	}
	else if (!strcmp("gt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M4");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M4 > atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M4);
		}
	}
	else if (!strcmp("eq", toLower(operation))){
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M4");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M4 == atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M4);
		}
	}
	else if (!strcmp("le", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M4");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M4 <= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M4);
		}
	}
	else if (!strcmp("ge", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "M4");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->M4 >= atoi(criteria))
				printf("%d\t%10s\t%d\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M4);
		}
	}
	else
		printf("\nInvalid Operation!");
}

void AvgOperations(char *operation, char *criteria){
	ComputeAverage();
	if (!strcmp("lt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "Average");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->avg < atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->avg);
		}
	}
	else if (!strcmp("gt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "Average");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->avg > atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->avg);
		}
	}
	else if (!strcmp("eq", toLower(operation))){
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "Average");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->avg == atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->avg);
		}
	}
	else if (!strcmp("le", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "Average");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->avg <= atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->avg);
		}
	}
	else if (!strcmp("ge", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "Average");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->avg >= atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->avg);
		}
	}
	else
		printf("\nInvalid Operation!");
}


void CGPAOperations(char *operation, char *criteria)
{
	ComputeCGPA();
	if (!strcmp("lt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "CGPA");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->CGPA < atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->CGPA);
		}
	}
	else if (!strcmp("gt", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "CGPA");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->CGPA > atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->CGPA);
		}
	}
	else if (!strcmp("eq", toLower(operation))){
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "CGPA");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->CGPA == atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->CGPA);
		}
	}
	else if (!strcmp("le", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "CGPA");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->CGPA <= atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->CGPA);
		}
	}
	else if (!strcmp("ge", toLower(operation)))
	{
		printf("\n%s\t%10s\t%s\n", "RollNo", "Name", "CGPA");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (marks[i]->CGPA >= atoi(criteria))
				printf("%d\t%10s\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->CGPA);
		}
	}
	else
		printf("\nInvalid Operation!");
}

void PhoneOperations(char *operation, char*criteria){
	printf("\n\nNot Implemented!");
}

void AddressOperations(char *operation, char*criteria){
	printf("\n\nNot Implemented!");
}

void CityOperations(char *operation, char*criteria){
	printf("\n\nNot Implemented!");
}

void PinCodeOperations(char *operation, char*criteria){
	printf("\n\nNot Implemented!");
}
	
int* init_array(int size) {
	int* arr = (int*)malloc(size * sizeof(int));
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = 0;
	}

	return arr;
}

int kmp(char* t, char* p) {
	int m = strlen(p);
	int n = strlen(t);

	int* f = init_array(m);
	int i = 0;
	int j = 0;

	while (i < n)
		if (t[i] == p[j]) 
			if (j == m - 1) return i - j;
			else {
				i += 1;
				j += 1;
			}
		else 
			if (j > 0) j = f[j - 1];
			else i += 1;

	return -1;
}

void failure(char* p, int* f) {
	f[0] = 0;
	int i = 1;
	int j = 0;

	int m = strlen(p);

	while (i < m) {
		if (p[i] == p[j]) {
			f[i] = j + 1; // j+1 matches up to the current character.
			i += 1;
			j += 1;
		}
		else if (j > 0) {
			j = f[j - 1];
		}
		else {
			f[i] = 0;
			i += 1;
		}
	}
}

void NameOperations(char *operation, char *criteria){
	if (!strcmp("ct", toLower(operation)))
	{
		printf("\n%s\t%10s\n","RollNo","Name");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (kmp(marks[i]->Name,criteria)!= -1)
				printf("%d\t%10s\n", marks[i]->RollNo, marks[i]->Name);
		}
	}
	else if (!strcmp("sw", toLower(operation)))
	{
		printf("\n%s\t%10s\n","RollNo","Name");
		for (int i = 0; i <= globals.MarksCurrent; i++)
		{
			if (StartsWith(marks[i]->Name,criteria))
				printf("%d\t%10s\n", marks[i]->RollNo, marks[i]->Name);
		}
	}
	else
		printf("\nInvalid Operation!");
}

void Query()
{
	printf("\n\nAvailable Operations :\n\t-> M1 LT / GT / LE / GE / EQ <criteria>\n\t-> M2 LT / GT / LE / GE / EQ <criteria>\n\t-> M3 LT / GT / LE / GE / EQ <criteria>\n\t-> M4 LT / GT / LE / GE / EQ <criteria>\n\t-> Avg LT / GT / LE / GE / EQ <criteria> \n\t-> CGPA LT / GT / LE / GE / EQ <criteria>\n\t-> name CT / SW <criteria>\n\n\t* CT - Contains, SW - Starts With\n");
	printf("\nEnter your query : ");

	char query[100];
	scanf(" %[^\n]", query);

	if (getSpaces(query) < 2){
		printf("\nInsufficient arguments");
		return;
	}

	char variable[100], operation[100], criteria[100];

	strcpy(variable, strtok(query, " "));
	strcpy(operation, strtok(NULL, " "));
	strcpy(criteria, strtok(NULL, "\n"));

	if (variable == NULL || operation == NULL || criteria == NULL)
	{
		printf("\n\tInsufficient Arguments.");
		return;
	}

	if (globals.MarksCurrent < 0 || globals.InfoCurrent < 0)
	{
		printf("Insufficient Data");
		return;
	}

	if (!strcmp(toLower(variable), "m1"))
		M1Operations(operation, criteria);

	else if (!strcmp(toLower(variable), "m2"))
		M2Operations(operation, criteria);

	else if (!strcmp(toLower(variable), "m3"))
		M3Operations(operation, criteria);

	else if (!strcmp(toLower(variable), "m4"))
		M4Operations(operation, criteria);

	else if (!strcmp(toLower(variable), "avg"))
		AvgOperations(operation, criteria);

	else if (!strcmp(toLower(variable), "cgpa"))
		CGPAOperations(operation, criteria);

	else if (!strcmp(toLower(variable), "phone"))
		PhoneOperations(operation, criteria);

	else if (!strcmp(toLower(variable), "addr"))
		AddressOperations(operation, criteria);

	else if (!strcmp(toLower(variable), "city"))
		CityOperations(operation, criteria);

	else if (!strcmp(toLower(variable), "pincode"))
		PinCodeOperations(operation, criteria);

	else if (!strcmp(toLower(variable), "name"))
		NameOperations(operation, criteria);

	else
		printf("\nInvalid Arguments");

	
}

void QueryString(char *variable, char *operation, char *criteria)
{
	if (globals.MarksCurrent < 0 || globals.InfoCurrent < 0)
	{
		printf("Insufficient Data");
		return;
	}

	if (!strcmp(toLower(variable), "m1"))
		M1Operations(operation, criteria);

	if (!strcmp(toLower(variable), "m2"))
		M2Operations(operation, criteria);

	if (!strcmp(toLower(variable), "m3"))
		M3Operations(operation, criteria);

	if (!strcmp(toLower(variable), "m4"))
		M4Operations(operation, criteria);

	if (!strcmp(toLower(variable), "avg"))
		AvgOperations(operation, criteria);

	if (!strcmp(toLower(variable), "cgpa"))
		CGPAOperations(operation, criteria);

	if (!strcmp(toLower(variable), "phone"))
		PhoneOperations(operation, criteria);

	if (!strcmp(toLower(variable), "Addr"))
		AddressOperations(operation, criteria);

	if (!strcmp(toLower(variable), "city"))
		CityOperations(operation, criteria);

	if (!strcmp(toLower(variable), "pincode"))
		PinCodeOperations(operation, criteria);

	if (!strcmp(toLower(variable), "name"))
		NameOperations(operation, criteria);
}

// Main

int getFields(char *query)
{
	int i = 0, count = 0;
	while (query[i]!='\0')
	{
		if (query[i] == ',' || query[i]=='\n')
			count++;
		i++;
	}
	return count;
}

void AddStudentMarks(char *line, int index)
{
	char *line1 = _strdup(line);

	struct Marks *temp = (Marks*)malloc(sizeof(Marks));

	temp->RollNo = atoi(strtok(line1, ","));
	strcpy(temp->Name, strtok(NULL, ","));
	temp->M1 = atoi(strtok(NULL, ","));
	temp->M2 = atoi(strtok(NULL, ","));
	temp->M3 = atoi(strtok(NULL, ","));
	temp->M4 = atoi(strtok(NULL, "\n"));
	
	temp->avg = -1;
	temp->CGPA = -1;

	marks[index] = temp;
}

int GetRollNo(char *line)
{
	return atoi(strtok(line, ","));
}

void AddInfo(char *line, int index){
	char *line1 = _strdup(line);

	struct Info *temp = (Info*)malloc(sizeof(Info));

	temp->RollNo = atoi(strtok(line1, ","));
	strcpy(temp->phone, strtok(NULL, ","));
	strcpy(temp->Address, strtok(NULL, ","));
	strcpy(temp->City, strtok(NULL, ","));
	strcpy(temp->pincode, strtok(NULL, "\n"));

	info[index] = temp;
}

void ComputeAverage(){
	printf("\n\nComputing Average");
	for (int i = 0; i <= globals.MarksCurrent; i++)
	{
		marks[i]->avg = (float)(marks[i]->M1 + marks[i]->M2 + marks[i]->M3 + marks[i]->M4) / 4;
	}
	printf("\n\nAverages computed successfully!\n");
}

int getCGPA(int marks)
{
	if (marks  >= 90 && marks  <= 100)	return 10;
	else if (marks  >= 80 && marks  < 90)	return 9;
	else if (marks  >= 70 && marks  < 80)	return 8;
	else if (marks  >= 60 && marks  < 70)	return 7;
	else if (marks  >= 50 && marks  < 60)	return 6;
	else if (marks  >= 40 && marks  < 50)	return 5;
	else if (marks  >= 30 && marks  < 40)	return 4;
	else if (marks >= 20 && marks  < 30)	return 3;
	else if (marks >= 10 && marks  < 20)	return 2;
	else if (marks >= 0 && marks  < 10)		return 1;
	else return 0;
}

void ComputeCGPA(){
	printf("\n\nComputing CGPA");
	for (int i = 0; i <= globals.MarksCurrent; i++)
	{
		marks[i]->CGPA = (getCGPA(marks[i]->M1) + getCGPA(marks[i]->M2) + getCGPA(marks[i]->M3) + getCGPA(marks[i]->M4)) / 4;
	}
	printf("\n\CGPA computed successfully!\n");
}

void ShowMarks()
{
	printf("%5s\t     %s\t%s\t%s\t%s\t%s\t%s\t%s\n", "RollNo","Name","M1","M2","M3","M4","Average","CGPA");
	for (int i = 0; i <= globals.MarksCurrent; i++)
	{
		printf("%d\t%10s\t%d\t%d\t%d\t%d\t%0.2f\t%0.2f\n", marks[i]->RollNo, marks[i]->Name, marks[i]->M1, marks[i]->M2, marks[i]->M3, marks[i]->M4, marks[i]->avg, marks[i]->CGPA);
	}
}

void ShowInfo()
{
	printf("%s\t      %s\t\t\t %s\t \t %s\t%s\n","RollNo","Phone","Address","City","Pincode");
	for (int i = 0; i < globals.InfoCurrent; i++)
	{
		printf("%7d\t %11s\t %25s\t %12s\t %s\n", info[i]->RollNo, info[i]->phone, info[i]->Address, info[i]->City, info[i]->pincode);
	}
}

void SaveMarks()
{
	char *outputFile = (char*)malloc(sizeof(char) * 1024);

	printf("\nEnter the destination file :");
	scanf(" %s", outputFile);

	FILE* output = fopen(outputFile, "w");

	for (int i = 1; i <= globals.MarksCurrent; i++)
	{
		fprintf(output, "%s,%d,%d,%d,%d,%d,%.2f,%.2f\n", marks[i]->Name, marks[i]->RollNo, marks[i]->M1, marks[i]->M2, marks[i]->M3, marks[i]->M4, marks[i]->avg, marks[i]->CGPA);
	}

	printf("\nFile saved successfully.");
	fclose(output);
}

void SaveAddress()
{
	char *outputFile = (char*)malloc(sizeof(char) * 1024);

	printf("\nEnter the destination file :");
	scanf(" %s", outputFile);

	FILE* output = fopen(outputFile, "w");

	for (int i = 1; i <= globals.MarksCurrent; i++)
	{
		fprintf(output, "%d,%s,%s,%s,%s\n", info[i]->RollNo, info[i]->phone, info[i]->Address, info[i]->City, info[i]->pincode);
	}

	printf("\nFile saved successfully.");
	fclose(output);
}

void ShowJoined()
{
	printf("%5s\t%10s\t%s\t%s\t%s\t%s\t %s\t %s%15s%40s%15s%10s\n", "RollNo", "Name", "M1", "M2", "M3", "M4", "Avg", "CGPA", "Phone", "Address", "City", "  Pincode");
	for (int i = 0; i <= globals.MarksCurrent; i++)
	{
		printf("%5d\t%10s\t%d\t%d\t%d\t%d\t%0.2f\t%0.2f", marks[i]->RollNo, marks[i]->Name, marks[i]->M1, marks[i]->M2, marks[i]->M3, marks[i]->M4, marks[i]->avg, marks[i]->CGPA);
		for (int j = 0; j <= globals.InfoCurrent; j++)
		{
			if (marks[i]->RollNo == info[j]->RollNo){
				printf("%15s%40s%15s%10s", info[j]->phone, info[j]->Address, info[j]->City, info[j]->pincode);
				break;
			}
		}
		printf("\n");
	}
}

void resizeMarksArray(){
	if (globals.MarksCurrent == globals.MarksSize - 1)
	{
		struct Marks **temp = (Marks**)malloc(2 * globals.MarksSize*sizeof(Marks));

		for (int i = 0; i <= globals.MarksCurrent; i++)
			temp[i] = marks[i];

		globals.MarksSize *= 2;
		marks = temp;
	}
	else return;
}

void resizeInfoArray(){
	if (globals.InfoCurrent == globals.InfoSize - 1)
	{
		struct Info **arr = (Info**)malloc(2 * globals.InfoSize*sizeof(Info));

		for (int i = 0; i < globals.MarksCurrent; i++)
			arr[i] = info[i];

		globals.InfoSize *= 2;
		info = arr;
	}
	else
		return;
}

void loadMarks()
{
	char *inputFile = (char*)malloc(sizeof(char) * 1024);

	char line[1024];
	char temp[1024];
	bool overwrite = false;
	bool first = true;

	printf("\nEnter the source file :");
	scanf(" %s", inputFile);

	FILE* input = fopen(inputFile, "r");
	if (input == NULL){
		printf("\nInput file cannot be opened.\n");
		return;
	}

	
	//printf("\nDoes your file contains headers?\nEnter '1' for yes and '2' for no :");
	//int headers;
	//Invalid:
	//scanf("%d", &headers);

	//switch (headers)
	//{
	//case 1:
	//	fgets(line, 1024, input);
	//	strcmp(temp, line);
	//	break;
	//case 2:
	//	printf("");
	//	break;
	//default:
	//	printf("\nInvalid choice. Please enter it again :");
	//	goto Invalid;
	//	break;
	//}

	fgets(line, 1024, input);

	if (getFields(line) != 6){
		printf("\nError getting details!");
		fclose(input);
		return;
	}

	printf("\nHeader lines skipped.");

	while (fgets(line, 1024, input))
	{
		if (getFields(line) != 5){
			printf("\nError getting details!");
			fclose(input);
			return;
		}

		strcpy(temp, line);
		int flag = false;
		int rollno = GetRollNo(temp);
		int i = 0;

		for (i = 0; i <= globals.MarksCurrent; i++){
			if (rollno == marks[i]->RollNo)
			{
				flag = true;
				break;
			}
		}

		if (!overwrite && first && flag)
		{
			printf("\nFound duplicates\nPress '1' to overwrite and '2' to skip\n*Applies to entire file import\n\nEnter your choice : ");

			int ch;

		InvalidChoice:
			scanf("%d", &ch);

			switch (ch)
			{
			case 1:
				overwrite = true;
				break;
			case 2:
				overwrite = false;
				break;
			default:
				printf("Invalid choice");
				goto InvalidChoice;
			}
			first = false;
			if (overwrite == false)
				return;
		}

		if (!flag)
		{
			resizeMarksArray();
			globals.MarksCurrent++;
			AddStudentMarks(line, globals.MarksCurrent);
		}
		else if (flag && overwrite)
				AddStudentMarks(line, i);
	}
	fclose(input);

	printf("\nFile loaded successfully!");
}

void loadInfo()
{
	char *inputFile = (char*)malloc(sizeof(char) * 1024);
	char line[1024];
	char temp[1024];
	bool overwrite = false;
	bool first = true;

	printf("\nEnter the source file :");
	scanf(" %s", inputFile);

	FILE* input = fopen(inputFile, "r");
	if (input == NULL){
		printf("\nInput file cannot be opened.\n");
		return;
	}
	
//	printf("\nDoes your file contains headers?\nEnter '1' for yes and '2' for no :");
//	int headers;
//Invalid:
//	scanf("%d", &headers);
//
//	switch (headers)
//	{
//	case 1:
//		fgets(line, 1024, input);
//		break;
//	case 2:
//		printf("");
//		break;
//	default:
//		printf("\nInvalid choice. Please enter it again :");
//		goto Invalid;
//		break;
//	}
	
	fgets(line, 1024, input);

	if (getFields(line) != 5){
		printf("\nError getting details!");
		fclose(input);
		return;
	}

	printf("\nHeader lines skipped.");


	while (fgets(line, 1024, input))
	{
		if (getFields(line) != 5){
			printf("\nError getting details!");
			fclose(input);
			return;
		}

		strcpy(temp, line);
		int flag = false;
		int rollno = GetRollNo(temp);
		int i = 0;

		for (int i = 0; i <= globals.InfoCurrent; i++){

			if (rollno == info[i]->RollNo){
				flag = true;
				break;
			}
		}

		if (!overwrite && first && flag)
		{
			printf("\nFound duplicates\nPress '1' to overwrite and '2' to skip\n*Applies to entire file import\n\nEnter your choice : ");

			int ch;

		InvalidChoice:
			scanf("%d", &ch);

			switch (ch)
			{
			case 1:
				overwrite = true;
				break;
			case 2:
				overwrite = false;
				break;
			default:
				printf("Invalid choice");
				goto InvalidChoice;
			}
			first = false;
		}

		if (!flag)
		{
			resizeInfoArray();
			globals.InfoCurrent++;
			AddInfo(line, globals.InfoCurrent);
		}
		else if (flag && overwrite)
			AddInfo(line, i);
	}
	fclose(input);

	printf("\nFile loaded successfully!");
}

void main()
{
	marks = (Marks**)malloc(sizeof(Marks*) * 10);
	info = (Info**)malloc(sizeof(Info*) * 10);

	int choice;
	bool close = false;
	while (!close)
	{

	InvalidChoice:
		printf("\n\n\t1.  Load Marks\n\t2.  Show Marks\n\t3.  Compute Average\n\t4.  Compute CGPA\n\t5.  Save Marks\n\t6.  Load Info\n\t7.  Show Address Info\n\t8.  Save Address\n\t9.  Join Marks and Info\n\t10.  Query\n\t11.  Hash\n\t12.  Parse Syntax and Execute (WHERE CLAUSE)\n\t13.  Exit\n\nEnter your choice :");


		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			loadMarks();
			break;
		case 2:
			ShowMarks();
			break;
		case 3:
			ComputeAverage();
			break;
		case 4:
			ComputeCGPA();
			break;
		case 5:
			SaveMarks();
			break;
		case 6:
			loadInfo();
			break;
		case 7:
			ShowInfo();
			break;
		case 8:
			SaveAddress();
			break;
		case 9:
			ShowJoined();
			break;
		case 10:
			Query();
			break;
		case 11:
			HashMain();
			break;
		case 12:
			SyntaxParserMain();
			break;
		case 13:
			close = true;
			printf("\nExiting!\n");
			break;
		default:
			printf("\nInvalid choice.");
			goto InvalidChoice;
			break;
		}
	}
}