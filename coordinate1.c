#include<stdio.h>
int main()
{
float x,y;
printf("Enter x and y coordinate");
scanf("%f%F",&x,&y);
if(x==0 && y==0){
printf("The point lies at the origin\n");}
else if(x>0&& y>0){
printf("the point lies in Quadrant I\n");
}
else if(x<0 && y>0){
printf("the point lies in Quadrant II\n");
}
else if(x<0&& y<0)
{
printf("the point lies in Quadrant III\n");
}
else if(x>0 && y<0){
printf("the point lies in Quadrant IV\n");
}
else if(x==0){
printf("the point lies on the Y-axis n");
}else{
printf("the point lies on the x-axis\nI\n");
}
return 0;
}
