
/**********************
 * English Dictionary *
 **********************/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

char reqd_word[100] = "\0", line[80];

void input();
void search();
bool condition();


void input()
{
  cout<<"\n Enter the word to be searched: ";
  cin>>reqd_word;

  for (unsigned int i=0;i<strlen(reqd_word);i++)
  {
    if (reqd_word[i]>90)
     reqd_word[i] = reqd_word[i]-32;
   }
  }



void search()
{
  int flag=0;

  fstream dict;

  dict.open ("dictionary.txt",ios::in);

//int i=0;
  while (!dict.eof())
  {
    dict.getline(line,80);


    if (condition()==1)
    {
      if (strcmp(reqd_word,line)==0)
      {
        cout<<"\n\n"<<line<<"\n";

        while (1)
        {
          dict.getline(line,80);

          if (condition()==1)
            break;

          puts(line);
          cout<<"\n";

          flag=1;
         }
       }
     }
   }

  if (flag==0)
    cout<<"\n Word not found!!";

  dict.close();

 }

bool condition()
{
  unsigned int i=0, flag=0;

    while (line[i]!='\0')
    {
      if (line[i]==' ')
      {
        flag=1;
        break;
       }

      i++;
     }

    if (flag==0)
    {
      for (i=0;i<strlen(line);i++)
      {
        if (line[i]>97 && line[i]<123)
        {
          flag=1;
          break;
         }
       }
     }

   if (line[0]=='\0')
    flag=1;

   if (flag==0)
    return true;

   else
    return false;
 }



 int main()
 {
   char z;
   do
    { input();

      search();

      cout<<"\n\n\n Do you want to search another word?(y/n): ";
      cin>>z; }
                while (z=='y' || z=='Y');

 }
