#include <cstdio>
int cnt = 0, ans = 0, ch, pch;
int main() {
	while ((ch=getchar()) != '\n') {
		if (ch == '(') cnt++;
		else cnt--, ans += pch == '(' ? cnt : 1;
		pch = ch;
	}
	printf("%d", ans);
}