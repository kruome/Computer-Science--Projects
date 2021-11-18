void fun3(int n) {
	int sum1 = 0; //c1 * 1
	int sum2 = 0; //c2 * 1

	for (int i = 0; i < n; i++) { //c3 * n
		sum1 = sum1 + 1; //c4 * n
	}
	for (int j = 0; j < n; j + 1) { //c5 * n
		sum2 = sum2 + j; //c6 * n
	}
	std::cout << sum1 << sum2; //c7

	c1  +  c2  + c3n + c4n + c5n + c6n + c7
	
	(c3 + c4 + c5 + c6)n + (c1+c2+c7)

		a(n) + b
}

void fun4(int n) {
	int sum = 0; //1 * c1
 
	for (int i = 0; i < n; i++) { //n * c2
 		for (int j = 0; j < n; j++) { //n^2 * c3
			sum = sum + j; // n^2 * c4
		}
	}
	std::cout << sum; //1 * c5

	c1 + c2n + c3n^2 + c4n^2 + c5

		a(n^2) + b(n) + c
}

for i = 2 to N{ //c1 * (n-1)
	Key = A[j]; //c2 * (n-1)
	i = j - 1; //c3 * (n-1)
	while (i > 0 && key < A[i]){ //c4 * summation of (under) j = 2 (top) n of tj
		A[i + 1] = A[i]; //c5 * summation of (under) j = 2 (top) n of tj
		i = i - 1; //c6 * summation of (under) j = 2 (top) n of tj
	}
	A[i + 1] = key; //c7 * (n-1)
}
