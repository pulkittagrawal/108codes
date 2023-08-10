// minimum maximum sum average
#include <stdio.h>
void main(){
int n;
printf("enter the no of element of array\n");
scanf("%d",&n);
int a[n],i,max,min,sum=0,avg;
printf("enter the %d element of array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        // MAXIMUM VALUE 
            if(i==0){
                    max=a[i];
                     }
                if(max<a[i])
                {
                    max=a[i];
            } 
        
        // MINIMUM VALUE       
            if(i==0){
                    min=a[i];
                     }
                if(min>a[i])
                {
                    min=a[i];
            } 
        
        // SUM OF VALUE
                sum=sum+a[i];
                
        //AVERAGE OF VALUE
                avg=sum/n;
                
        
    }
printf("min: %d \n",min);
printf("max: %d \n",max);
printf("sum: %d \n",sum);
printf("avg: %d \n",avg);
}
