Program Pzim ;
var
A, B, C,tri,cir,tra,qua,ret:real;
Begin 
    readln(A,B,C);
	tri:=(A*C)/2;
	cir:=3.14159*(C*C);
	tra:=(C*(A+B))/2;
	qua:=B*B;
	ret:=A*B;
	writeln('TRIANGULO: ',tri:3:3);
  	writeln('CIRCULO: ',cir:3:3);
  	writeln('TRAPEZIO: ',tra:3:3);
  	writeln('QUADRADO: ',qua:3:3);
  	writeln('RETANGULO: ',ret:3:3);
    readln;
End.


