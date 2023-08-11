#include <stdio.h>

int main() {
    int dd,mm,yyyy;
    scanf("%d %d %d",&dd,&mm,&yyyy);
    printf("%d %d %d\n",dd,mm,yyyy);
    
    if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
    {
        if(dd==31){
            if(mm==12){
                mm=1;
                dd=1;
                yyyy+=1;
            }
            else{
                mm++;
                dd=1;    
            }
        }
        else{
            dd++;
        }
    }
    else if(mm==2)
    {
        if(yyyy%4==0){
            if(dd<=28){
                dd++;
            }
            else{
                dd=1;
                mm++;
            }
        }
        else
        {
            if(dd<28){
                dd++;
            }
            else
            {
                dd=1;
                mm++;
            }
        }
    }
    else
    {
        if(dd<30){
            dd++;
        }
        else{
            dd=1;
            mm++;
        }
    }
    
printf("%d %d %d",dd,mm,yyyy);

return 0;
}
