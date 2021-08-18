#include <iostream>
#include <vector>

using namespace std;

string solution(int n) {
	
	string answer = "";
	int a;
	while (n > 0) {
		a = n % 3;
		n = n / 3;
		if (a == 0) {
			n -= 1;
		}
		answer = "412"[a] + answer;
	}
	return answer;
}