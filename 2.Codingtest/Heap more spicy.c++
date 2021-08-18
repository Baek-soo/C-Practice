#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int solution(vector<int> scoville, int k){
    int count = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

    while(pq.top() < k){
        if (pq.size() == 1) return count = -1;
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        pq.push(first+(second*2));
        count += 1;
        }
    return count;
}

// 미친 문제 풀이
// #include <vector>
// #include <queue>
// using namespace std;

// int solution(vector<int> scoville, int K) {
//     int answer = 0;
//     int needHot;
//     priority_queue<int,vector<int>,greater<int>> pq (scoville.begin(),scoville.end());

//     while(pq.top()<K) {
//         if(pq.size()==1) return answer = -1;
//         needHot=pq.top(); pq.pop();
//         pq.push(needHot+pq.top()*2);
//         pq.pop(); answer++;
//     }

//     return answer;
// }