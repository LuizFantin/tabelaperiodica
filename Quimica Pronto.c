#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>


//CABEÇALHOS DE FUNÇÕES
void trocaJogador();
void vitoria();
void acerto();
void sorteioEL();
void resposta ();
void repetir();

//VARIÁVEIS GLOBAIS
int a,pt1=0,pt2=0,resp;
int sair=0, jogadorAT=1,out=0;











//FUNÇÃO PRINCIPAL

int main ()
{
	while(out==0)
	{
		while(sair==0)
		{
			system("cls");
			sorteioEL();
			resposta();
			acerto();
			vitoria();
			trocaJogador();
		}
		repetir();
		getch();
	}
}



// FUNÇÔES AUXILIARES
void trocaJogador()
{
	
	if(jogadorAT==2)
	{
		printf("jogador 1, sua vez\n\n");
		jogadorAT=1;
	}
	else
	{
		printf("jogador 2, sua vez\n\n");
		jogadorAT=2;
	}
	getch();
}


void vitoria()
{
	if(pt1==10)
	{
		printf("Parabens, jogador 1 ganhou\n\n");
		sair=1;
	}
	if(pt2==10)
	{
		printf("Parabens, jogador 2 ganhou\n\n");
		sair=1;
	}
}

void repetir()
{
	int b;
	printf("Deseja jogar novamente\n1 - SIM\nQualquer tecla - NAO");
	scanf("%d",&b);
	if(b==1)
	{
		pt1=0;pt2=0;sair=0;
	}
	else
	{
		out=1;
	}
	
}

void acerto()
{
	a++;
	if(resp==a)
	{
		printf("ACERTOU!\n\n");
		
		if(jogadorAT==1)
		{
			pt1++;
		}
		
		if(jogadorAT==2)
		{
			pt2++;
		}
	}
	else
	{
		printf("ERROU!\n\n");
	}
	getch();
}

void resposta()
{

	scanf("%d",&resp);
}

void sorteioEL()
{
	int i;
	srand(time(NULL));
	
	a=rand()%117;
	
	printf("Ola, tente acertar o numero atomico do elemento...");
	if(a==0)
	{
		printf("(H) - Hidrogenio\n");
	}
	else if(a==1)
	{
		printf("(He) - Helio\n");
	}
	else if(a==2)
	{
		printf("(Li) - Litio\n");
	}
	else if(a==3)
	{
		printf("(Be) - Berilio\n");
	}
	else if(a==4)
	{
		printf("(B) - Boro\n");
	}
	else if(a==5)
	{
		printf("(C) - Carbono\n");
	}
	else if(a==6)
	{
		printf("(N) - Nitrogenio\n");
	}
	else if(a==7)
	{
		printf("(O) - Oxigenio\n");
	}
	else if(a==8)
	{
		printf("(F) - Fluor\n");
	}
	else if(a==9)
	{
		printf("(Ne) - Neonio\n");
	}
	else if(a==10)
	{
		printf("(Na) - Sodio\n");
	}
	else if(a==11)
	{
		printf("(Mg) - Magnesio\n");
	}
	else if(a==12)
	{
		printf("(Al) - Aluminio\n");
	}
	else if(a==13)
	{
		printf("(Si) - Silicio\n");
	}
	else if(a==14)
	{
		printf("(P) - Fosforo\n");
	}
	else if(a==15)
	{
		printf("(S) - Enxofre\n");
	}
	else if(a==16)
	{
		printf("(Cl) - Cloro\n");
	}
	else if(a==17)
	{
		printf("(Ar) - Argonio\n");
	}
	else if(a==18)
	{
		printf("(K) - Potacio\n");
	}
	else if(a==19)
	{
		printf("(Ca) - Calcio\n");
	}
	else if(a==20)
	{
		printf("(Sc) - Escandio\n");
	}
	else if(a==21)
	{
		printf("(Ti) - Titanio\n");
	}
	else if(a==22)
	{
		printf("(V) - Vanadio\n");
	}
	else if(a==23)
	{
		printf("(Cr) - Cromo\n");
	}
	else if(a==24)
	{
		printf("(Mn) - Manganes\n");
	}
	else if(a==25)
	{
		printf("(Fe) - Ferro\n");
	}
	else if(a==26)
	{
		printf("(co) - Cobalto\n");
	}
	else if(a==27)
	{
		printf("(Ni) -Niquel\n");
	}
	else if(a==28)
	{
		printf("(Cu) - Cobre\n");
	}
	else if(a==29)
	{
		printf("(Zn) - Zinco\n");
	}
	else if(a==30)
	{
		printf("(Ga) - Galio\n");
	}
	else if(a==31)
	{
		printf("(Ge) - Germanio\n");
	}
	else if(a==32)
	{
		printf("(As) - Arsenio\n");
	}
	else if(a==33)
	{
		printf("(Se) - Selenio\n");
	}
	else if(a==34)
	{
		printf("(Br) - Bromo\n");
	}
	else if(a==35)
	{
		printf("(Kr) - Criptonio\n");
	}
	else if(a==36)
	{
		printf("(Rb) - Rubidio\n");
	}
	else if(a==37)
	{
		printf("(Sr) - Estroncio\n");
	}
	else if(a==38)
	{
		printf("(Y) - Itrio\n");
	}
	else if(a==39)
	{
		printf("(Zr) - Zirconio\n");
	}
	else if(a==40)
	{
		printf("(Nb) - Niobio\n");
	}
	else if(a==41)
	{
		printf("(Mo) - Molibdenio\n");
	}
	else if(a==42)
	{
		printf("(Tc) - Tecnecio\n");
	}
	else if(a== 43)
	{
		printf("(Ru) - Rutenio\n");
	}
	else if(a==44)
	{
		printf("(Rh) - Rodio\n");
	}
	else if(a==45)
	{
		printf("(Pd) - Paladio\n");
	}
	else if(a==46)
	{
		printf("(Ag) - Prata\n");
	}
	else if(a==47)
	{
		printf("(Cd) - Cadmio\n");
	}
	else if(a==48)
	{
		printf("(In) - Indio\n");
	}
	else if(a==49)
	{
		printf("(Sn) - Estanho\n");
	}
	else if(a==50)
	{
		printf("(Sb) - Antimonio\n");
	}
	else if(a==51)
	{
		printf("(Te) - Telurio\n");
	}
	else if(a==52)
	{
		printf("(I) - Iodo\n");
	}
	else if(a==53)
	{
		printf("(Xe) - Xenonio\n");
	}
	else if(a==54)
	{
		printf("(Cs) - Cesio\n");
	}
	else if(a==55)
	{
		printf("(Ba) - Bario\n");
	}
	else if(a==56)
	{
		printf("(La) - Lantanio\n");
	}
	else if(a==57)
	{
		printf("(Ce) - Cerio\n");
	}
	else if(a==58)
	{
		printf("(Pr) - Praseodimio\n");
	}
	else if(a==59)
	{
		printf("(Nd) - Neodimio\n");
	}
	else if(a==60)
	{
		printf("(Pm) - Promecio\n");
	}
	else if(a==61)
	{
		printf("(Sm) - Samario\n");
	}
	else if(a==62)
	{
		printf("(Eu) - Europio\n");
	}
	else if(a==63)
	{
		printf("(Gd) - Gadolinio\n");
	}
	else if(a==64)
	{
		printf("(Tb) - Terbio\n");
	}
	else if(a==65)
	{
		printf("(Dy) - Disprosio\n");
	}
	else if(a==66)
	{
		printf("(Ho) - Holmio\n");
	}
	else if(a==67)
	{
		printf("(Er) - Erbio\n");
	}
	else if(a==68)
	{
		printf("(Tm) - Tulio\n");
	}
	else if(a==69)
	{
		printf("(Yb) - Iterbio\n");
	}
	else if(a==70)
	{
		printf("(Lu) - Lutecio\n");
	}
	else if(a==71)
	{
		printf("(Hf) - Hafnio\n");
	}
	else if(a==72)
	{
		printf("(Ta) - Tantalo\n");
	}
	else if(a==73)
	{
		printf("(W) - Tungstenio\n");
	}
	else if(a==74)
	{
		printf("(Re) - Renio\n");
	}
	else if(a==75)
	{
		printf("(Os) - Osmio\n");
	}
	else if(a==76)
	{
		printf("(Ir) - Iridio\n");
	}
	else if(a==77)
	{
		printf("(Pt) - Platina\n");
	}
	else if(a==78)
	{
		printf("(Au) - Ouro\n");
	}
	else if(a==79)
	{
		printf("(Hg) - Mercurio\n");
	}
	else if(a==80)
	{
		printf("(Tl) - Talio\n");
	}
	else if(a==81)
	{
		printf("(Pb) - Chumbo\n");
	}
	else if(a==82)
	{
		printf("(Bi) - Bismuto\n");
	}
	else if(a==83)
	{
		printf("(Po) - Polonio\n");
	}
	else if(a==84)
	{
		printf("(At) - Astato\n");
	}
	else if(a==85)
	{
		printf("(Rn) - Radon\n");
	}
	else if(a==86)
	{
		printf("(Fr) - Francio\n");
	}
	else if(a==87)
	{
		printf("(Ra) - Radio\n");
	}
	else if(a==88)
	{
		printf("(Ac) - Actinio\n");
	}
	else if(a==89)
	{
		printf("(Th) - Torio\n");
	}
	else if(a==90)
	{
		printf("(Pa) - Protactinio\n");
	}
	else if(a==91)
	{
		printf("(U) - Uranio\n");
	}
	else if(a==92)
	{
		printf("(Np) - Netunio\n");
	}
	else if(a==93)
	{
		printf("(Pu) - Plutonio\n");
	}
	else if(a==94)
	{
		printf("(Am) - Americio\n");
	}
	else if(a==95)
	{
		printf("(Cm) - Curio\n");
	}
	else if(a==96)
	{
		printf("(Bk) - Berquelio\n");
	}
	else if(a==97)
	{
		printf("(Cf) - Californio\n");
	}
	else if(a==98)
	{
		printf("(Es) - Einstenio\n");
	}
	else if(a==99)
	{
		printf("(Fm) - Fermio\n");
	}
	else if(a==100)
	{
		printf("(Md) - Mendelevio\n");
	}
	else if(a==101)
	{
		printf("(No) - Nobelio\n");
	}
	else if(a==102)
	{
		printf("(Lr) - Laurencio\n");
	}
	else if(a==103)
	{
		printf("(Rf) - Rutherfordio\n");
	}
	else if(a==104)
	{
		printf("(Db) - Dubnio\n");
	}
	else if(a==105)
	{
		printf("(Sg) - Seaborgio\n");
	}
	else if(a==106)
	{
		printf("(Bh) - Bohrio\n");
	}
	else if(a==107)
	{
		printf("(Hs) - Hassio\n");
	}
	else if(a==108)
	{
		printf("(Mt) - Meitnerio\n");
	}
	else if(a==109)
	{
		printf("(Ds) - Darmstacio\n");
	}
	else if(a==110)
	{
		printf("(Rg) - Roentgenio\n");
	}
	else if(a==111)
	{
		printf("(Cn) - Copernicio\n");
	}
	else if(a==112)
	{
		printf("(Uut) - Ununtrio\n");
	}
	else if(a==113)
	{
		printf("(Fl) - Flerovio\n");
	}
	else if(a==114)
	{
		printf("(Uup) - Ununpentio\n");
	}
	else if(a==115)
	{
		printf("(Lv) - Livermorio\n");
	}
	else if(a==116)
	{
		printf("(Uus) - Ununseptio\n");
	}
	else if(a==117)
	{
		printf("(Uuo) - Ununoctio\n");
	}
}

