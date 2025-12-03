#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int x = 1;              // player position (0 to 4)
    int step = 0;           // obstacle vertical movement
    int obstaclePos = rand() % 5;   // 0,1,2,3,4,5 lane
	int score = 0;
	int lives = 3;
	int speed = 150;
    while (1) {

        // ---- INPUT ----
        if (_kbhit()) {
            char ch = getch();

            if (ch == 75 && x > 0)        // LEFT arrow
                x--;

            if (ch == 77 && x < 4)        // RIGHT arrow
                x++;
        }

        // ---- DRAW ----
        system("cls");
        int j = 0;
        if(lives >= 2) {
        		printf("Remaining lives: ");
        	}
        for(j = 0;j < lives;j++) {
        	if(lives >= 2) {
        		printf("* ");
        	}
		}
        			printf("\n| - - - - - |\n");
int i = 0;
        for ( i = 0; i < 10; i++) {
            if (i == step) {

                if (obstaclePos == 0)
                    printf("| A         |\n");

                else if (obstaclePos == 1)
                    printf("|   A       |\n");

                else if (obstaclePos == 2)
                    printf("|     A     |\n");
                     
				else if (obstaclePos == 3)
                    printf("|       A   |\n");
                    
                else if (obstaclePos == 4)
                    printf("|         A |\n");
                    
            } else {
               		printf("|           |\n");
            }
        }

        // ---- PLAYER ----
        	if 	(x == 0)
          			printf("| B         |\n");
        else if (x == 1)
            		printf("|   B       |\n");
        else if (x == 2)
            		printf("|     B     |\n");
		else if (x == 3)
            		printf("|       B   |\n");
        else if (x == 4)
            		printf("|         B |\n");
        // ---- COLLISION ----
        if (step == 10 && x == obstaclePos) {
        	lives--;
            if(lives == 0) {
            	printf("\nGAME OVER!\nYou saved it %d times\n",score);
            	break;
			}
        }

        Sleep(speed);

        // Move obstacle down
        step++;

        // Reset when reaches bottom
        if (step > 10) {
            step = 0;
            obstaclePos = rand() % 5; // new lane
            score++;
        }
        
		if(speed>40) {
			speed -= 5;
		}
    }

    return 0;
}
