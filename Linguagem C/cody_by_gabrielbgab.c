#include<stdio.h>
int main () {
FILE *arquivo;
int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,o=15,p=16,q=17,r=18,s=19,t=20,u=21,v=22,w=23,x=24,y=25;
int aa=0,bb=0,cc=0,dd=0,ee=0,ff=0,gg=0,hh=0,ii=0,jj=0,kk=0,ll=0,mm=0,nn=0,oo=0,pp=0,qq=0,rr=0,ss=0,tt=0,uu=0,vv=0,ww=0,xx=0,yy=0;
int contador=0;
 arquivo=fopen("aulas4you.txt","w" ); 
aa=0;
for(a=1;a<=-9;a++){ 
bb=0;
for(b=bb+1+a;b<=-7;b++){ 
cc=0;
for(c=cc+1+b;c<=-6;c++){ 
dd=0;
for(d=dd+1+c;d<=-5;d++){ 
ee=0;
for(e=ee+1+d;e<=-4;e++){ 
ff=0;
for(f=ff+1+e;f<=-3;f++){ 
gg=0;
for(g=gg+1+f;g<=-2;g++){ 
hh=0;
for(h=hh+1+g;h<=-1;h++){ 
ii=0;
for(i=ii+1+h;i<=0;i++){ 
jj=0;
for(j=jj+1+i;j<=1;j++){ 
kk=0;
for(k=kk+1+j;k<=2;k++){ 
ll=0;
for(l=ll+1+k;l<=3;l++){ 
mm=0;
for(m=mm+1+l;m<=4;m++){ 
nn=0;
for(n=nn+1+m;n<=5;n++){ 
oo=0;
for(o=oo+1+n;o<=6;o++){ 
pp=0;
for(p=pp+1+o;p<=7;p++){ 
qq=0;
for(q=qq+1+p;q<=8;q++){ 
rr=0;
for(r=rr+1+q;r<=9;r++){ 
ss=0;
for(s=ss+1+r;s<=10;s++){ 
tt=0;
for(t=tt+1+s;t<=11;t++){ 
uu=0;
for(u=uu+1+t;u<=12;u++){ 
vv=0;
for(v=vv+1+u;v<=13;v++){ 
ww=0;
for(w=ww+1+v;w<=14;w++){ 
xx=0;
for(x=xx+1+w;x<=15;x++){ 
yy=0;
for(y=x+1;y<=15;y++){
fprintf(arquivo," %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n " ,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y);} 
 if(y==80){xx++;} 
 } if(x==79){ww++;} 
 } if(w==78){vv++;} 
 } if(v==77){uu++;} 
 } if(u==76){tt++;} 
 } if(t==75){ss++;} 
 } if(s==74){rr++;} 
 } if(r==73){qq++;} 
 } if(q==72){pp++;} 
 } if(p==71){oo++;} 
 } if(o==70){nn++;} 
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
