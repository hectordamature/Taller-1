#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int longcadena (char *cad);
char *copiarCadenas (char *cadOrigen, char *cadDestino); 
char *copiarN(char *cadOrigen, char *cadDestino, int n);
char *copiarNM(char *cadOrigenc, char *cadDestino, int n, int m);
int compararCadenas(char *cad1, char *cad2);
char *concadenar(char *cad1, char *cad2);
char *cambiarCad(char *cad1, char car);
char * cambiarMayus(char *cadM);
int existeCara(char *cadE, char car);
int posicionCara(char *cadP, char car);
int posicionCara2(char *cadA,char car);

int main(){
	char *x="hola",*c, *s, *y, *z, *w="Buenas",g[]="buenas", *f, *k, a[]="yatusabe";
	int tot, n, m, q, t, i, u;
	w= "buenas";
	//scanf("%s", x);
	tot= longcadena(x);
	printf("La longitud es: %d\n", tot);
	y= copiarCadenas(x,y);
	printf("la cadena fue copiada exotisamente y esta es %s\n", y);
	printf("hasta donde quiere copiar la cadena ahora?\n");
	scanf("%d", &n);
	z= copiarN(x, z, n);
	printf("%s\n", z);
	printf("ahora desde?");
	scanf("%d", &n);
	printf("hasta?");
	scanf("%d", &m);
	c= copiarNM(x, c, n, m);
	printf("%s\n", c);
	q= compararCadenas(x,w);
	printf("%d\n", q);
	k= concadenar(x,w);
	printf("%s\n", k);
	s= cambiarCad(g,'n');
	printf("%s\n",s);
	f= cambiarMayus(a);
	printf("%s\n",f);
	t= existeCara(a, 'S');
	printf("%d\n", t);
	i= posicionCara(a, 'S');
	printf("%d\n", i);
	u= posicionCara2(a, 'S');
	printf("%d\n", u);
	return 1;
}

int longcadena(char *cad){
	int i,longitud=0;
	for(i=0; cad[i]!='\0'; i++){
		longitud+=1;
	}
	return longitud;
}

char *copiarCadenas (char *cadOrigen, char *cadDestino) {
	int i;
	cadDestino= (char *) malloc (longcadena(cadOrigen)+1);
	for(i=0; cadOrigen[i]!='\0'; i++){
		cadDestino[i]=cadOrigen[i];
	}
	return cadDestino;
}

char *copiarN(char *cadOrigen, char *cadDestino, int n){
	int i;
	cadDestino= (char *) malloc(n+1);
	for(i=0; i<n; i++){
		cadDestino[i]=cadOrigen[i];
	}
	return cadDestino;
}

char *copiarNM(char *cadOrigen, char *cadDestino, int n, int m){
	int i;
	cadDestino= (char *) malloc(m-n+1);
	for(i=0; i<m; i++){
		cadDestino[i]=cadOrigen[n];
		n++;
	}
	return cadDestino;
}

int compararCadenas(char *cad1, char *cad2){
	int cadN=0, cadM=0, i;
	for(i=0; cad1[i]!='\0'; i++){
		cadN+=cad1[i];
	}
	for(i=0; cad2[i]!='\0'; i++){
		cadM+=cad2[i];
	}
	if(cadN==cadM){
		return 0;
	}
	else{ 
		if(cadN>cadM){
			return 1;
		}
		else{
			return -1;
		}
	}
}

char *concadenar(char *cad2, char *cad1){
	int i,f=1;
	char *cadC;
	cadC= (char *)malloc(longcadena(cad2)+longcadena(cad1)+1);
	for(i=0; cadC[i]!='\0'; i++){
		if(cad2[i]!='\0'){
			cadC[i]==cad2[i];
		}
		else if(cad2[i]=='\0'){
			f= 0;
		}
		if(cad1[i]!='\0' && f==0){
			cadC[i]==cad1[i];

		}
	}
	return cadC;
}

char *cambiarCad(char *cad1, char car){
	int i, m= longcadena(cad1);
	for(i=0; i<m; i++){
		cad1[i]= car;
	}
	return cad1;
}

char * cambiarMayus(char *cadM){
	int a,b;
	a=longcadena(cadM);
	for (b=0;b<a;b++){
		if (cadM[b]>=97&&cadM[b]<=122){
			cadM[b]-=32;
		}
	}
	return cadM;
}
int existeCara(char *cadE, char car){
	int i,t;
	for(i=0; cadE[i]!='\0'; i++){
		if(cadE[i]==car){
			return 1;
		}
	}
	return 0;
}

int posicionCara(char *cadP,char car){
	int l, i;
	l=longcadena(cadP);
	for (i=0;i<=l;i++){
		if (cadP[i]==car){
			return i;
		}
	}
	return -1;
}

int posicionCara2(char *cadA,char car){
	int j, l;
	j=longcadena(cadA);
	for (l;l>=0;--l){
		if (cadA[l]==car){
			return l;
		}
	}
	return -1;
}
