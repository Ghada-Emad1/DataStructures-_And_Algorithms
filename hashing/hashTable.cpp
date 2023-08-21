#include <iostream>
#include<list>
using namespace std;
class hash_table {
	//initializing a list for every index
	list<int>* tbl;
	int ht_size;

	//hash function to get the index of the keys
	int get_hash(int key) {
		return key % ht_size;
	}
public:
	//constructor for the class hash_table
	hash_table(int n) {
		ht_size = n;
		tbl = new list<int>[ht_size];
	}
	//function to insert keys in the hash table
	void insert(int key) {
		tbl[get_hash(key)].push_back(key);
	}
	//function to display all the keys at their indexes
	void show() {
		for (int i = 0; i < ht_size; i++) {
			cout << "Values at index " << i << " : ";
			for (int num : tbl[i])
			{
				cout << num << " ";
			}
			cout << endl;
		}
	}
};
int main()
{
   //creating an array of keys
	int arr[] = { 52,42,44,66,25,29,32,11,21,90 };

	//find the size of the array
	int size_arr = sizeof(arr) / sizeof(int);

	//initializint the hash table
	hash_table ht(size_arr);
	
	//inserting the elements into the hash code
	for (int i = 0; i < size_arr; i++) {
		ht.insert(arr[i]);
	}
	cout << "The hash table after insertion of elements :" << endl;

	//calling function to display hash table
	ht.show();
	return 0;

}