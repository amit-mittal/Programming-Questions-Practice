#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void nextMove( char player, int posx, int posy, char board[9][11]) {
/*	for(int i=0;i<9;++i){
		for(int j=0;j<10;++j){
			if(board[i][j]!='-' && board[i][j+1]!='-'){
				if(i==0){
					if(j==0){
						if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
							printf("%d %d H", i+1, j+1);
							return;
						}
					}

					if(j==9){
						if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
							printf("%d %d H", i+1, j-1);
							return;
						}
					}

					if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
						printf("%d %d H", i+1, j+1);
						return;
					}
				

					if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
						printf("%d %d H", i+1, j-1);
						return;
					}
				}

				if(i==8){
					if(j==0){
						if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
							printf("%d %d H", i-1, j+1);
							return;
						}
					}

					if(j==9){
						if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
							printf("%d %d H", i-1, j-1);
							return;
						}
					}

					if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
						printf("%d %d H", i-1, j+1);
						return;
					}
				

					if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
						printf("%d %d H", i-1, j-1);
						return;
					}
				}
				
				if(j==0){
					if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
						printf("%d %d H", i+1, j+1);
						return;
					}

					if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
						printf("%d %d H", i-1, j+1);
						return;
					}
				}

				if(j==9){
					if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
						printf("%d %d H", i+1, j-1);
						return;
					}

					if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
						printf("%d %d H", i-1, j-1);
						return;
					}
				}

				if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
					printf("%d %d H", i+1, j+1);
					return;
				}
			

				if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
					printf("%d %d H", i+1, j-1);
					return;
				}

				if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
					printf("%d %d H", i-1, j+1);
					return;
				}
			

				if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
					printf("%d %d H", i-1, j-1);
					return;
				}
			}
		}
	}

	for(int i=0;i<9;++i){
		for(int j=0;j<10;++j){
			if(board[i][j]!='-' && board[i][j+1]!='-'){
				if(i==0){
					if(j==0){
						if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
							printf("%d %d H", i+1, j+1);
							return;
						}
					}

					if(j==9){
						if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
							printf("%d %d H", i+1, j-1);
							return;
						}
					}

					if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
						printf("%d %d H", i+1, j+1);
						return;
					}
				

					if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
						printf("%d %d H", i+1, j-1);
						return;
					}
				}

				if(i==8){
					if(j==0){
						if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
							printf("%d %d H", i-1, j+1);
							return;
						}
					}

					if(j==9){
						if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
							printf("%d %d H", i-1, j-1);
							return;
						}
					}

					if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
						printf("%d %d H", i-1, j+1);
						return;
					}
				

					if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
						printf("%d %d H", i-1, j-1);
						return;
					}
				}
				
				if(j==0){
					if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
						printf("%d %d H", i+1, j+1);
						return;
					}

					if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
						printf("%d %d H", i-1, j+1);
						return;
					}
				}

				if(j==9){
					if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
						printf("%d %d H", i+1, j-1);
						return;
					}

					if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
						printf("%d %d H", i-1, j-1);
						return;
					}
				}

				if(board[i+1][j+1]=='-' && board[i+1][j+2]=='-'){
					printf("%d %d H", i+1, j+1);
					return;
				}
			

				if(board[i+1][j]=='-' && board[i+1][j-1]=='-'){
					printf("%d %d H", i+1, j-1);
					return;
				}

				if(board[i-1][j+1]=='-' && board[i-1][j+2]=='-'){
					printf("%d %d H", i-1, j+1);
					return;
				}
			

				if(board[i-1][j]=='-' && board[i-1][j-1]=='-'){
					printf("%d %d H", i-1, j-1);
					return;
				}
			}
		}
	}
*/
	//2 free horizontal cells
	for(int i=0;i<9;++i){
		for(int j=1;j<9;++j){
			if(board[i][j]=='-'){
				if(board[i][j+1]=='-'){
					printf("%d %d H", i, j);
					return;
				}
			}
		}
	}

	//2 free vertical cells
	for(int i=0;i<8;++i){
		for(int j=1;j<10;++j){
			if(board[i][j]=='-'){
				if(board[i+1][j]=='-'){
					printf("%d %d V", i, j);
					return;
				}
			}
		}
	}

	//LIFE SAVING MOVES - these are necessary
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