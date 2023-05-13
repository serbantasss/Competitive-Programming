#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <queue>

#define MXN 5001000

using namespace std;

int cols, rows, w1, w2;
int pc, len;
int stack_left[MXN][2], h_left;
int stack_right[MXN][2], h_right;
int pos_left_w1 = 0, pos_left_w2 = 0;
int pos_right_w1 = 0, pos_right_w2 = 0;
long long res = 0;

int main() {
int a;
FILE * fin=fopen("1.in", "r");
FILE * fout=fopen("1.out", "w");
fscanf(fin,"%d%d%d%d", &cols, &rows, &w1, &w2);
	for (a = 0; a < rows; a++ ) {
		fscanf(fin,"%d%d", &pc, &len);
		while (h_left > 0 && stack_left[h_left-1][0] <= pc)
			h_left--;
		stack_left[h_left][0] = pc;
		stack_left[h_left][1] = a;
		h_left++;

		while (h_right > 0 && pc + len <= stack_right[h_right-1][0])
			h_right--;
		stack_right[h_right][0] = pc + len;
		stack_right[h_right][1] = a;
		h_right++;

		if (pos_left_w1 >= h_left)
			pos_left_w1 = h_left-1;
		if (stack_left[pos_left_w1][1] + w1 <= a)
			pos_left_w1++;

		if (pos_left_w2 >= h_left)
			pos_left_w2 = h_left-1;
		if (stack_left[pos_left_w2][1] + w2 <= a)
			pos_left_w2++;

		if (pos_right_w1 >= h_right)
			pos_right_w1 = h_right-1;
		if (stack_right[pos_right_w1][1] + w1 <= a)
			pos_right_w1++;

		if (pos_right_w2 >= h_right)
			pos_right_w2 = h_right-1;
		if (stack_right[pos_right_w2][1] + w2 <= a)
			pos_right_w2++;

		if (w1 <= a + 1)
			res += max(stack_right[pos_right_w1][0] - stack_left[pos_left_w1][0] - w2 + 1, 0);

		if (w2 <= a + 1 && w1 != w2)
			res += max(stack_right[pos_right_w2][0] - stack_left[pos_left_w2][0] - w1 + 1, 0);

	}
fclose(fin);
fprintf(fout, "%lld\n", res);
fclose(fout);
return 0;
}

