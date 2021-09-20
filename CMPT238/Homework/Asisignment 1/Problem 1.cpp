//Kalden Yugyel Dorji
//Assignment #1

#include<iostream>
using namespace std;

class Item{
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
int itemls(Item x[], int size, string value);

void print(Item x[], int size);

int main(){
    Item Product[6] = {Item(0,"Chicken"), Item(1,"Dairy"), Item(2,"Television"), Item(3,"Mattress")};
    cout<<"These are the contents inside the array for 6 items:";
    cout<<"\n" << "\n";
    print(Product, 6); cout << "\n";
    int result = itemls(Product,6,"Dairy");
    
    if(result >= 0){
        cout<<"A match has been found for the item at " << result;
    }else{
        cout<< "There was no such item in the array.";
    }
}

void print(Item x[], int size) {
	for (int i = 0; i < size; i++) {
		cout << x[i].getitemNO()<< " " << x[i].getname() << "  ";
	} cout << "\n";

}

int itemls(Item arr[], int size, string value){
    bool found = false;
    int position = -1;
    int index = size-1;
    
    while(index >= 0 && !found){
        if(arr[index].getname() == value){
            found = true;
            position = index;
        }
        --index;
    }
    return position;
}
