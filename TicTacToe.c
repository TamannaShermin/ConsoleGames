#include<stdio.h>
int main()
{   int a,b,x=0,flag=0;
    char str1[100], str2[100],ch;
    char arr[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    printf("Please enter the name of player 1 (X):");
    gets(str1);
    printf("Please enter the name of player 1 (Y):");
    gets(str2);
    printf("\n\n");
    printf("--- Tik Tac Toe Board ---\n");
    printf("       |   |\n   -------------\n       |   |\n   -------------\n       |   |\n\n");

       for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
            int a2=0,b2=0;
            while(1){
            if((j==1 && i==0)|| (i==1 && (j==0 || j==2))|| (i==2 && j==1))
            printf("Player 2 (%s),please enter your move(Y):",str2);
            else
            printf("Player 1 (%s),please enter your move(X):",str1);
            scanf("%d%c%d",&a,&ch,&b);
            if(arr[a-1][b-1]=='X'||arr[a-1][b-1]=='Y'){
                 printf("INVALID MOVE. PLEASE TRY AGAIN\n");
                 continue;
            }

            if((a<=3&& b<=3 && a>0 && b>0)&& ch==',')
                break;
            else
            printf("INVALID MOVE. PLEASE TRY AGAIN\n");
        }



                    a2=a-1;
                    b2=b-1;

                    if((j==1 && i==0)|| (i==1 && (j==0 || j==2))|| (i==2 && j==1))
                    arr[a2][b2]='Y';
             else
              arr[a2][b2]='X';
          printf("     %c | %c | %c\n   -------------\n     %c | %c | %c\n   -------------\n     %c | %c | %c\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
         if(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
         }

    else if(arr[0][0]=='Y'&&arr[1][1]=='Y'&&arr[2][2]=='Y'){
        printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
        flag=1;
    }

    else if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
         }

    else if(arr[0][2]=='Y'&&arr[1][1]=='Y'&&arr[2][0]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
         }
    else if(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[0][0]=='Y'&&arr[0][1]=='Y'&&arr[0][2]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[1][0]=='Y'&&arr[1][1]=='Y'&&arr[1][2]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
        }
     else if(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[2][0]=='Y'&&arr[2][1]=='Y'&&arr[2][2]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
        }
        else if(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[0][0]=='Y'&&arr[1][0]=='Y'&&arr[2][0]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[0][1]=='Y'&&arr[1][1]=='Y'&&arr[2][1]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
        }
     else if(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X'){
            printf("CONGRATULATION PLAYER 1!!!YOU ARE THE WINNER");
            flag=1;
        }
    else if(arr[0][2]=='Y'&&arr[1][2]=='Y'&&arr[2][2]=='Y'){
            printf("CONGRATULATION PLAYER 2!!!YOU ARE THE WINNER");
            flag=1;
        }

    if(flag==1) break;

    }
    if(flag==1) break;
    }
    if(flag==0)
    printf("   NO ONE WON!!!\n");
    printf("\n----GAME ENDED----\n");
    return 0;
}





