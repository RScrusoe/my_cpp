#include <cstdio>
#include <iostream>
#include <vector>

//#define DEBUGPATTERNS
//#define DEBUGTOGGLE
//#define DEBUGSOLVER
//#define DEBUGSTEPS

using namespace std;

bool board[32][32];
bool tmpBoard[32][32];
bool testBoard[32][32];
bool patterns[32][32];

char buff[22];

vector<pair<int, int> > steps[10];

int t;

inline void invertCross(bool theBoard[][32], int i, int j, int N) {
	theBoard[i][j] = !theBoard[i][j];
	if ((i-1) >=0) theBoard[i-1][j] = !theBoard[i-1][j];
	if ((i+1) < N) theBoard[i+1][j] = !theBoard[i+1][j];
	if ((j-1) >=0) theBoard[i][j-1] = !theBoard[i][j-1];
	if ((j+1) < N) theBoard[i][j+1] = !theBoard[i][j+1];
}

inline void chaseLights(int N) {
	int i, j;

#ifdef DEBUGPATTERNS
	cout << " Before Chase Lights: " << endl;
	for (i=0; i<N; ++i) {
		for (j=0; j<N; ++j) {
			cout << tmpBoard[i][j] << " ";
		}
		cout << endl;
	}
#endif

	for (i=1; i<N; ++i) {
		for (j=0; j<N; ++j) {
			if (tmpBoard[i-1][j]) {
				invertCross(tmpBoard, i, j, N);
			}
		}
	}

#ifdef DEBUGPATTERNS
	cout << " After Chase Lights: " << endl;
	for (i=0; i<N; ++i) {
		for (j=0; j<N; ++j) {
			cout << tmpBoard[i][j] << " ";
		}
		cout << endl;
	}
#endif
}

inline void resetBoards() {
	int i, j;
	for (i=0; i<32; ++i) {
		for (j=0; j<32; ++j) {
			board[i][j] = false;
			testBoard[i][j] = false;
			tmpBoard[i][j] = false;
			patterns[i][j] = false;
		}
	}
}

inline void findPatterns(int N) {
	int i,j;
	for (i=0; i<N; i++) {
		invertCross(tmpBoard, 0, i, N);
		chaseLights(N);
		for (j=0; j<N; j++) {
			patterns[i][j] = tmpBoard[N-1][j];
			tmpBoard[N-1][j] = false;
		}
	}
}

inline vector<int> getCombination(const bool *pattern, int N) {
	int i, j, k;
	for (i=0; i<N; ++i) {
		for (j=0; j<N; ++j) {
			tmpBoard[i][j] = patterns[i][j];
		}
	}
	for (i=0; i<N; ++i) {
		tmpBoard[i][N] = pattern[i];
	}

	// eliminate to get upper triangle matrix
	for (i=0; i<N; ++i) {
		if (!tmpBoard[i][i]) {
			// find some row after current row with ith col val = 1
			for (k=i+1; k<N; ++k) {
				if (tmpBoard[k][i]) break;
			}
			if (k==N) break; // unsuccessful.. probably the end
			// and xor with it along with final col
			for (j=0; j<N+1; ++j) {
				tmpBoard[i][j] ^= tmpBoard[k][j];
			}
		}
		// set the remaining values in the ith col to 0
		for (k=i+1; k<N; ++k) {
			if (tmpBoard[k][i]) {
				for (j=0; j<N+1; ++j) {
					tmpBoard[k][j] ^= tmpBoard[i][j];
				}
			}
		}
	}

#ifdef DEBUGTOGGLE
	printf("after eliminating to get upper triangular matrix: \n");
	for (i=0; i<N; i++) {
		for (j=0; j<N+1; j++) {
			printf("%d ", tmpBoard[i][j]);
		}
		printf("\n");
	}
#endif
	// eliminate to get a diagonalize the matrix
	for (i=0; i<N; ++i) {
		for (k=i+1; k<N; ++k) {
			// eliminate the 1 by xoring with kth row
			if (tmpBoard[i][k]) {
				for (j=0; j<N+1; ++j) {
					tmpBoard[i][j] ^= tmpBoard[k][j];
				}
			}
		}
	}
#ifdef DEBUGTOGGLE
	printf("after eliminating to get diagonal matrix: \n");
	for (i=0; i<N; i++) {
		for (j=0; j<N+1; j++) {
			printf("%d ", tmpBoard[i][j]);
		}
		printf("\n");
	}
#endif

	vector<int> result;
	for (i=0; i<N; i++) {
		if (tmpBoard[i][N]) result.push_back(i);
	}
	return result;
}

inline void recordNewStep (int i, int j, int N) {
	steps[t].push_back(make_pair(i, j));
}

inline void chaseLightsAndStoreSteps(int N) {
	int i, j;
#ifdef DEBUGSOLVER
		cout << " Before Chase Lights: " << endl;
		for (i=0; i<N; ++i) {
			for (j=0; j<N; ++j) {
				cout << testBoard[i][j] << " ";
			}
			cout << endl;
		}
#endif
	for (i=1; i<N; ++i) {
		for (j=0; j<N; ++j) {
			if (testBoard[i-1][j]) {
				invertCross(testBoard, i, j, N);
				recordNewStep(i+1, j+1, N);
			}
		}
	}
#ifdef DEBUGSOLVER
		cout << " After Chase Lights: " << endl;
		for (i=0; i<N; ++i) {
			for (j=0; j<N; ++j) {
				cout << testBoard[i][j] << " ";
			}
			cout << endl;
		}
#endif
}

inline int firstLitOnLastRow(int N) {
	for (int i=0; i<N; ++i) {
		if (testBoard[N-1][i]) return i;
	}
	return N;
}


inline void toggleBasedOnPattern(int N) {
	int i;
	bool togglePattern[32];

	for (i=0; i<N; ++i) {
 		togglePattern[i] = testBoard[N-1][i];
	}
	vector<int> toInvert = getCombination(togglePattern, N);
	for (i=0; i<toInvert.size(); ++i) {
		invertCross(testBoard, 0, toInvert[i], N);
		recordNewStep(1, toInvert[i]+1, N);
	}
}

inline void resetTmpBoard() {
	int j;
	for (int i=0; i<32; ++i) {
		for (j=0; j<32; ++j) {
			tmpBoard[i][j] = false;
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);

	int N;
	int i, j;

	char ch;
	bool value;
	int fl;

	vector<pair<int, int> >::iterator stepsIter;

	resetBoards();

	for (t=0; t<T; t++) {
		scanf("%d", &N);
		cin.getline(buff, 20);

		resetTmpBoard();
		findPatterns(N);
#ifdef DEBUGPATTERNS
		cout << " Patterns: " << endl;
		for (i=0; i<N; ++i) {
			for (j=0; j<N; ++j) {
				cout << patterns[i][j] << " ";
			}
			cout << endl;
		}
#endif

		for (i=0; i<N; ++i) {
			for (j=0; j<N; ++j) {
				scanf("%c", &ch);
				value = (ch == '1');
				board[i][j] = value;
				testBoard[i][j] = value;
			}
			cin.getline(buff, 20);
		}

		do {
			chaseLightsAndStoreSteps(N);
			fl = firstLitOnLastRow(N);
#ifdef DEBUGSOLVER
			cout << "fl = " << fl << endl;
#endif
			if (fl == N) break; // solved
			toggleBasedOnPattern(N);
		} while (true);
		printf("%d\n", steps[t].size());
		for (stepsIter = steps[t].begin(); stepsIter != steps[t].end(); ++stepsIter) {
			printf("%d %d\n", (*stepsIter).first, (*stepsIter).second);
		}

	}

	return 0;
}
