#include <stdio.h>
#include <stdbool.h>

typedef char String[1024];
typedef struct {
	String title;
	String from;
	String datetime;
	int size;
	bool attached;
	String body;
} Mail;

int main(void)
{
	Mail m = {"あけましておめでとう", "sugawara@miyabilink.jp", "2018/01/01 10:10:58", 302, false};
	/*	String isAttached;
	if (m.attached) {
	printf("%sさんから、%sにメールです。サイズは%dKB、%s", m.from, m.datetime, m.size, "添付ファイルはあります。");
	} else {
	printf("%sさんから、%sにメールです。サイズは%dKB、%s", m.from, m.datetime, m.size, "添付ファイルはありません。");
	};
	*/
	/*
	# 三項条件演算子

	- 条件式が満たされれば1、そうでなければ2になる。
		- 条件式?値1:値2
	*/
	printf("%sさんから、%sにメールです。サイズは%dKB、%s\n", m.from, m.datetime, m.size, m.attached?"添付ファイルはあります。":"添付ファイルはありません。");
	return 0;
}
