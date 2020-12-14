```cpp
bool is_symmetric(int a[], int size);

int main() {
	int array[5] = { 1,2,3,2,1 };
	if (is_symmetric(array, 5)) {
		cout << "symmetric";
	}
	else {
		cout << "no";
	}
}
bool is_symmetric(int a[], int size) {
	int count=0;
	for (int i = 0; i < size; i++) {
		if (a[i] == a[(size-1) - count]) {
			count++;
			continue;
		}
		else {
			return false;
		}
	}
	return true;
  ```
