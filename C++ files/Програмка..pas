program Project2; 

const n=6; 
var pi:array[1..n] of integer; 
i,j,d,r,fact:integer; 
begin 
 r:=23; 
 pi[n]:=1; 
 fact:=1; 
 for j:=1 to n-1 do 
  begin 
   fact:=fact*j; 
   d:=(r mod(fact*(j+1))) div fact; 
   r:=r-d*fact; 
   pi[n-j]:=d+1; 
   for i:=n-j+1 to n do 
    if (pi[i]>d) then pi[i]:=pi[i]+1; 
  end; 
 for i:=1 to n do write(pi[i],','); 
 readln; 
end.
