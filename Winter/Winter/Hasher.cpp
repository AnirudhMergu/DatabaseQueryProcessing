#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include"Hasher.h"

HashTable* CreateHashTable(int size)
{
	HashTable *hashtable = (HashTable*)malloc(sizeof(HashTable));

	if (size < 1){
		printf("\nSize error.");
		return NULL;
	}

	if (hashtable == NULL){
		return NULL;
	}

	hashtable->table = (Pair**)malloc(sizeof(Pair*) * 6);

	for (int i = 0; i < size; i++)
		hashtable->table[i] = NULL;

	hashtable->size = size;

	return hashtable;
}

int GenerateHash(HashTable *hashtable, char *key)
{
	int hashval = 0;
	int i = 0;

	while (key[i]!='\0')
	{
		hashval += key[i];
		i++;
	}

	return hashval % (hashtable->size);
}

Pair* CreateNewPair(char *key, char *value)
{
	Pair *newpair = (Pair*)malloc(sizeof(Pair));

	if (newpair == NULL)
		return NULL;

	strcpy(newpair->key, key);
	strcpy(newpair->value, value);
	newpair->next = NULL;

	return newpair;
}

void set(HashTable *hashtable, char *key, char *value)
{
	int hash = 0;

	Pair *newpair = NULL;
	Pair *next = NULL;
	Pair *last = NULL;

	hash = GenerateHash(hashtable, key);

	next = hashtable->table[hash];

	while (next!=NULL && next->key !=NULL && strcmp(key,next->key)!=0)
	{
		last = next;
		next = next->next;
	}

	if (next != NULL && next->key != NULL && strcmp(key, next->key) == 0)
	{
		free(next->value);
		strcpy(next->value,_strdup(value));
	}
	else
	{
		newpair = CreateNewPair(key, value);

		if (next == hashtable->table[hash])
		{
			newpair->next = next;
			hashtable->table[hash] = newpair;
		}
		else if (next == NULL)
		{
			last->next = newpair;
		}
		else
		{
			newpair->next = next;
			last->next = newpair;
		}
	}
}

char* getValue(HashTable *hashtable, char *key)
{
	int hash = 0;
	Pair *pair;

	hash = GenerateHash(hashtable, key);

	pair = hashtable->table[hash];

	while (pair != NULL && pair->key != NULL && strcmp(key, pair->key) > 0)
		pair = pair->next;

	if (pair == NULL || pair->key == NULL || strcmp(key, pair->key) != 0)
		return NULL;
	else
		return pair->value;
}

void HashMain(){
	int choice;
	bool close = false;
	char key[100], value[100];
	HashTable *hashtable = CreateHashTable(6);
	while (!close)
	{
		printf("\n\n\t1. Insert\n\t2. Show\n\t3. Exit\n\nEnter your choice :");

	InvalidChoice:
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\nEnter key :");
			scanf("%s", key);
			printf("\nEnter value :");
			scanf("%s", value);
			set(hashtable, key, value);
			break;
		case 2:
			printf("\nEnter key :");
			scanf("%s", key);
			if (getValue(hashtable, key) == NULL)
				printf("\nNot found!");
			else
				printf("Key : %s, Value: %s", key, getValue(hashtable, key));
			break;
		case 3:
			return;
			break;
		default:
			printf("Enter valid choice : ");
			goto InvalidChoice;
			break;
		}
	}
}