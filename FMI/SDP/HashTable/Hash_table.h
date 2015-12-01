#ifndef Hash_Table_H
#define Hash_Table_H

class HashEntry {
public:
	int key;
	int value;
	HashEntry(int, int);
	~HashEntry();
};

class HashTable {
private:
	HashEntry** table;
	int size;
public:
	HashTable(int);
	~HashTable();

	int hashFunction(int);
	
	void insert(int, int);
	int search(int);
	void remove(int);
	void print()const;
};


#endif
