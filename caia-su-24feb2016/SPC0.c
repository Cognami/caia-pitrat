#include "dx.h"
void SPC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int I,X;
int J;

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
V1=I+1;
c[v[1]][I]=X;
J=V1;
v[22]-=3; pile[v[22]+2]=J; return;
}
