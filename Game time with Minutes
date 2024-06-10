/*beecrowd | 1047
Game Time with Minutes
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.
*/

#include <stdio.h>

int main(){

    int sh, sm, eh, em;
    
    scanf("%d%d%d%d",&sh,&sm,&eh,&em);
    
    if(em<sm){
        em += 60;
        eh -= 1;
        em -= sm;
        if(eh<sh){
            eh += 24;
            eh -= sh;
        }else{
            eh -= sh;
        }
        // printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh,em);
    }else if(sh == eh && sm == em){
        // printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else if(em > sm){
        em -= sm;
        if(eh < sh){
            eh += 24;
            eh -= sh;
        }else{
            eh -= sh;
        }
        // printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh,em);
    }
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",eh,em);
    
    return 69;

}
