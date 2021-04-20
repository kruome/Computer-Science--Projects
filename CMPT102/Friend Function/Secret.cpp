#include <iostream>
using namespace std;

class Secret
{
private:
	int secret;
public:
	Secret();
	friend int showSecret();
};

int showSecret();

int main()
{
	

	return 0;
}

Secret::Secret()
{
	secret = 7;
}

int showSecret()
{
	Secret s;
	return s.secret;
}
