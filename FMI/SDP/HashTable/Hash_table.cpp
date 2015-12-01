#include<iostream>
#include"Hash_table.h"
using namespace std;

HashEntry::HashEntry(int key, int value) {
	this->key = key;
	this->value = value;
}
HashEntry::~HashEntry() {

}




HashTable::HashTable(int size) {
	this->size = size;
	this->table = new HashEntry*[this->size];
	for (int i = 0; i < size; i++)
	{
		table[i] = NULL;
	}
}
HashTable::~HashTable() {
	for (int i = 0; i < size; i++)
	{
		if (table[i] != NULL) {
			delete table[i];
		}
	}
	delete[] table;
}

int HashTable::hashFunction(int key) {
	return key % size;
}

void HashTable::insert(int key, int value) {
	int hash = hashFunction(key);
	while (table[hash] != NULL && table[hash]->key != key)
	{
		hash = hashFunction(hash + 1);
	}
	if (table[hash] != NULL)
	{
		delete table[hash];
	}
	table[hash] = new HashEntry(key, value);
}

void HashTable::remove(int key) {
	int hash = hashFunction(key);
	while (table[hash] != NULL) {
		if (table[hash]->key == key)
		{
			break;
		}
		hash = hashFunction(hash + 1);
	}
	if (table[hash] == NULL)
	{
		cout << "Sorry not element found!" << endl;
		return;
	}
	cout << "Delete element!" << endl;
	table[hash] = NULL;
}




int HashTable::search(int key) {
	int hash = hashFunction(key);
	while (table[hash] != NULL && table[hash]->key != key)
	{
		hash = hashFunction(hash + 1);
	}
	if (table[hash] == NULL) {
		cout << "Sorry that number doesnt exist!" << endl;
		throw exception("Sorry that number doesn't exist!");
	}
	return table[hash]->value;
}
void HashTable::print()const {
	for (int i = 0; i < size; i++)
	{
		if (table[i] != NULL)
		{
			cout << table[i]->value << endl;
		}
	}
}

int main() {
	HashTable table(4);
	table.insert(2, 5);
	table.insert(3, 6);
	table.insert(4, 7);
	table.insert(102, 102);
	table.print();
} 