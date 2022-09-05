#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;
	while (0 < (n--)) {
		auto k = int{};
		cin >> k;
		while (0 < (k--)) {
			cout << '=';
		}
		cout << '\n';
	}

	return 0;
}