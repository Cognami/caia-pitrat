#include "dx.h"
void CRETOUR6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int NK,NP;
int NNNX;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26121;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2480&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NK=pile[v[22]]; NP=pile[v[22]+1]; v[22]+=3; 
V1=NP-NK;
NNNX=V1;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNX; return;
}
