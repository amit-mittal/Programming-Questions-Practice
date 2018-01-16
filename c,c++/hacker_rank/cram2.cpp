#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void nextMove( char player, int posx, int posy, char board[9][11]) {
	//4 free horizontal cells
	for(int i=0;i<11;++i){
		for(int j=0;j<6;++j){
			if(board[i][j]=='-'){
				if(board[i][j+1]=='-' && board[i][j+2]=='-' && board[i][j+3]=='-'){
					printf("%d %d H", i, j+1);
					return;
				}
			}
		}
	}

	//4 free vertical cells
	for(int i=0;i<8;++i){
		for(int j=0;j<9;++j){
			if(board[i][j]=='-'){
				if(board[i+1][j]=='-' && board[i+2][j]=='-' && board[i+3][j]=='-'){
					printf("%d %d V", i+1, j);
					return;
				}
			}
		}
	}

	//3 free horizontal and in next line either of corner one is free
	for(int i=0;i<10;++i){
		for(int j=0;j<7;++j){
			if(board[i][j]=='-'){
				if(board[i][j+1]=='-' && board[i][j+2]=='-'){
					if(board[i+1][j]=='-'){
						printf("%d %d H", i, j);
						return;
					}
					if(board[i+1][j+2]=='-'){
						printf("%d %d H", i, j+1);
						return;
					}
				}
			}
		}
	}

	//3 free horizontal and in next line middle one is free
	for(int i=0;i<10;++i){
		for(int j=0;j<7;++j){
			if(board[i][j]=='-'){
				if(board[i][j+1]=='-' && board[i][j+2]=='-' && board[i+1][j+1]=='-'){
					printf("%d %d V", i+1, j+1);
					return;
				}
			}
		}
	}

	//2 free horizontal cells
	for(int i=0;i<11;++i){
		for(int j=0;j<8;++j){
			if(board[i][j]=='-'){
				if(board[i][j+1]=='-'){
					printf("%d %d H", i, j);
					return;
				}
			}
		}
	}

	//2 free vertical cells
	for(int i=0;i<10;++i){
		for(int j=0;j<9;++j){
			if(board[i][j]=='-'){
				if(board[i+1][j]=='-'){
					printf("%d %d V", i, j);
					return;
				}
			}
		}
	}
}

int main() {
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