#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int count = 0;

	for (int h = 0; h < 5; h++) {
		for (int m = 0; m < 10; m++) {
			for (int s = 0; s < 10; s++) {
				count++;
				cout << h << m << s << count << endl;
				Sleep(100);
			}
		}
	}

	system("pause");
	return 0;
}