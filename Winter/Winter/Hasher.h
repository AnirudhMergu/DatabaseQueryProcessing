struct Pair {
	char key[100];
	char value[100];
	struct Pair *next;
};

struct HashTable {
	int size;
	struct Pair **table;
};

HashTable* CreateHashTable(int size);
int GenerateHash(HashTable *hashtable, char *key);
Pair* CreateNewPair(char *key, char *value);
void set(HashTable *hashtable, char *key, char *value);
char* getValue(HashTable *hashtable, char *key);
void HashMain();