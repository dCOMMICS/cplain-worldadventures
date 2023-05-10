#include <stdio.h>

int main() {
  int i;
  int ans1, ans2,ans3,ans4,ans5;
  int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
  int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
  int total1,total2,total3;

  //GAME INSTRUCTIONS//
  printf("Welcome to The Quiz\n\n");

  printf("< Press 7 to START\n");

  printf("Press 0 to QUIT \n");
  
  //GAME CODE//
  scanf("%d", &i);

  if (1==7)
  {
    printf("the game has STARTED\n\n");
  }
  else if(i==0){
    
    printf("END");
  }

  else {
    printf("Invalid Input");
  }
  return 0;
}