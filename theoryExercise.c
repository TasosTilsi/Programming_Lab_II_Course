#include <stdio.h>
#include <stdlib.h>
#define mypi 3.1415

float circularRoom(float R, int circ);
float rectangularRoom(float height, float length, int rect);

main()
{
      int circ,rect;     
      
      printf("\nHow many circular rooms exist:\t");
      scanf("%d",&circ);
      printf("\nHow many rectangular rooms exist:\t");
      scanf("%d",&rect);
      
      float R,total,height,length;
      total= circularRoom(R,circ);
      
      total=total+rectangularRoom(height,length,rect);

      printf("\nThe total distance is:\t%f",total);
      
      printf("\n\n");
      system("PAUSE");	
}

float circularRoom(float R,int circ)
{
      int room;
      float sum=0;
      for (room=0;room<circ;room++)
      {
          printf("\nThe distance for #%d circular room is:\t",room+1);
          scanf("%f",&R);
          sum=sum+(mypi*R*R);
 
      }
      return(sum);
}

float rectangularRoom(float height, float length ,int rect)
{
      int room,answer;
      float sum=0;
      for (room=0;room<rect;room++)
      {
          printf("\nHas the room a balcony???");
          do
          {
                      printf("\nAnswer yes(1) or no(0)!!!\nThe answer is:\t"); 
                      scanf("%d",&answer);                     
          }while(answer==1 && answer==0);
          
          if(answer==1)
          {
                         do
                         {
                             printf("\nGive me the height, please write a number <=1.20\t");
                             scanf("%f",&height);
                         }while(height>1.21);
          }
          else
          {
              printf("\nGive me the height:\t");
              scanf("%f",&height);
          }
          
          printf("\nGive me the length:\t");
          scanf("%f",&length);
          sum=sum+(height*length);
      }
          return(sum);
}
