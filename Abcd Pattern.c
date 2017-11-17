 #include<conio.h>
 #include<stdio.h>
 void main()
 {
 char a[20],temp;
 char i,j,n;
 printf("\n\nENTER THE STRING:");
 gets(a);
 puts("\n\n");
 n=strlen(a);
 puts(a);
 for(i=0;i<n-1;i++)
 {
  temp=a[0];
  for(j=0;j<n-1;j++)
  {
   a[j]=a[j+1];
  }
  a[n-1]=temp;
  puts("\n\n");
  puts(a);
  }
 getch();
 }
