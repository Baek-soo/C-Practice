#include <iostream>
using namespace std;
long long solution(int price, int money, int count) {
	for (int i = 1; i <= count; i++) {
		money = money - price * i;
	}
	return -money;
}


// 미친 문제 풀이
// #include <bits/stdc++.h>
// using namespace std;

// long long solution(int price, int money, int count)
// {
//     long long required = 1LL * price * count * (count + 1) / 2;
//     return required <= money ? 0 : required - money;
// }