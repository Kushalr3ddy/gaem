//gcc gaem.c -o gaem.exe && gaem
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main(){
    int size =30;
    int count =0;
    int iter=1; // iteration of the loop
    char ch;
    int vert=1;

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
            //if(i == iter){
                //printf("x");
                iter++;
                ch='\n';
            //}
        }
        if(ch =='a'){
            //if(i ==iter){
                //printf("x");
                iter--;
                ch='\n';
                //}
        }

        //player movement
            //vertical
        if(ch =='w'){
            vert--;
            ch='\n';
        }
        if(ch =='s'){
            vert++;
            ch='\n';
        }
        //restricting movements from crossing borders
        if(iter<0){iter =29;}
        if(iter>size){iter=0;}
        if(vert<0){vert =count/2;}
        if(vert>size/2){vert=0;}
        
        if(i == iter&& vert ==count){
                printf("x");
                //vert++;
                }

        if(i==0){printf("0");}
        if(i==29){printf("0\n");}
        if((i!=29 || i!=0) && i!=iter){printf(" ");}
        
        }
    count++;
    }//end while loop

    //bottom line of the rectangle
    for(int i=0;i<size+1;i++){printf("0");}
    printf("\n");
    printf("%d\n",iter);
    printf("%d\n",vert);
    printf("%c",ch);
    Sleep(200);
    count =0;
    system("cls");
    //iter++;
    }
    return 0;
}
