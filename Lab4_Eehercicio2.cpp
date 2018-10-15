#include <iostream>

using namespace std;

class mamifero
{
	int peso;
	string estado;
	float altura;
	int edad;
	public:
	mamifero(int p,string e, float a, int ed);
	void crecer(int p, float a);
	void comer(int p, string e);
	void correr(int p, string e);
	void caminar(int p, string e);
	int getPeso();
	string getEstado();
	char getEdad();
	float getAltura();
	void setPeso(int p);
	void setEstado(string e);
	void setAltura(float a);
	void setEdad(int e);
};
void mamifero::caminar(int p, string e){
peso=p;
estado= e;	
}
void mamifero::crecer(int p, float a){
peso=p;
altura= a;	
}
void mamifero::correr(int p, string e){
peso=p;
estado= e;	
}
void mamifero::comer(int p, string e){
peso=p;
estado= e;	
}
mamifero::mamifero(int p,string e,float a,int ed){
	peso=p;
	estado=e;
	altura=a;
	edad=ed;
}

int mamifero::getPeso(){
	return peso;
}
string mamifero::getEstado(){
	return estado;
}
char mamifero::getEdad(){
	return edad;
}
float mamifero::getAltura(){
	return altura;
}
void  mamifero::setPeso(int p){
	peso=p;
}
void mamifero::setEstado(string e){
	estado=e;
}
void mamifero::setAltura(float a){
	altura=a;
}
void mamifero::setEdad(int e){
	edad=e;
}
class alado{
	int peso;
	int edad;
	string estado;
	public:
		alado(int p,string e, float a, int ed);
	float altura;
	void crecer(int p , float a);
	void comer(int p);
	void volar(string e);
	void dormir(string e);
	int getPeso();
	int getEdad();
	string getEstado();
	float getAltura();
	void setPeso(int p);
	void setEdad(int ed);
	void  setEstado(string e);
	void setAltura(float a);
};
alado::alado(int p,string e,float a,int ed){
	peso=p;
	estado=e;
	altura=a;
	edad=ed;
}
void alado::crecer(int p , float a){
	peso=p;
	altura=altura+ a;
}
void alado::comer(int p){
	int peso= peso+p;
}
void alado::volar(string e){
estado=e;	
}
void alado::dormir(string e){
estado=e;	
}
int alado::getPeso(){
	return peso;
}
string alado::getEstado(){
	return estado;
}
int alado::getEdad(){
	return edad;
}
float alado::getAltura(){
	return altura;
}
void  alado::setPeso(int p){
	peso=p;
}
void alado::setEstado(string e){
	estado=e;
}
void alado::setAltura(float a){
	altura=a;
}
void alado::setEdad(int e){
	edad=e;
}
class acuatico{
	int peso;
	int edad;
	string estado;
	float altura;
	public:
	acuatico(int p,string e, float a, int ed);
	void crecer(int p , float a , int ed);
	void comer(int p);
	void nadar(string e);
	void saltar(string e);
	int getPeso();
	int getEdad();
	string getEstado();
	float getAltura();
	void setPeso(int p);
	void setEdad(int ed);
	void setEstado(string e);
	void setAltura(float a);
};
acuatico::acuatico(int p,string e,float a,int ed){
	peso=p;
	estado=e;
	altura=a;
	edad=ed;
}
	void acuatico:: crecer(int p , float a , int ed)
	{
		peso=p;
		altura=a;
		edad= edad+ ed;
	}
	void acuatico:: comer(int p){
	peso=peso+p;	
	}
	void acuatico:: nadar(string e){
	estado=e;	
	}
	void acuatico ::saltar(string e){
		estado= e;
	}
int acuatico::getPeso(){
	return peso;
}
string acuatico::getEstado(){
	return estado;
}
int acuatico::getEdad(){
	return edad;
}
float acuatico::getAltura(){
	return altura;
}
void  acuatico::setPeso(int p){
	peso=p;
}
void acuatico::setEstado(string e){
	estado=e;
}
void acuatico::setAltura(float a){
	altura=a;
}
void acuatico::setEdad(int e){
	edad=e;
}

class manati :public mamifero , public acuatico 
{
	manati(int p,string e, float a, int ed);
	void correr();
	void caminar();
	void crecer();
	void comer();
	void nadar();
	void saltar();
	
};

 manati::manati(int p,string e, float a, int ed) : acuatico(p,e,a,ed),mamifero(p,e,a,ed){}

void manati::caminar(){
	cout<<"el manati esta caminando"<<endl;
}
void manati::comer(){
	cout<<"el manati esta comiendo"<<endl;
}
void manati::correr(){
	cout<<"el manati esta corriendo "<<endl;
}
void manati::crecer(){
	cout<<"el manati esta corriendo "<<endl;
}
void manati::nadar(){
	cout<<"el manati esta nadando "<<endl;
}
void manati::saltar(){
	cout<<"el manati esta saltando "<<endl;
}
class murcielago : public alado, public mamifero{
	murcielago(int p,string e, float a, int ed);
	void crecer();
	void comer();
	void correr();
	void caminar();
	void volar();
	void dormir();
};
 murcielago::murcielago(int p,string e, float a, int ed) : alado(p,e,a,ed),mamifero(p,e,a,ed){}
 
void murcielago::caminar(){
	cout<<"el murcielago esta caminando"<<endl;
}
void murcielago::comer(){
	cout<<"el murcielago esta comiendo"<<endl;
}
void murcielago::correr(){
	cout<<"el murcielago esta corriendo "<<endl;
}
void murcielago::crecer(){
	cout<<"el murcielago esta corriendo "<<endl;
}
void murcielago::volar(){
	cout<<"el el murcielago esta volando "<<endl;
}
void murcielago::dormir(){
	cout<<"el murcielago esta durmiendo "<<endl;
}
class ornitorrinco : public mamifero, public acuatico{
	ornitorrinco(int p,string e,float a, int ed);
	void correr();
	void caminar();
	void crecer();
	void comer();
	void nadar();
	void saltar();
};
 ornitorrinco::ornitorrinco(int p,string e, float a, int ed) : acuatico(p,e,a,ed),mamifero(p,e,a,ed){

}
void ornitorrinco::caminar(){
	cout<<"el ornitorrinco esta caminando"<<endl;
}
void ornitorrinco::comer(){
	cout<<"el ornitorrinco esta comiendo"<<endl;
}
void ornitorrinco::correr(){
	cout<<"el ornitorrinco esta corriendo "<<endl;
}
void ornitorrinco::crecer(){
	cout<<"el ornitorrinco esta corriendo "<<endl;
}
void ornitorrinco::nadar(){
	cout<<"el ornitorrinco esta nadando "<<endl;
}
void ornitorrinco::saltar(){
	cout<<"el ornitorrinco esta saltando "<<endl;
}
int main(int argc, char** argv)
{
	return 0;
}
