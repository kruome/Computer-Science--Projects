//Kalden Yugyel Dorji
//Assignment #1 Problem 1

#include<iostream>
using namespace std;

print
class Item
{
private:
	int itemNO;
	string name;
public:
	Item() {
		itemNO = 0;
		name = "abc";
	}
	Item(int itemNO, string name){
		this->itemNO = itemNO;
		this->name = name;
	}
	int getitemNO() {
		return itemNO;
	}
	void setitemNO(int num) {
		itemNO = num;
	}
	string getname() {
		return name;
	}
	void setname(string n) {
		name = n;
	}
};

int main(){
    Item Product[6] = {Item(), Item(1,"Soap"), Item(2,"Box"), Item(3,"Shirt");
}
