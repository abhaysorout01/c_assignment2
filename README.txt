  # README File FOR game.c
  
* We used many libraries for their respective functions to be added in this game.
                            > Like: used "rand()" which helps us to take a random thing to be done in our programming.

* GAME RULES:
                            > The player moves its symbol between 3 lanes.
                            > A falling object comes down from a random lane.
                            > If the obstacle reaches the player's lane at the bottom --> GAME OVER!
                            > You can move the symbol LEFT or RIGHT.

* PROGRAMMING FEATURS USED:
                            > Real-time keyboard input using "_kbhit()" and "getch()".
                              >> In which we are using left and right.
                            > Obstacle movement using "sleep()" which also works as frame rate.
                              >> If we reduce the number in this then it will move fastly down.
                            > Random lane generation using rand() % 3.
                              >> If we make 3 to 5, then there will be 5 lanes.
                            > Collision logic is also much easier when obstacle will be on his last step
                              and the value which came after random which is stored in "obstaclepos" is equal
                              to the position of our object then will be a collision and game will be over.

* CONTROLS:
                            > LEFT key will be used to move the object to left direction.
                            > RIGHT key will be used to move the object to right direction.


* Modifications:

1. LIVES:
                             > I introduced lives in this which are 3 in number.
                             > And printed on the top REMAINING LIVES: * * * .
                             > I preffered to be it in quantity rather than in numbers.

2. SCORE:
                             > I introduced a score system in the end which will help in competitions in friends that who will score more.
   
4. DIFFICULTY:
                              > I made it come down fast by introducing a speed variable.
                              > It is just opposite in code like in code it is decreasing speed but in real it is increasing.
                                >> That is because of "sleep()" function.

Bonus: LANES:
                              > I increased lanes from 3 to 5 which will also make a balanced game.
                                >> Because of increasing speed the chances to be saved will be less.
                                >> So as to make balanced I introduced that.



 # README File FOR game.c


* This Game is Tic-Tac-Toe:

* There is only 1 library is used in it according to my level of understanding.

* GAME RULES: 
                   > The game board contains 9 cells.
                   > Player 1 uses "X" while player 2 uses "O".
                   > Player choses numbers between 1-9.
                   > And remaining all the rules are already known to everyone. 


* PROGRAMMING USED:
                    > Normal 2D arrays' concepts are being used in this.
                    > I've used functions in this just to increase readibility of the code.
                    > Also wrote some comments for better understanding.
                    >> Normal functions like- "draw()" and "checkwin()" which are crystal clear in written code.
                    > If someone uses same number already being used then it'll show "invalid move!".

* MOTIVE:
                    > Motive of making this game was just to sharpen my understanding about arrays' concepts. 
                    


# CONCLUSION:

~ In 1st objective:
                    >> I did all the modifications and all README file' work alone.
                    >> NO HELP, NO SOURCE, NO PARTNER.
                    >> Done only 3 modifications that were easy.
                    >> Added one bonus modification just to ensure a better game to be made in the end.

~ In 2nd objective:
                    >> I took help of chatGPT for just starting ideas.
                    >> All the next concepts were mine.
                    >> made an easy game for just clearance of my doubts in 2D arrays.


~ In the end:
                    >> ENJOY THE GAME.
                    

                    >> All the hardwork from- @ ABHAY SOROUT

