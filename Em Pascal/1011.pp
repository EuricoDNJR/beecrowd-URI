Program Pzim ;
var
R,pi,calc:real;
Begin
     pi:=3.14159;
    readln(R);
    R:=exp(3*ln(R));
	calc:=(4.0/3)*pi*R;
    writeln('VOLUME = ',calc:5:3);
    readln;
End.


