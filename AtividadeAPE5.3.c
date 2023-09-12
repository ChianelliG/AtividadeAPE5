# include <stdio.h>
# include <math.h>

int main(){
      int a, b , c, delta, x1, x2, delta2;

      printf ("variavel a \n");
	  scanf ("%i",&a);
	  printf ("variavel b \n");
	  scanf ("%i",&b);
	  printf ("variavel c \n");
	  scanf ("%i",&c);
	  
	  delta=sqrt(b*b-4*a*c);
	  
	  if(delta > 0){
	  printf ("delta e %i\n", delta);
	  x1=(-b+delta)/2*a;
	  x2=(-b-delta)/2*a;
	  printf ("As raizes sao respectivamente %d %d\n", x1, x2);
	  
	  }else if(delta = 0){
	  x1=-b/2*a;
	  x2=-b/2*a;
	  printf ("Raiz  única.\n");
	  
	  }else{
	  printf ("Não existe raiz.\n");
	  }

system ("pause");

}
