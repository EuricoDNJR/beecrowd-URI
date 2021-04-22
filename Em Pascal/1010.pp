Program Pzim ;
Var
cod,unit1,unit2:integer;
valor1,valor2,pag:real;
Begin
    readln(cod,unit1,valor1);
    readln(cod,unit2,valor2);
	valor1:=unit1*valor1;
	valor2:=unit2*valor2;
	pag:=valor1+valor2;
	writeln('VALOR A PAGAR: R$ ',pag:0:2);
	readln;
End.


