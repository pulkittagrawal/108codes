#include <stdio.h>
int main()
{
int i, low, high, mid, n, x, array[100];
printf("Enter number of element:");
scanf("%d",&n);
printf("Enter %d values", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find");
scanf("%d",&x);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < x)
low = mid + 1;
else if (array[mid] == x) {
printf("%d found at location %d", x, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", x);
return 0;
}
