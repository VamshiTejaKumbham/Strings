#include<stdio.h>
void main(){
// char str[5] = {'H', 'e', 'l', 'l', 'o'};

char str[] = "Hello";
printf("%s",str);
    // 1.strlen()
    // char a[100];
    // int l=0,i;
    // printf("Enter the string : ");
    // gets(a);
    // for(i=0;a[i]!='\0';i++){
    //     l++;
    // }
    // printf("The length of the string is : %d",l);

    // 2.strrev()
    // char a[100];
    // int i,l=0;
    // printf("Enter the string : ");
    // gets(a);
    // for(i=0;a[i]!='\0';i++){
    //     l++;
    // }
    // for(i=l;i>=0;i--){
    //     printf("%c",a[i]);
    // }

    // 3.strcmp()
    // char a[100],b[100];
    // int i,same=0,k=0,l=0;
    // printf("Enter the string a : ");
    // gets(a);
    // printf("Enter the string b : ");
    // gets(b);
    //  for(i=0;a[i]!='\0';i++){
    //     l++;
    // }
    //  for(i=0;b[i]!='\0';i++){
    //     k++;
    // }
    // for(i=0;((a[i]!='\0') || (b[i]!='\0'));i++){
    //     if(a[i]==b[i]){
    //        same++; 
    //     }
    // }
    // if(same==l){
    //     printf("Same");
    // }
    // else{
    //     printf("No");
    // }

    // 4.strncmp()
    // char a[100],b[100];
    // int i,same=0,n;
    // printf("Enter the string a : ");
    // gets(a);
    // printf("Enter the string b : ");
    // gets(b);
    // printf("Enter number of characters to compare : ");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     if(a[i]==b[i]){
    //        same++; 
    //     }
    // }
    // if(same==n){
    //     printf("Both the strings are same");
    // }
    // else{
    //     printf("Different");
    // }

    // 5.stricmp()
    // char a[100],b[100];
    // int i,same=0,k=0,l=0;
    // printf("Enter the string a : ");
    // gets(a);
    // printf("Enter the string b : ");
    // gets(b);
    //  for(i=0;a[i]!='\0';i++){
    //     l++;
    // }
    //  for(i=0;b[i]!='\0';i++){
    //     k++;
    // }
    // for(i=0;((a[i]!='\0') || (b[i]!='\0'));i++){
    //         if((a[i]==b[i])||((a[i] - b[i])==32)||((b[i]-a[i])==32)){
    //        same++;     
    //  }
    // }
    // if(same==l){
    //     printf("Both the strings are same");
    // }
    // else{
    //     printf("Different");
    // }



    // 6.strupr()
    // char a[100],i;
    // printf("Enter any string : ");
    // gets(a);
    // for(i=0;a[i]!='\0';i++){
    //     if((a[i]>='a')&&(a[i]<='z')){
    //         a[i]=a[i]-32;
    //     }
    // }
    // printf("The string in Uppercase : %s",a);

    // 7.strlwr()
    // char a[100],i;
    // printf("Enter any string : ");
    // gets(a);
    // for(i=0;a[i]!='\0';i++){
    //     if((a[i]>='A')&&(a[i]<='Z')){
    //         a[i]=a[i]+32;
    //     }
    // }
    // printf("The string in Lowercase : %s",a);

    // 8.strcpy()
    // char a[100],b[100];
    // int i;
    // printf("Enter String a : ");
    // gets(a);
    // for(i=0;a[i]!='\0';i++){
    //     b[i]=a[i];
    // }
    // b[i]='\0';
    // printf("The Copied string is : %s",b);

    // 9.strncpy()
    // char a[100],b[100];
    // int i,n;
    // printf("Enter String a : ");
    // gets(a);
    // printf("Enter number of characters to copy : ");
    // scanf("%d",&n);
    // for(i=0;i<=n;i++){
    //     b[i]=a[i];
    // }
    // b[i]='\0';
    // printf("The Copied string is : %s",b);

    // 10.strcat()
    // char a[100],b[100];
    // int i,l=0;
    // printf("Enter String a : ");
    // gets(a);
    // printf("Enter String b : ");
    // gets(b);
    // for(i=0;a[i]!='\0';i++){
    //     l++;
    // }
    // for(i=0;b[i]!='\0';i++){
    //     a[l]=b[i];
    //     l++;
    // }
    // a[l]='\0';
    // printf("%s",a);

    // 11.strncat()
    // char a[100],b[100];
    // int i,l=0,n;
    // printf("Enter String a : ");
    // gets(a);
    // printf("Enter String b : ");
    // gets(b);
    // printf("Enter number of characters to append : ");
    // scanf("%d",&n);
    // for(i=0;a[i]!='\0';i++){
    //     l++;
    // }
    // for(i=0;i<n;i++){
    //     a[l]=b[i];
    //     l++;
    // }
    // a[l]='\0';
    // printf("%s",a);
   

}