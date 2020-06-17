#include<stdio.h>
int main () {
FILE *arquivo;
int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,o=15;
int aa=0,bb=0,cc=0,dd=0,ee=0,ff=0,gg=0,hh=0,ii=0,jj=0,kk=0,ll=0,mm=0,nn=0,oo=0;
int contador=0;
 arquivo=fopen("aulas4you.txt","w" ); 
aa=0;
for(a=1;a<=11;a++){ 
bb=0;
for(b=bb+1+a;b<=13;b++){ 
cc=0;
for(c=cc+1+b;c<=14;c++){ 
dd=0;
for(d=dd+1+c;d<=15;d++){ 
ee=0;
for(e=ee+1+d;e<=16;e++){ 
ff=0;
for(f=ff+1+e;f<=17;f++){ 
gg=0;
for(g=gg+1+f;g<=18;g++){ 
hh=0;
for(h=hh+1+g;h<=19;h++){ 
ii=0;
for(i=ii+1+h;i<=20;i++){ 
jj=0;
for(j=jj+1+i;j<=21;j++){ 
kk=0;
for(k=kk+1+j;k<=22;k++){ 
ll=0;
for(l=ll+1+k;l<=23;l++){ 
mm=0;
for(m=mm+1+l;m<=24;m++){ 
nn=0;
for(n=nn+1+m;n<=25;n++){ 
oo=0;
for(o=n+1;o<=25;o++){
fprintf(arquivo," %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n " ,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o);} 
 if(o==70){nn++;} 
 } if(n==69){mm++;} 
 } if(m==68){ll++;} 
 } if(l==67){kk++;} 
 } if(k==66){jj++;} 
 } if(j==65){ii++;} 
 } if(i==64){hh++;} 
 } if(h==63){gg++;} 
 } if(g==62){ff++;} 
 } if(f==61){ee++;} 
 } if(e==60){dd++;} 
 } if(d==59){cc++;} 
 } if(c==58){bb++;} 
 } if(b==57){aa++;} 
 }
 }