#include<stdio.h>
int A[9], B[9], C[9];
int main() {
	for (int i = 0; i < 9; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < 9; i++) {
		scanf("%d", &B[i]);
	}
	C[0] = (A[0] * B[0]) + (A[1] * B[3]) + (A[2] * B[6]);
	C[1] = (A[0] * B[1]) + (A[1] * B[4]) + (A[2] * B[7]);
	C[2] = (A[0] * B[2]) + (A[1] * B[5]) + (A[2] * B[8]);
	C[3] = (A[3] * B[0]) + (A[4] * B[3]) + (A[5] * B[6]);
	C[4] = (A[3] * B[1]) + (A[4] * B[4]) + (A[5] * B[7]);
	C[5] = (A[3] * B[2]) + (A[4] * B[5]) + (A[5] * B[8]);
	C[6] = (A[6] * B[0]) + (A[7] * B[3]) + (A[8] * B[6]);
	C[7] = (A[6] * B[1]) + (A[7] * B[4]) + (A[8] * B[7]);
	C[8] = (A[6] * B[2]) + (A[7] * B[5]) + (A[8] * B[8]);
	for (int i = 0; i < 9; i++) {
		if (i == 3 || i == 6) {
			printf("\n");
		}
		printf("%d ", C[i]);
	}
}