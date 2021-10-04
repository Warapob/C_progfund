#include<stdio.h>
int h, m1, s1, m2, s2,s3,m3;
char t[3];
int main() {
	scanf("%d %d %d %s %d %d", &h, &m1, &s1, &t, &m2, &s2);
	s3 = s1 + s2;
	m3 = m1 + m2;
	while (s1 + s2 >= 60 || m1 + m2 >= 60) {
		if (s1 + s2 >= 60) {
			s3 = 60 - (s1 + s2);
			m3++;
			if (m1 + m2 >= 60) {
				m3 = 60 - (m1 + m2);
				h++;
			}
		}
		else if (m1 + m2 >= 60) {
			m3 = 60 - (m1 + m2);
			h++;
		}
	}
	printf("%d : %d : %d %s",h, m3, s3, t );
}
