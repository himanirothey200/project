#include<stdio.h>

typedef struct cricket
{
   int Runs;
   int Player_Wicket;
   int Player_Matches;
   int six;
   int four;
   int century;
   int overs;
   char bowler[30];
   char name[25];
   

}cricket;


void display(cricket*,int);
int max_runs(cricket*,int);
void max_wickets(cricket*,int);
void min_runs(cricket*,int);
void min_wickets(cricket*,int);
void total_runs(cricket*,int);
void maximum_six(cricket*,int);
void minimum_six(cricket*,int);
void maximum_four(cricket*,int);
void minimum_four(cricket*,int);
void century_done(cricket*,int);

void display(cricket*arr,int size)
{
     int iCnt=0;

     for(iCnt=0;iCnt<size;iCnt++)
     {
        printf("Cricketer name : %s \n",arr[iCnt].name);
        printf("Runs scored  : %d\n",arr[iCnt].Runs);
        printf("Wickets taken :%d\n",arr[iCnt].Player_Wicket);
        printf("Matches played :%d\n",arr[iCnt].Player_Matches);
     }
}

void bowler_info(cricket*arr,int size)
{
    int i;

    printf("Enter the bowler details\n\n");

    printf("Enter the number of bowlers\n");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter the bowler name %d\n",i+1);
        scanf("%s",arr[i].name);

        printf("Enter the overs bowled by the bowler %d\n",i+1);
        scanf("%d",&arr[i].overs);

        
    }
}


int max_runs(cricket*arr,int size)
{
    int maximum,iCnt;
    maximum=arr[0].Runs;

    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].Runs>maximum)
        {
            maximum=arr[iCnt].Runs;
            
        }
    }
    printf("Maximum runs scored is %d\n",maximum);

    return 0;
}



void max_wickets(cricket*arr,int size)
{
    int maximum,iCnt;
    maximum=arr[0].Player_Wicket;

    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].Player_Wicket>maximum)
        {
            maximum=arr[iCnt].Player_Wicket;
        }
    }
    printf("Maximum Wickets scored is %d\n",maximum);
}

void min_runs(cricket*arr,int size)
{
    int minimum,iCnt;
    minimum=arr[0].Runs;

    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].Runs<minimum)
        {
            minimum=arr[iCnt].Runs;
        }
    }
    printf("Minimum runs scored is: %d\n",minimum);


}

void min_wickets(cricket*arr,int size)
{
    int minimum,iCnt;
    minimum=arr[0].Player_Wicket;

    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].Player_Wicket<minimum)
        {
            minimum=arr[iCnt].Player_Wicket;
        }
    }
    printf("Minimum Wickets scored is: %d\n",minimum);
}

void total_runs(cricket*arr,int size)
{
    int iCnt;
    int total=0;

    for(iCnt=0;iCnt<size;iCnt++)
    {
        total=total+arr[iCnt].Runs;
    }
    printf("Total runs scored is %d\n",total);
}

void maximum_six(cricket*arr,int size)
{
    int iCnt,six;
    six=arr[0].six;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].six>six)
        {
            six=arr[iCnt].six;
        }
    }
    printf("Maximum six scored is %d\n",six);
}

void manimum_six(cricket*arr,int size)
{
    int iCnt,six;
    six=arr[0].six;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].six<six)
        {
            six=arr[iCnt].six;
        }
    }
    printf("Minimum six scored is %d\n",six);
}

void maximum_four(cricket*arr,int size)
{
    int iCnt,four;
    four=arr[0].four;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].four>four)
        {
            four=arr[iCnt].four;
        }
    }
    printf("Maximum four scored is %d\n",four);
}

void minimum_four(cricket*arr,int size)
{
    int iCnt,four;
    four=arr[0].four;
    for(iCnt=0;iCnt<size;iCnt++)
    {
        if(arr[iCnt].four<four)
        {
            four=arr[iCnt].four;
        }
    }
    printf("Minimum four scored is %d\n",four);
}

void century_done(cricket*arr,int size)
{
   int iCnt;

   arr[iCnt].century= max_runs(arr,size);

   for(iCnt=0;iCnt<size;iCnt++)
   {

      if(arr[iCnt].century>=100)
      {
        printf("Century is done in match \n");
      }
      
   }

  
}


void main()
{
    int i,n,size;
    cricket arr[25];
    char name;
    int Runs, Player_Wicket,Player_Matches;
    
    printf("Display the cricket information of players  such as name,runs scored,wickets taken: \n");

    printf("Enter the no of cricket players");
    scanf("%d",&size);


    for(i=0;i<size;i++)
    {
        printf("Enter the name of player%d\n",i+1);
        scanf("%s",arr[i].name);
        printf("Enter the run \n");
        scanf("%d",&arr[i].Runs);
        printf("how many wickets taken by player\n");
        scanf("%d",&arr[i].Player_Wicket);
        printf("how many matches played by player\n");
        scanf("%d",&arr[i].Player_Matches);
        printf("Enter the number of sixes scored by player\n");
        scanf("%d",&arr[i].six);
        printf("Enter the number of fours scored by player\n");
        scanf("%d",&arr[i].four);
    }    

    
    
    display(arr,size);
    bowler_info(arr,size);
    max_runs(arr,size);
    min_runs(arr,size);
    max_wickets(arr,size);
    min_wickets(arr,size);
    total_runs(arr,size);
    maximum_six(arr,size);
    manimum_six(arr,size);
    maximum_four(arr,size);
    minimum_four(arr,size);
    century_done(arr,size);
}    