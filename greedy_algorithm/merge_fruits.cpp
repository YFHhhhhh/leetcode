#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    priority_queue<int, vector<int>, greater<int>> heap;
    while (n--) {
        int x;
        cin >> x;
        heap.push(x);
    }
    
    int res = 0;
    while (heap.size() > 1) {
			// Huffman树，贪心思想每次将所有节点中最小的两个相加
        int a = heap.top();
        heap.pop();
        int b = heap.top();
        heap.pop();
        res += a + b;
        heap.push(a + b);// 相加完后要push进去
    }
    
    cout << res << endl;
    
    return 0;
}
