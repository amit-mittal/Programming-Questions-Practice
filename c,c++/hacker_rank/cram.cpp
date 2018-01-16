#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void nextMove( char player, int posx, int posy, char board[9][11]) {
	int n = rand()%RAND_MAX;

	int start_x = rand()%11;
	int start_y = rand()%9;

	if(n<RAND_MAX/2){
		int t = rand()%RAND_MAX;
		//2 free vertical cells
		if(t>=RAND_MAX/2){
			for(int j=start_x;j<10;++j){
				for(int i=start_y;i<8;++i){
					if(board[i][j]=='-'){
						if(board[i+1][j]=='-'){
							printf("%d %d V", i, j);
							return;
						}
					}
				}
			}
		} else{
			for(int i=start_y;i<8;++i){
				for(int j=start_x;j<10;++j){
					if(board[i][j]=='-'){
						if(board[i+1][j]=='-'){
							printf("%d %d V", i, j);
							return;
						}
					}
				}
			}
		}
	}

	if(n>=RAND_MAX/2){
		int t = rand()%RAND_MAX;
		//2 free horizontal cells
		if(t>=RAND_MAX/2){
			for(int j=start_x;j<9;++j){
				for(int i=start_y;i<9;++i){
					if(board[i][j]=='-'){
						if(board[i][j+1]=='-'){
							printf("%d %d H", i, j);
							return;
						}
					}
				}
			}
		} else{
			for(int i=start_y;i<9;++i){
				for(int j=start_x;j<9;++j){
					if(board[i][j]=='-'){
						if(board[i][j+1]=='-'){
							printf("%d %d H", i, j);
							return;
						}
					}
				}
			}	
		}
	}

	start_x = rand()%11;
	start_y = rand()%9;

	if(n<RAND_MAX/2){
		//2 free vertical cells
		for(int j=start_x;j<10;++j){
			for(int i=start_y;i<8;++i){
				if(board[i][j]=='-'){
					if(board[i+1][j]=='-'){
						printf("%d %d V", i, j);
						return;
					}
				}
			}
		}
	}

	if(n>=RAND_MAX/2){
		//2 free horizontal cells
		for(int j=start_x;j<9;++j){
			for(int i=start_y;i<9;++i){
				if(board[i][j]=='-'){
					if(board[i][j+1]=='-'){
						printf("%d %d H", i, j);
						return;
					}
				}
			}
		}
	}

	start_x = rand()%11;
	start_y = rand()%9;

	if(n>RAND_MAX/2){
		//2 free vertical cells
		for(int j=start_x;j<10;++j){
			for(int i=start_y;i<8;++i){
				if(board[i][j]=='-'){
					if(board[i+1][j]=='-'){
						printf("%d %d V", i, j);
						return;
					}
				}
			}
		}
	}

	if(n<=RAND_MAX/2){
		//2 free horizontal cells
		for(int j=start_x;j<9;++j){
			for(int i=start_y;i<9;++i){
				if(board[i][j]=='-'){
					if(board[i][j+1]=='-'){
						printf("%d %d H", i, j);
						return;
					}
				}
			}
		}
	}

	n = rand()%RAND_MAX;
	
	if(n>=RAND_MAX/2){
		//2 free vertical cells
		for(int j=1;j<10;++j){
			for(int i=0;i<8;++i){
				if(board[i][j]=='-'){
					if(board[i+1][j]=='-'){
						printf("%d %d V", i, j);
						return;
					}
				}
			}
		}
	}

	if(n<RAND_MAX/2){
		//2 free horizontal cells
		for(int j=1;j<9;++j){
			for(int i=0;i<9;++i){
				if(board[i][j]=='-'){
					if(board[i][j+1]=='-'){
						printf("%d %d H", i, j);
						return;
					}
				}
			}
		}
	}

	//LIFE SAVING MOVES - these are necessary
	//2 free vertical cells
	for(int i=0;i<8;++i){
		for(int j=0;j<11;++j){
			if(board[i][j]=='-'){
				if(board[i+1][j]=='-'){
					printf("%d %d V", i, j);
					return;
				}
			}
		}
	}

	//2 free horizontal cells
	for(int i=0;i<9;++i){
		for(int j=0;j<10;++j){
			if(board[i][j]=='-'){
				if(board[i][j+1]=='-'){
					printf("%d %d H", i, j);
					return;
				}
			}
		}
	}
}

int main() {
	srand(time(NULL));
	int pos[2];
	char board[9][11];
	char line[11];
	char player;
	scanf("%c", &player );
	scanf("%d", &pos[0]);
	scanf("%d", &pos[1]);
	for( int i=0; i<pos[0]; i++) {
		scanf("%s", line);
		strncpy(board[i], line, pos[1]);
	}
	nextMove( player, pos[0], pos[1], board);
	return 0;
}