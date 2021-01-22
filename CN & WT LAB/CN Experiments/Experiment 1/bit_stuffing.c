#include<stdio.h>
#include<string.h>
int main() {
int frames,i,j=0,l;
int count=0;
char org_str[100],stf_str[100],dstf_str[100];
char str[10]="01111110\0";
printf("enter the number of frames:");
scanf("%d",&frames);
printf("enter %d bits:",frames);
scanf("%s",org_str);
l=strlen(org_str);
if(frames!=1) {
printf("enter bits equal to the frames size\n");
}
printf("\n");
printf("senders side : \n");
printf("original string :");
printf("%s",org_str);
printf("\n");

for(i=0;i<l;i++) {
if(org_str[i]== '0') {
stf_str[j++]=org_str[i];
count++;
}
else {
stf_str[j++]=org_str[i];
count=0;
}
if(count==5) {
stf_str[j++]='0';
count=0;
}}

stf_str[j]='\0';
printf("after bit stuffing:");
strcat(str,stf_str);
strcat(str,"01111110");
printf("%s",str);
printf("\n");
printf("\n");
printf("receiver side:\n");
printf("string received: ");
printf("%s",str);
printf("\n");

l=0,j=0,count=0;
l=strlen(stf_str);
for(i=0;i<l;i++) {
if(stf_str[i]=='l') {
dstf_str[j++]=stf_str[i];
count=0;
}
else {
dstf_str[j++]=stf_str[i];
count=0;
}
if(count==5) {
count=0;
i++;
}}
dstf_str[j]='\0';
printf("de-stuffed string:");
printf("%s",dstf_str);
printf("\n");
printf("\n");
return 0;
}
