#include "dx.h"
void ATOME207T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V9=0;
int DD;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=20207;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3307&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DD=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+2; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+2)*/
for(i=x[jvj+2],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=1)) goto l3;
pile[v[22]]=365; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(365,DD,jvj+3)*/
for(i=x[jvj+3],V5=0;i>0;i=t[i],V5++)  ;
if((V5==2)) goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=t[x[jvj+3]];
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+8]=s[x[jvj+3]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+3];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l2;
pile[v[22]]=498; pile[WZ1]=DD; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(498,DD,jvj+4)*/
pile[v[22]]=462; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(462,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l3;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=DD; pile[WZ2]=110; pile[WZ3]=(-2829); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+13)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V9,858,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3307; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3307,246,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=20207; pile[WZ2]=218; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,20207,218,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=jvj+12; pile[WZ3]=159; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+14,1,158,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=489; pile[WZ2]=DD; pile[WZ3]=jvj+8; 
(*f[1753])( );     /*LIER1(jvj+7,489,DD,jvj+8)*/
goto l3;
}
