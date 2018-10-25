//hash_table.h 


typedef struct {
	char* key;
	char* value;
	int size;
	int count;
	ht_item** items;
} ht_item;

void ht_insert(ht_hash_table*, const char* key, const char* value);
char* ht_search(ht_hash_table*, const char* key);
void ht_delete(ht_hash_table* h, const char* key);