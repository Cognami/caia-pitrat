#include "dx.h"
void ATOME87T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V12=0,V15=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20087;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3128&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,R,V10)*/
V10=pile[WZ2]; 
if((V10!=1)) goto l6;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1274,R,V12)*/
V12=pile[WZ2]; 
if((V12!=1)) goto l6;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+2,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l6;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(509,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[R]) goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+4,jvj+6)*/
pile[v[22]]=365; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,jvj+4,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[1290])( );if(v[102]) goto l2;     /*DEPEXP0(jvj+4,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
x[jvj+29]=x[jvj+7] ;z[jvj+29]=z[jvj+7];
l4:if((x[jvj+29]<=0)) goto l2;
x[jvj+11]=s[x[jvj+29]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+29];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1291])( );if(v[102]) goto l5;     /*CONVEXP0(jvj+11,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; pile[WZ2]=R; pile[WZ3]=jvj+14; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+9,jvj+13,R,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ1]=jvj+4; pile[WZ3]=(-656); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+4,110,(-656),jvj+23)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V15,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3128; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3128,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20087; pile[WZ4]=jvj+21; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(158,1,218,20087,jvj+21,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+17,159,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+24)*/
pile[WZ3]=26; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+15,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+28; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+28,jvj+25)*/
pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+18,107,jvj+25)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+18,107,jvj+16)*/
pile[WZ1]=jvj+17; 
(*f[1296])( );     /*NOUVCONTR0(jvj+18,jvj+17)*/
l5:x[jvj+29]=t[x[jvj+29]];
goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
