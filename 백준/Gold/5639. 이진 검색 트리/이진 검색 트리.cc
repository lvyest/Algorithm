#include <iostream>
#include <vector>
using namespace std;

vector<int> preorder;

void postorder(int start, int end) {
    if (start > end) return;

    int root = preorder[start];
    int idx = start + 1;

    // 오른쪽 서브트리 시작점 찾기
    while (idx <= end && preorder[idx] < root) {
        idx++;
    }

    // 왼쪽 서브트리
    postorder(start + 1, idx - 1);

    // 오른쪽 서브트리
    postorder(idx, end);

    // 루트 출력
    cout << root << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int x;
    while (cin >> x) {
        preorder.push_back(x);
    }

    postorder(0, preorder.size() - 1);
}