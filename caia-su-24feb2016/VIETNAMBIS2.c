#include "dx.h"
void VIETNAMBIS2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=26020;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3022&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=485; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=12; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,12,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+26,jvj+25,jvj+23)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+29,jvj+28,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+32,jvj+31,jvj+14)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=87; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,87,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=9; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,9,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+38,jvj+37,jvj+35)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+33; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+33,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+34)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+35)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
