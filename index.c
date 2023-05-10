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
//Question 1//
  if(i==7)
  {
    printf("1) What is the Capital City of Mali?\n\n");

    //Answers//
    printf("1) Bamako\n");
    printf("2) Los Angeles\n");
    printf("3) Malta\n");
    printf("4) Kinshasa\n");

    printf("Enter Your Answer  :");

    scanf("%d", &ans1);

    if(ans1==2)
    {
        printf("Great Work\n");

        point01=5;

        printf("Total Score %d Points\n", point01);
    }
    else 
    {
        printf("Incorrect Answer Try Again");
    }
  }
  return 0;
}