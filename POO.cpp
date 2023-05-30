#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <math.h>
//para Strings
#include<stdio.h>
#include<string.h>
#include<cstdio>
using namespace std;

//ex1
/*
int main(){
	int aluno_n;
	cout << "Insira o numero do aluno: ";
	cin >> aluno_n;
	cout << "O numero do aluno e: " << aluno_n;
	
}*/

//ex2

/*
int main(){
	
	float c1, c2, hipotenusa;

	cout << "Insira o primeiro cateto: ";
	cin >> c1;
	cout << "Insira o segunto cateto: ";
	cin >> c2;
	hipotenusa = sqrt((c1 * c1) + (c2*c2));
	cout << "A hipotenusa e: " << hipotenusa;
}*/
//ex3

/*
int main(){
	float nt_1, nt_2, media;
	
	cout << "Insira a primeira nota: ";
	cin >> nt_1;
	cout << "Insira a segunda nota: ";
	cin >> nt_2;
	
	media = (nt_1 + nt_2) / 2;

	if (nt_1 || nt_2 < 0 || nt_1 || nt_2 > 20)
		cout << "Notas invalidas.";
	else if (media >= 9.5)
		cout << "Aprovado com media de: " << media;
	else
		cout << "Reprovado com media de: " << media;
*/

//ex4

/*
int main(){
	float nt_1, nt_2, media;
	
	cout << "Insira a primeira nota: ";
	cin >> nt_1;
	cout << "Insira a segunda nota: ";
	cin >> nt_2;
	
	media = (nt_1 + nt_2) / 2;

	(media >= 9.5)?
		cout << "Aprovado com media de: " << media:
		cout << "Reprovado com media de: " << media;
}
*/
//ex5

/*
int main(){
	float n1, n2;
	
	cout << "Insira a primeiro numero: ";
	cin >> n1;
	cout << "Insira a segundo numero: ";
	cin >> n2;
	
	(n1 > n2)?
		cout << n1 << " E maior que " << n2:
		cout << n2 <<" E maior que " << n1 ;		

}
*/
//ex6

/*
int main(){
	int quant, desconto, total;
	
	cout << "Insira a quantidade de unidades que deseja comprar: ";
	cin >> quant;
	
	if (quant >= 500 && quant <= 1000){
		desconto = (13 * quant) * 0.05;
		total = (quant*13)-desconto;}
		
	else if (quant > 1000 ){
		desconto = (13*quant)* 0.08;
		total = (quant*13)-desconto;}
		
	else 
		total=13*quant;
	cout << "Tem de pagar :" << total;
}*/

//ex7
/*
int main(){
	int numero;
	cout << " 1 - Executar o programa Calculadoura \n 2 - Converter graus centigrados/fahrenheit \n 3 - Converter metros/quilometros \n 4 - Sair \n Indique o numero: ";
	cin >> numero;
	
	switch (numero){
		case 1:
			cout << "Calculadoura a executar ...";
		break;
		case 2:
			cout << "Coversao de temperaturas";
		case 3:
			cout << "Conversao de distancia";
		break;
		case 4:
			cout << "A terminar o programa ...";
		break;
		default:
			cout << "Opcao invalida";
	}
}
*/
//8
/*
int main(){
	char caracter;
	int n1, n2;
	
	cout << "Introduza o primeiro numero: ";
	cin >> n1;
	cout << "Introduza o segundo numero: ";
	cin >> n2;
	
	cout << "Introduza a operacao matematica (+,-,*,/,%):";
	cin >> caracter;
	switch (caracter){
		case '+':
			cout << "A soma de n1 + n2 e: " << (n1 + n2);
		break;
		case '-':
			cout << "A subtracao de n1 - n2 e:" << (n1 - n2);
		case '*':
			cout << "A multiplicacao de n1 * n2 e:" << (n1 * n2);
		break;
		case '/':
			cout << "A divisao de n1 / n2 e: " << (n1 / n2);
		break;
		case '%':
			cout << "O resto de divisao de n1 % n2 e : " <<(n1 % n2);
		break;
		
		default:
			cout << "Opcao invalida";
	}	
}*/

//9
/*
int main(){
	int produto;
	
	cout << " 1 - Cereais Nestum  2 - Sumo Tropical \n 3 - Geleia Morango  4 - Massa italiana \n 5 - Arroz Amarelo  6 - Leite de Soja \n 7 - Coca cola Zero  8 - Couve de Bruxelas \n Escreva o numero que deseja:";
	cin >> produto;
	
	switch (produto){
		case 1:
			cout << "Este produto tem 20% de desconto";
		break;
		case 2:
			cout << "Este produto tem 15% de desconto";
		break;
		case 3:
			cout << "Este produto tem 20% de desconto";
		break;
		case 4:
			cout << "Este produto tem 10% de desconto";
		break;
		case 5:
			cout << "Este produto tem 10% de desconto";
		break;
		case 6:
			cout << "Este produto tem 20% de desconto";
		break;
		case 7:
			cout << "Este produto tem 15% de desconto";
		break;
		case 8:
			cout << "Este produto tem 5% de desconto";
		break;
		default:
			cout << " Opcao invalida";
	}
}
*/
//15
/*

int main(){
	char carater;
	
	cout << "escreve um carater: ";
	cin >> c;
	
	if( ((c >= 'A') && (c <= 'Z')) || (c >= 'a') && (c <= 'z'))
		cout<< "Letra";
	else if (( c >= '0') && (c <= '9'))
		cout<<"Numero";
	else 
		cout<<"Simbolo"; 
}
*/

// 10
/*
int main(){
	int number = 1;
	while (number <= 5){
		cout << "O dobro de " << number <<" e: "<< number*2 << "\n";
		i ++ ;
	}	
}
*/

/*
int main(){
	int number;
	for(number=1; number <=5; number++){
		cout << "O dobro de " << number <<" e: "<< number*2 << "\n";
		
	}
}
OU*/

/*


/*
int main(){
	for(int number=1; number <=5; number++){
		cout << "O dobro de " << number <<" e: "<< number*2 << "\n";
		
	}
}
*/


//Ex11

/*
int main(){
	int number;
	cout << "Insira um numero entre 1 e 15:\n";
	cin >> number;
	while( number <= 15){
		cout << "n= " << number <<"\n";
		number ++;
	}
	
}
*/

//Imprime n mesmo se nao estiver no intervalo

/*
int main(){
	int number;
	cout << "Insira um numero entre 1 e 15:\n";
	cin >> number;
	do{
		cout << "n= " << number <<"\n";
		number ++;
	}
	while( number <= 15);
}
*/

/*
int main(){
	int number;
	do{
		cout << "Insira um numero entre 1 e 15:\n";
		cin >> number;
	}
	while( number>=1 || number <= 15);
		while( number <= 15){
			cout << "n= " << number <<"\n";
			number ++;
			}
}
*/

//Soma dos valores do loop gerados pelo ex11

/*
int main(){
	int number, soma= 0;
	cout << "Insira um numero entre 1 e 15:\n";
	cin >> number;
	while( number <= 15){
		cout << "n= " << number <<"\n";
		soma += number;
		number ++;
	}
	cout << "O total da soma:" << soma;
	
}


*/

//Ex12

/*
int main(){
	int n1, n2, produto;
	do{
		cout << "Insira um numero inteiro:\n";
		cin >> n1;
		cout << "Insira outro numero inteiro:\n";
		cin >> n2;
		produto = n1*n2;
		cout << n1 << " x " << n2 << " = " << produto << "\n";
		
	}
	while( produto >= 10 && produto <= 1000);
		
}
*/

// Ex13 Elabore um programa que peca ao utilizador que introduza sucessivas vezes um
// numero inferior a 100 e que va calculando o respetivo somatorio, o qual vai ser escrito
// no ecra, ate que o valor desse somatorio atinja ou ultrapasse o valor 500. Uma vez
// terminado esse ciclo deve ser escrito no ecra a media dos valores validos introduzidos.

/*
int main(){
	int number, soma = 0, contador=0 ;
	
		do{
			cout<< "Insira um numero inferior a 100: \n";
			cin>> number;
			if ( number >= 100){
				cout << "Valor nao valido \n";
			}
			else{
				//soma = soma + number;
				soma += number;
				//numero divisivel pelo total soma que d� media
				contador += 1;
				cout << "soma =" << soma << "\n";
				
			}
		
			}
		while ( soma < 500);
			cout << "o valor da media: " << soma/contador;
}
*/

// Ex14 Implemente um programa onde � pedido ao utilizador que introduza um n�mero, o
// programa dever� devolver todos os n�meros pares que antecedem o n�mero introduzido
// pelo utilizador

/*
int main(){
	int number, par=0, impar=0;
	cout << "Introduza um numero:\n";
	cin >> number;
	for (int i=0; i < number; i+=2){
		cout << i << " ";
	}
	
	
}
*/

//FICHA VI

//Ex1

/*
int main(){
	int number;
	cout << "Introduza um numero entre 1 e 10:\n";
	cin>> number;
	if(number >=1  && number <=10){
		cout<< "Numero valido";
	}
	else{
		cout<<"Invalido";
	}
}
*/

//Ex2

/*
int main(){
	int n1, n2, n3;
	cout << "Introduza um numero:\n";
	cin>> n1;
	cout << "Introduza um segundo numero:\n";
	cin >> n2;
	cout << "Introduza um terceiro numero:\n";
	cin >> n3;
	if ( n1 > n2 && n1 > n3){
		cout<< "O maior numero e: " << n1;
	}
	else if ( n2 > n1 && n2 > n3){
		cout<< "O maior numero e: " << n2;
	}else{
		cout<< "O maior numero e: " << n3;
	}
}
*/

//Ex3

/*
int main(){
	char c;
	
	cout << "Introduz uma Letra: ";
	cin >> c;
	
	if ((c >= 'A') && (c <= 'Z')) {
		cout<< "Letra Maiscula";
	} 
	else if((c >= 'a') && (c <= 'z')){
		cout<< "Letra minuscula";
	}
	else{
		cout<< "ERRO!!!";
	}
}
*/

//Ex4

/*
int main(){
	int numero;
	
	cout << "Insere um numero entre 0 e 3:\n";
	cin >> numero;
	
	switch (numero){
		case 0:
			cout << "Zeros";
		break;
		case 1:
			cout << "Um";
		break;
		case 2:
			cout << "Dois";
		break;
		case 3:
			cout << "Tres";
		break;
		default:
			cout << " Opcao invalida";
	}
}
*/

//Ex5

/*
int main(){
	int number;
	cout << "Introduza um numero:\n";
	cin >> number;
	for (int x = number; x > 0; x--){
		cout << x << " ";
	}
	for (int i=0; i < number; i++){
		cout << i << " ";
	}
}
*/

/*int main() {
   int num;
   cout << "Insira um numero: ";
   cin >> num;

   // Sequencia decrescente
   cout << "Sequencia decrescente: ";
   for (int i = num; i >= 0; i--) {
      cout << i << " ";
   }

   // Sequencia crescente
   cout << "\nSequencia crescente: ";
   for (int i = 0; i <= num; i++) {
      cout << i << " ";
   }

   return 0;
}*/	

//Ex6

/*
void main(){
	int op;
	do {
		cout<<"\n MENU DE COMANDOS"<<"\n\n";
		cout<<" 0. Sair \n";
		cout<<" 1. Mostrar\n";
		cout<<" 2. Apresentar\n\n";
		cout<<" Escolha uma opcao: ";
		cin>>op;
	}
	while((op > 0) && (op < 3));
	}
*/
/*

int main() {
    int op = -1;
	// while(op < 1 || op > 2) se nao usar condicao if
    while (op != 0 && op != 1 && op != 2) {
        cout << "\n MENU DE COMANDOS" << "\n\n";
        cout << " 0. Sair\n";
        cout << " 1. Mostrar\n";
        cout << " 2. Apresentar\n\n";
        cout << " Escolha uma opcao: ";
        cin >> op;
    }
    if (op == 0) {
        cout << "O programa foi encerrado!\n";
    } else {
        cout << "Opcao escolhida: " << op << endl;
    }

    return 0;
}*/

//Ex7

/*

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

	//verificamos se num1 e maior do que num2. Se for o caso, trocamos os valores das variaveis num1 e num2 usando uma variavel temporaria temp
	
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Numeros entre " << num1 << " e " << num2 << ":\n";

	//usamos num1 + 1 como o valor inicial do loop, pois nao queremos incluir o numero digitado pelo usuario como parte da saida

    for (int i = num1 + 1; i < num2; i++) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
*/


//Matrizes Arrays e Strings 27/03/2023
//int b[3]- comprimento 
// b[2]- seu index
//int c[2][3]- 2 linhas 3 colunas


//FICHA VII

/*
int main(){
	int v[5], num;
	cout<< "Indique um valor para o vector v[0]:\n";
	cin>> v[0];
	cout<< "Indique um valor para o vector v[1]:\n";
	cin>> v[1];
	cout<< "Indique um valor para o vector v[2]:\n";
	cin>> v[2];
	cout<< "Indique um valor para o vector v[3]:\n";
	cin>> v[3];
	cout<< "Indique um valor para o vector v[4]:\n";
	cin>> v[4];
}
*/
//Ex1 a e b

/*
int main(){
	int v[5];
	cout<<"Prencha um vector com 5 elementos:\n";
	for (int i=0; i < 5; i++){
		cout<<"Indique um valor para o vector v["<<i<<"]:";
		cin>> v[i];
		cout<<"\n";
	}
	cout<<"Valores submetidos em ordem inversa/decrescente:\n";
	for (int i=4; i >= 0; i--){
		cout<<"["<<i<<"]= "<< v[i] << "\n"; 
	}
	cout<<"Valores submetidos em ordem normal/crescente:\n";
	for (int i=0; i < 5; i++){
		cout<<"["<<i<<"]= "<< v[i] << "\n"; 
	}
	
}
*/

//Ex sugerido aula matriz 2 por 2

/*
int main(){
	int m[2][2];
	int i, j;
	cout<<"Prencha os elemntos de uma matriz 2 por 2:\n";
	for (i=0; i<2; i++){
		for(j=0;j<2; j++){
			cout<<"Indique um valor para a linha, coluna ("<<i<<","<<j<<") =";
			cin>> m[i][j];
			cout<<"\n";
			
	
		}
	}
	cout<<"Valores submetidos em ordem normal/crescente:\n";
	for (i=0; i<2; i++){
		for(j=0;j<2; j++){
			cout<<"linha["<<i<<"], coluna["<<j<<"]= "<< m[i][j] << "\n"; 
			
	
		}
	}
	
	
}
*/

//String impressao
/*
int main(){
	char nome[6];
	cout << "Escreva o seu nome:\n";
	gets(nome);
	cout<<"Ola,"<<nome<<", bem vindo!\n";
}
*/


//Ex2

/*
int main(){
	char nome[60], teu_nome[]=".Mas o Barcelona e melhor!";
	cout<<"Qual o maior clube do mundo clube?\n";
	gets(nome);
	strcat(nome, teu_nome);
	cout << nome;
	
	
}	
*/

//Ex3
/*
int main(){
	char string1[60], string2[60];
	cout<<"Introduza uma frase:\n";
	gets(string1);
	cout<<"Introduza uma segunda frase:\n";
	gets(string2);
	strcat(string1, string2);
	cout<< string1;
		
}
*/



//Coletanea Exercicios X

//Ex1

/*
char palavra[15];
int tamanho;

void pedir_palavra (){
	cout << "Introduza uma palavra:\n";
	cin >> palavra;
}

int main(){
	pedir_palavra();
	tamanho = strlen(palavra);
	if(tamanho <= 4){
		cout<< "Palavra Pequena!";
	}
	else if(tamanho>4 && tamanho<=8){
		cout<< "Palavra Media!";
	}
	else{
		cout<< "Palavra Grande!";
	}
}
*/

//EX2

//Funcao prototipada declara antes do main definida depois

/*
float area_quadrado (float l);

int main(){
	float lado;
	cout<< "Diga um dos lados do quadrado:\n";
	cin >> lado;
	cout<< "A area do quadrado e:\n";
	cout<< area_quadrado(lado);	
}

float area_quadrado( float l){
	float area;
	area = l * l;
	return area;
}*/

//Ex3

/*
float calculo_media ( float nota1, float nota2);
inline float nota_maior ( float nota1, float nota2){
	return(nota1>nota2 ? nota1:nota2);}
int main(){
	float freq1, freq2;
	cout<<"Insere a nota da tua 1 frequencia:\n";
	cin>> freq1;
	cout<<"Insere a nota da tua 2 frequencia:\n";
	cin>> freq2;
	cout<<"A tua media e: "<< calculo_media(freq1, freq2)<< "\n";
	cout<<"e a tua maior nota foi: " << nota_maior(freq1, freq2);
}

float calculo_media ( float nota1, float nota2){
	float media;
	media = (nota1 + nota2)/2;
}
*/

//Ex4

/*
#define PI 3.14

#define quadrado(raio) (raio*raio)

float calculo_raio(float comprimento){
	float raio;
	raio = comprimento/2;
	return raio;
}
float area_circunferencia(float raio){
	float area;
	area = PI * quadrado(raio);
	return area;
	
}

int main(){
	float cmp;
	cout<< "Insere o valor do comprimento da circunferencia: \n";
	cin>> cmp;
	cout<< "a area correspondente ao comprimento de circunferencia inserido e: " << area_circunferencia(calculo_raio(cmp));
}
*/

//COLETANEA EXERCICIOS XII

//ex0
/*
class pessoa{
	public: 
		char nome_pessoa[40];
		int idade;
	
}pessoa1;

int main(){
	strcpy(pessoa1.nome_pessoa, "Milana"); pessoa1.idade = 20;
	cout<< "Nome: " << pessoa1.nome_pessoa << "\t";
	cout<< "Idade: " << pessoa1.idade << "\n"; system("pause");
}
*/

//ex1
/*
class aluno{
	public:
		char nome_do_aluno[40];
		int numero_do_aluno;
		float nota_esperada;
}a;

int main(){
	cout<< "Insira o seu Nome: ";
	gets(a.nome_do_aluno);
	cout<< "Insira o seu Numero: ";
	cin>> a.numero_do_aluno;
	cout<< "Insira a Nota esperada a Disciplina: ";
	cin>> a.nota_esperada;
	system("cls");
	cout<< "Nome do aluno: " << a.nome_do_aluno<<"\t";
	cout<< "Numero do aluno: " << a.numero_do_aluno<<"\n";
	cout<< "Nota esperada na disciplina: " << a.nota_esperada<<"\n";
	
}
*/

//EX2-inline float

/*
class aluno{
	public:
		char nome_do_aluno[40];
		int numero_do_aluno;
		float nota_1_teste, nota_2_teste, media;
		inline float nota_final (){
			return(nota_1_teste + nota_2_teste)/2;
		}
}a;

int main(){
	cout<< "Insira o seu nome: ";
	gets(a.nome_do_aluno);
	cout<< "Insira o seu numero: ";
	cin>> a.numero_do_aluno;
	cout<< "Insira a nota do primeiro teste: ";
	cin>> a.nota_1_teste;
	cout<< "Insira a nota do segundo teste: ";
	cin>> a.nota_2_teste;
	system("cls");
	cout<<"\t Nota do Primeiro periodo Poo\n";
	cout<< "Nome do aluno: " << a.nome_do_aluno<<"\t";
	cout<< "Numero do aluno: " << a.numero_do_aluno<<"\n";
	cout<< "Nota Final de POO: " << a.nota_final()<<"\n";
	
}
*/

//EX2-V2

/*
class aluno{
	public:
		char nome_do_aluno[40];
		int numero_do_aluno;
		float nota_1_teste, nota_2_teste, media;
		float nota_final (float nota_1, float nota_2){
			media = (nota_1 + nota_2)/2;
			return media;
		}
}a;

int main(){
	cout<< "Insira o seu nome: ";
	gets(a.nome_do_aluno);
	cout<< "Insira o seu numero: ";
	cin>> a.numero_do_aluno;
	cout<< "Insira a nota do primeiro teste: ";
	cin>> a.nota_1_teste;
	cout<< "Insira a nota do segundo teste: ";
	cin>> a.nota_2_teste;
	system("cls");
	cout<<"\t Nota do Primeiro periodo Poo\n";
	cout<< "Nome do aluno: " << a.nome_do_aluno<<"\t";
	cout<< "Numero do aluno: " << a.numero_do_aluno<<"\n";
	cout<< "Nota Final de POO: " << a.nota_final(a.nota_1_teste,a.nota_2_teste)<<"\n";
	
}
*/

//EX3-Private class

/*
class aluno{
	private:
		float nota_1_teste, nota_2_teste;
	public:
		char nome_do_aluno[40];
		int numero_do_aluno;
		
		void setnota1(float n1){ nota_1_teste = n1;}
		void setnota2(float n2){ nota_2_teste = n2;}
		
		//Só para permitir Cout não nessário neste exercicio metodo get
		float getnota1(){ return nota_1_teste;}
		float getnota2(){ return nota_2_teste;}
		
		float nota_final (){
			return (nota_1_teste + nota_2_teste)/2;
		}
}a;

int main(){
	cout<< "Insira o seu nome: ";
	gets(a.nome_do_aluno);
	cout<< "Insira o seu numero: ";
	cin>> a.numero_do_aluno;
	
	cout<< "Insira a nota do primeiro teste: ";
	float i;
	cin>> i;
	a.setnota1(i);
	cout<< "Insira a nota do segundo teste: ";
	float j;
	cin>> j;
	a.setnota2(j);
	
	system("cls");
	cout<<"\t Nota do Primeiro periodo Poo\n";
	cout<< "Nome do aluno: " << a.nome_do_aluno<<"\t";
	cout<< "Numero do aluno: " << a.numero_do_aluno<<"\n";
	cout<< "Nota Final de POO: " << a.nota_final()<<"\n";
	
}
*/

//Exercicio Proposto Aula

/*
class aluno{
	private:
		char escola[25];
		char nome[20];
		int notaFinal;
	public:
		char setescola(char i[25]){ strcpy(escola,i); }
		char setnome(char* j){ strcpy(nome,j); }
		int setnota(int k){ notaFinal = k; }
		char* getescola(){ return escola; }
		char* getnome(){ return nome; }
		int getnota(){ return notaFinal; }
}p1;

int main(){
	cout<< "Insira nome escola que frequentou: ";
	char x[25];
	gets(x);
	p1.setescola(x);
	cout<< "Insira o seu nome: ";
	char y[20];
	gets(y);
	p1.setnome(y);
	cout<< "Insira a nota Final de Poo: ";
	int z;
	cin>> z;
	p1.setnota(z);
	system("cls");
	cout<< "Escola: " << p1.getescola()<<"\t";
	cout<< "Aluno: " << p1.getnome()<<"\n";
	cout<< "Nota Final de POO: " << p1.getnota()<<"\n";
	
}
*/


/*
//Exercicio4

class aluno{
	private:
		float nota_1, nota_2;
	public:
		char nome_do_aluno[40];
		int numero_do_aluno;
		
		void setnota1(float n1){ nota_1 = n1;}
		void setnota2(float n2){ nota_2 = n2;}
		
	
		float getnota1(){ return nota_1;}
		float getnota2(){ return nota_2;}
		
		float nota_final (){
			return (nota_1 + nota_2)/2;
		}
		
		//Prototipo
		void mostranotas();
}a;

void aluno::mostranotas(){
	cout<<"\n"<<"\t"<<"Notas"<<"\n";
	cout<< "Nota 1:"<<getnota1()<<"\t";
	cout<< "Nota 2:"<<getnota2();
}

int main(){
	cout<< "Insira o seu nome: ";
	gets(a.nome_do_aluno);
	cout<< "Insira o seu numero: ";
	cin>> a.numero_do_aluno;
	
	cout<< "Insira a nota do primeiro teste: ";
	float i;
	cin>> i;
	a.setnota1(i);
	cout<< "Insira a nota do segundo teste: ";
	float j;
	cin>> j;
	a.setnota2(j);
	
	system("cls");
	cout<<"\t Nota do Primeiro periodo Poo\n";
	cout<< "\n" << "Nome do aluno: " << a.nome_do_aluno<<"\t";
	cout<< "Numero do aluno: " << a.numero_do_aluno<<"\n";
    a.mostranotas(); cout <<"\n";
	cout<< "Nota Final de POO: " << a.nota_final()<<"\n";
}
*/



		








