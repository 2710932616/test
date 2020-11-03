#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int num[20];
int ans[20];
bool vis[20];

void dfs(int index) {
	if (index == 4 && (ans[1] + ans[2] + ans[3] != 38))
		return;
	if (index == 8 && (ans[4] + ans[5] + ans[6] + ans[7] != 38))
		return;
	if (index == 9 && (15 + ans[4] + ans[8] != 38))
		return;
	if (index == 13 && (ans[8] + ans[9] + ans[10] + ans[11] + ans[12] != 38))
		return;
	if (index == 14 && ((13 + ans[5] + ans[9] + ans[13] != 38) || (ans[3] + ans[7] + ans[12] != 38)))
		return;
	if (index == 17 && ((ans[13] + ans[14] + ans[15] + ans[16] != 38) || (13 + ans[6] + ans[11] + ans[16] != 38)))
		return;
	if (index == 18 && ((ans[3] + ans[6] + ans[10] + ans[14] + ans[17] != 38) || (ans[3] + ans[6] + ans[10] + ans[14] + ans[17] != 38)))
		return;
	if (index == 19 && (ans[7] + ans[11] + ans[15] + ans[18] != 38 || ans[4] + ans[9] + ans[14] + ans[18] != 38))
		return;

	if (index == 20) {
		if (ans[17] + ans[18] + ans[19] == 38) {
			cout << ans[8] << ' ' << ans[9] << ' ' << ans[10] << ' ' << ans[11] << ' ' << ans[12] << endl;
			return;
		}
	}

	for (int i = 1; i < 20; i++) {
		if (!vis[i]) {
			vis[i] = true;
			ans[index] = num[i];
			dfs(index + 1);
			vis[i] = false;
		}
	}
}

int main() {
	ans[1] = 15;
	ans[2] = 13;
	vis[13] = vis[15] = true;
	for (int i = 1; i < 20; i++) num[i] = i;
	dfs(3);
	return 0;
}