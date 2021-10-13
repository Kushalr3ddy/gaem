//gcc gaem.c -o gaem.exe && gaem
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>


int main(){
    int size =30;
    int count =0;//vertical size
    int playerX=1; // iteration of the loop
    int playerY=1;
    char ch;
    int score=0;
    int objx,objy;
    //objx=randint(2,29,1);
    //objy=randint(2,29,1);

    //menu
    printf("                _        \n               | |   \n ___ _ __   ___| | __\n/ __| '_ \\ / _ \\ |/ /\n\\__ \\ | | |  __/   < \n|___/_| |_|\\___|_|\\_\\ \n                     ");
    printf("\n\tpress any key to continue");
    getch();
    system("cls");
    printf("use w,a,s,d to move");
    printf("\n\tpress any key to start gaem");
    getch();
    //beginning of while loop
    while(1){
    printf(" ");

    //top line of the rectangle
    for(int i=1;i<size+1;i++){printf("-");}

    /*
    vertical size is kept as half of the horizontal size 
    cause nextline characters give more space in between 
    compared to horizontal where ther is no space
    */
    while(count <size/2){ //prints vertical borders
    if(kbhit()){ch =getch();} // this part is to read the keyboard presses
    for(int i=0,j=0;i<size;i++){
        //player movement
            //horizontal
        if(ch =='d'){
            playerX++;
            ch='\n';
            
        }
        if(ch =='a'){
            
            playerX--;
            ch='\n';
            
        }

        //player movement
            //vertical
        if(ch =='w'){
            playerY--;
            ch='\n';
        }
        if(ch =='s'){
            playerY++;
            ch='\n';
        }
        //restricting movements from crossing borders
        if(playerX<0){playerX =size-1;}
        if(playerX>size){playerX=0;}
        if(playerY<0){playerY =size/2;}
        if(playerY>size/2){playerY=0;}
        
        //the object to which the player should reach
        //if(objx ==i && objy==count){printf("Q");}
        //if(playerX ==objx&&playerY==objy){score++;}//score increment
        
        //prints the player on screen
        if(i == playerX&& playerY ==count){
                printf("x");
                //playerY++;
                }

        if(i==0){printf("|");}
        if(i==size-1){printf("|\n");}
        if((i!=size-1 || i!=0) && i!=playerX){printf(" ");}
        
        }
    count++;
    }//end while loop

    //bottom line of the rectangle
    for(int i=0;i<size+1;i++){printf("-");}
    printf("\n");
    printf("playerX = %d\t\t",playerX);
    printf("score:%d\n",score);
    printf("playery = %d\n",playerY);
    printf("%c\n",ch);
    Sleep(100);
    count =0;
    system("cls");
    //playerX++;
    }
    return 0;
}
