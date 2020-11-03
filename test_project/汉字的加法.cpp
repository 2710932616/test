#include<stdio.h>
#include<iostream>
using namespace std;
/*先判断'三'对应1,
('祥'+1=10+'羊')或('祥'+1=10+'羊'-1)
且'祥'在0-9之间,
只有'祥'为9时,才能进位,此时'羊'为0.进而推断出'献'为8.且'生'='瑞'+1.
之后枚举余下的
	瑞a  (瑞a+1)  辉b
+	           8	     瑞a
------------------
(瑞a+1)     瑞b      气c
*/
int main() {
	int a, b, c;
	int d = 108;
	for ( a = 2; a < 7; a++)
	{
		for (b = 2; b < 8; b++)
		{
			if (b == a||b==a+1) continue;
			c = a + b - 10;
			if (c < 5 && c>1 && c != a && c != b)
				cout << d << a;
		}
	}
	return 0;
	}