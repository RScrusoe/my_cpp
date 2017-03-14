#include <stdio.h>
#include <stdlib.h>

int main()
{
   char P,C,M,E;
   float p,c,m,e;
   float p1,c1,m1,e1;
   float a1,a2,a3,a4;
   float tc1,tc2,tc3,tc4;
   float cg;

   printf("\nplease enter your grade in uppercase in the order separeted by enter key as \n 1.Physics\n2.chemistry\n3.mathematics\n4.Electrical\n");
   printf("\nNOTE : FOR EX grade put only E\n");
   scanf("%c %c %c %c",&P,&C,&M,&E);
   if( (P=='A'||P=='B'||P== 'C'||P=='D'||P=='E'||P=='F'||P=='P')&& ( C=='A'||C=='B'||C=='C'||C=='D'||C=='E'||C=='F'||C=='P')&&(M=='A'||M=='B'||M=='C'||M=='D'||M=='E'||M=='F'||M=='P')&&(E=='A'||E=='B'||E== 'C'||E=='D'||E=='E'||E=='F'||E=='P') )
   {

   printf("\nPlease Enter Credits you Have Taken In respective Subjects in Order Above\n");
   scanf("%f %f %f %f",&a1,&a2,&a3,&a4);
   printf("\nPlease Provide total no of credits of respective subjects in same Order\n");
   scanf("%f %f %f %f",&tc1,&tc2,&tc3,&tc4);

  if(a1>tc1 || a2>tc2 || a3>tc3 || a4>tc4 )
  {
      printf("\nPlease Enter Valid Data Credits Scored Should \nbe less or Equal to Total Credit assigned to it by College\nplease restart programme\n");
  }
  else
  {




   if(P=='E')
   {
       p=10;
   }
   else if (P=='A')
   {
       p=9;
   }
   else if (P=='B')
   {
       p=8;
   }
   else if (P=='C')
   {
       p=7;
   }
   else if (P=='D')
   {
       p=6;
   }
   else if(P=='P')
   {
       p=5;
   }
   else if(P=='F')
   {
       printf("you Failed In Physics");
       p=0;
       a1=0;
   }



   if(C=='E')
   {
       c=10;
   }
   else if (C=='A')
   {
       c=9;
   }
   else if (C=='B')
   {
       c=8;
   }
   else if (C=='C')
   {
       c=7;
   }
   else if (C=='D')
   {
       c=6;
   }
   else if(C=='P')
   {
       c=5;
   }
   else if(C=='F')
   {
       printf("you Failed In Chemistry");
      c=0;
      a2=0;
   }



   if(M=='E')
   {
       m=10;
   }
   else if (M=='A')
   {
       m=9;
   }
   else if (M=='B')
   {
       m=8;
   }
   else if (M=='C')
   {
       m=7;
   }
   else if (M=='D')
   {
       m=6;
   }
   else if(M=='P')
   {
       m=5;
   }

  else if(M=='F')
   {
       printf("you Failed In Maths");
       m=0;
       a3=0;

   }


 if(E=='E')
   {
       e=10;
   }
   else if (E=='A')
   {
       e=9;
   }
   else if (E=='B')
   {
       e=8;
   }
   else if (E=='C')
   {
       e=7;
   }
   else if (E=='D')
   {
       e=6;
   }
   else if(E=='P')
   {
       e=5;
   }
   else if(E=='F')
   {
       printf("you Failed In Electrical");
       e=0;
       a4=0;
   }


  cg=(((p*a1)+(c*a2)+(a3*m)+(a4*e))/(tc1+tc2+tc3+tc4));
  printf("Your SGPA in this semister is %f",cg);
  }
   }
   else
   {
       printf("\nPLEASE INPUT GRADES IN CAPITAL ONLY AND ENTER ONLY POSSIBLE GRADES\n and RESTART the Programme\n");
   }

  getchar();
};
