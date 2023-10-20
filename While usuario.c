#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main (){
setlocale (LC_ALL,"portuguese");	

//Variavel
char login [200] ;
char loginCerto [200] = "vitoria" ;
char senha [200];
char senhaCerto [200] = "vi123" ;

//Adquirindo Dados
	printf ("|===========login===========| \n");
	gets(login);
	
	system ("cls || clear");
	
	printf ("|=============senha===========| \n");
	gets (senha);

	system ("cls || clear");
	
//Operção
do
{
	
if (strcmp(senha, senhaCerto) == 0 && strcmp (login, loginCerto) == 0) {

	printf("|==========Seja bem - vindo!======== |\n");
	;
	
} else {
	
	printf ("|=========Senha ou usuario invalido!==========| \n"); 
}

} while (strcmp(senha, senhaCerto) != 0 || strcmp (login, loginCerto) != 0);


return 0;
}