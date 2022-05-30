#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int number = rand() % 100;
  int guess = -1;
  int try = 0;
  while(guess != number && try < 8){
    printf("Please enter your guess: ");
    scanf("%d",&guess);
    if(guess < number)
      printf("Too Low\n");
    else if(guess > number)
      printf("Too High\n");
    try++;
  }
  if(guess == number)
    printf("Congrats. Your guess is true\n");
  else
    printf("Sorry, the number was: %d",number);
  return 0;
}
