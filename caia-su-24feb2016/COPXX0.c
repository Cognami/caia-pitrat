#include "dx.h"
void COPXX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RM,V;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10108;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2152&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RM=pile[v[22]]; V=pile[v[22]+1]; D=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+3; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+3)*/
pile[WZ1]=47; pile[WZ2]=436; pile[WZ3]=jvj+3; pile[WZ4]=D; 
(*f[181])( );     /*QUADRI2(100,47,436,jvj+3,D)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=D; 
(*f[36])( );     /*PLUSC0(RM,107,D)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+4)*/
pile[WZ3]=172; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+17)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,103,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+16,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=436; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,436,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=111; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+9,jvj+10,111,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+12,jvj+11,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=337; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,337,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+7; 
(*f[298])( );     /*TRIENS1(jvj+6,(-20),jvj+5,105,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+2; 
(*f[58])( );     /*TRI3(jvj+7,42,100,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=D; 
(*f[1819])( );     /*COPV1(jvj+2,184,D,jvj+2)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
