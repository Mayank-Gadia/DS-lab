#include<stdio.h>
void towerofhanoi(int n,char from_rod, char to_rod, char aux_rod)
{
if(n==1)
{
printf("\n move disk 1 from rod %c to rod %c",from_rod,to_rod);
return;
}
towerofhanoi(n-1,from_rod,aux_rod,to_rod);
{
printf("\n move disk %d from %c to %c",n,from_rod,to_rod);
}
towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}

int main()
{
int n=4;
char A,B,C;
towerofhanoi(n,'A','C','B');
return 0;
}





