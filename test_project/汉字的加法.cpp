#include<stdio.h>
#include<iostream>
using namespace std;
/*���ж�'��'��Ӧ1,
('��'+1=10+'��')��('��'+1=10+'��'-1)
��'��'��0-9֮��,
ֻ��'��'Ϊ9ʱ,���ܽ�λ,��ʱ'��'Ϊ0.�����ƶϳ�'��'Ϊ8.��'��'='��'+1.
֮��ö�����µ�
	��a  (��a+1)  ��b
+	           8	     ��a
------------------
(��a+1)     ��b      ��c
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