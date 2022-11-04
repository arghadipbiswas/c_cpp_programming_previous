#include <stdio.h>
#define MAX 120

int main() {
	FILE* fin = fopen("input.txt", "r");
	FILE* fout = fopen("output.txt", "w");

	int R[MAX][MAX], G[MAX][MAX], B[MAX][MAX], x1[MAX], y1[MAX], x2[MAX], y2[MAX], A[MAX][MAX];
	int h, w, n, i, j, k;

	fscanf(fin, "%d %d %d", &n, &h, &w);

	for (i = 0; i < n; i++) {
		fscanf(fin, "%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
	}

	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			fscanf(fin, "%d ", &R[i][j]);
		}
	}
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			fscanf(fin, "%d ", &G[i][j]);
		}
	}
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			fscanf(fin, "%d ", &B[i][j]);
		}
	}
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			A[i][j] = 127;
		}
	}
	for (k = 0; k < n; k++) {
		for (i = x1[k]; i <= x2[k]; ++i) {
			G[i][y1[k]] = 255; 
			G[i][y2[k]] = 255;  
			A[i][y1[k]] = 255;
			A[i][y2[k]] = 255;
			R[i][y1[k]] = 0;
			R[i][y2[k]] = 0;
			B[i][y1[k]] = 0;
			B[i][y2[k]] = 0;
		}
		for (j = y1[k]; j <= y2[k]; ++j) {
			G[x1[k]][j] = 255;
			G[x2[k]][j] = 255; 
			A[x1[k]][j] = 255;
			A[x2[k]][j] = 255;
			R[x1[k]][j] = 0;
			R[x2[k]][j] = 0;
			B[x1[k]][j] = 0;
			B[x2[k]][j] = 0;
		}
	}
	for (k = 0; k < n; k++) {
		for (i = x1[k] + 1; i <= x2[k] - 1; i++) {
			for (j = y1[k] + 1; j <= y2[k] - 1; j++) {
				A[i][j] = 255;
			}
		}
	}
	fprintf(fout, "/image %d %d RGBA\n", h, w);
	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			fprintf(fout, "%d %d %d %d ", R[i][j], G[i][j], B[i][j], A[i][j]);
		}
	}

	return 0;
}
