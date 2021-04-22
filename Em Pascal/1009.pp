Program pzim;
var
  nome:string;
  slfixo,tvendas, total:real;
Begin 
   readln(nome);
   readln(slfixo);
  	readln(tvendas);
	tvendas:=tvendas*0.15;
	total:=slfixo+tvendas;
	writeln('TOTAL = R$ ',total:2:2);
   readln; 
End.

