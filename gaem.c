//gcc gaem.c -o gaem.exe && gaem
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main(){
    int size =30;
    int count =0;
    int playerX=1; // iteration of the loop
    char ch;
    int playerY=1;
    int score=0;
    int objx,objy;
    objx=20;
    objy=2;

    //beginning of while loop
    while(1){
    printf(" ");
    //top line of the rectangle
    for(int i=1;i<size+1;i++){printf("0");}

    /*
    vertical size is kept as half of the horizontal size 
    cause nextline characters give more space in between 
    compared to horizontal where ther is no space
    */
    while(count <size/2){ 
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
        if(playerX<0){playerX =29;}
        if(playerX>size){playerX=0;}
        if(playerY<0){playerY =size/2;}
        if(playerY>size/2){playerY=0;}
        
        if(objx ==i && objy==count){printf("Q");}
        if(playerX ==objx&&playerY==objy){score++;}
        if(i == playerX&& playerY ==count){
                printf("x");
                //playerY++;
                }

        if(i==0){printf("0");}
        if(i==29){printf("0\n");}
        if((i!=29 || i!=0) && i!=playerX){printf(" ");}
        
        }
    count++;
    }//end while loop

    //bottom line of the rectangle
    for(int i=0;i<size+1;i++){printf("0");}
    printf("\n");
    printf("playerX = %d\n",playerX);
    printf("playery = %d\n",playerY);
    printf("%c\n",ch);
    printf("score:%d",score);
    Sleep(100);
    count =0;
    system("cls");
    //playerX++;
    }
    return 0;
}
