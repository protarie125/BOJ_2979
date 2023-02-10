#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto p = vi(3);
	for (auto i = 0; i < 3; ++i) {
		cin >> p[i];
	}

	auto t = vi(100);
	for (auto i = 0; i < 3; ++i) {
		int x, y;
		cin >> x >> y;
		t[x - 1] += 1;
		t[y - 1] -= 1;
	}

	auto ans = int{ 0 };
	auto now = int{ 0 };
	for (auto i = 0; i < 100; ++i) {
		now += t[i];
		if (0 < now) {
			ans += now * p[now - 1];
		}
	}

	cout << ans;

	return 0;
}