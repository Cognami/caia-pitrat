#include "dx.h"
void ATOME49T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V23=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20049;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3601&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+25]=x[jvj+9] ;z[jvj+25]=z[jvj+9];
l2:if((x[jvj+25]>0)) goto l3;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:x[jvj+3]=s[x[jvj+25]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+25];
if((x[jvj+3]==x[RR])) goto l4;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==147) goto l5;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==147) goto l5;
l4:x[jvj+25]=t[x[jvj+25]];
goto l2;
l5:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l4;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=408)) goto l8;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+11,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=486)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+11,jvj+17)*/
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+18)*/
V23=x[jvj+18];
l9:if((V23<=0)) goto l8;
V1=s[V23];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+11,110,(-601),jvj+23)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+24)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(206,715,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3599; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3599,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20049; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,289,218,20049,jvj+22,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+24)*/
(*f[481])( );     /*STOCKER0(jvj+19)*/
V23=t[V23];
goto l9;
l8:x[jvj+10]=t[x[jvj+10]];
l6:if((x[jvj+10]>0)) goto l7;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
