#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int equipajeE[50],equipajeT[50],equipajeP[50], camarote=0,i, camarotesDisponible=0;
bool clasePremium[50], claseTurista[50],claseEconomica[50],seguir =true, terminar=false;
 string apellidoE[50],apellidoT[50],apellidoP[50];
 string documentoE[50],documentoT[50],documentoP[50];
 string nameE[50], nameT[50],nameP[50],vpass,pass="ingteleco20182",reservar;


void bienvenida(){
    system("cls");
    cout<<"\t Bienvenido al sistema de reservas del crucero MARVELIANO \n"<<endl;
};


bool vr ( string res){  // vr = verificar respuesta
        if(res != "1" && res !="0" ){
             while (seguir) {
                 bienvenida();
                 cout << res<<" No es una opcion valida, intente nuevamente"<<endl;
                 cout<<"Si.....1"<<endl;
                 cout<<"No.....0"<<endl;
                 cout <<" >: ";
                 cin >> res ;
                 if (res == "1" || res == "0"){
                     seguir= false;
                     return true;
                 }else {
                     seguir = true;
                 }
             }
        }else{
            return true;
        }
};


void clasereserva(bool careservar[50],char tc,string name[50], string apellido[50], string documento[50],int equipaje[50] ){
     bienvenida();
     cout << "Camarotes disponibles " <<endl;
     for ( i=1;i<=50;i++){
         if (careservar [i] == false){
             cout<< i <<tc<<", ";
         }
     }
     cout << "Ingrese el numero del camarote a reservar"<<endl;
     cout << " >: ";
     cin>> camarote;
     seguir = true;
     if(careservar[camarote] == true){
         while (seguir== true) {
             bienvenida();
             cout << "El camarote "<<camarote<<"T ya se encuentra reservado"<<endl;
             cout << "Camarotes disponibles " <<endl;
                for ( i=1;i<=50;i++){
                    if (careservar [i] == false){
                        cout<< i <<tc<<", ";
                    }
                }
                cout << "Ingrese el numero del camarote a reservar"<<endl;
                cout << " >: ";
                cin>> camarote;
                if(careservar[camarote]== false){
                    seguir = false;
                 }
          }
     }
     if (camarote >=1 && camarote <=50){
         careservar[camarote] =true;
     }else{
         bool continuar=true;
         while (continuar) {
              bienvenida();
              cout <<camarote<< " No es un caracter valido"<<endl;
              cout << "Camarotes disponibles" <<endl;
              for (int i=1;i<=50;i++){
                  if (careservar [i] == false){
                      cout<< i <<tc <<" " ;
                  }
              }
              cout << "Ingrese el numero del camarote a reservar"<<endl;
              cout << " >: ";
              cin>> camarote;
              if (camarote >=1 && camarote <=50){
                  careservar[camarote] =true;
                  continuar = false;
               }
         }
     }
     bienvenida();
     cout <<" Ingrese nombre del cliente"<<endl;
     cout << " >: ";
     cin>>name[camarote];
     bienvenida();
     cout <<" Ingrese apellido del cliente"<<endl;
     cout << " >: ";
     cin >> apellido[camarote];
     bienvenida();
     cout <<" Ingrese N de documento del cliente"<<endl;
     cout << " >: ";
     cin >> documento[camarote];
     bienvenida();
     cout <<" Ingrese cantidad de equipaje del cliente"<<endl;
     cout << " >: ";
	 cin >> equipaje[camarote];
};


bool vc(string clase){
    char tipoc ;
    if (clase!= "1" && clase != "2" && clase !="3"){
        while (seguir){
             bienvenida();
             cout << clase<<" No es una opcion valida, intente nuevamente"<<endl;
             cout<<"Escoja la clase en la que desea viajar"<<endl;
             cout<<"Economica......1"<<endl;
             cout<<"Turista........2"<<endl;
             cout<<"Premium........3"<<endl;
             cout <<" >: ";
             cin >> clase ;

             if (clase == "1" || clase == "2" || clase == "3"){
                seguir= false;
                if(clase == "1"){
                    tipoc = 'E';
                    clasereserva(claseEconomica,tipoc,nameE,apellidoE,documentoE, equipajeE);
                }else if (clase == "2") {
                     tipoc = 'T';
                    clasereserva(claseTurista,tipoc,nameT,apellidoT,documentoT, equipajeT);

                 }else {
                     tipoc = 'P';
                     clasereserva(clasePremium,tipoc,nameP,apellidoP,documentoP, equipajeP);
                 }
                 return true;
             }

        }
        
   }else {
        if(clase == "1"){
            tipoc = 'E';
            clasereserva(claseEconomica,tipoc,nameE,apellidoE,documentoE, equipajeE);
        }else if (clase == "2") {
            tipoc = 'T';
            clasereserva(claseTurista,tipoc,nameT,apellidoT,documentoT, equipajeT);
        }else {
            tipoc = 'P';
            clasereserva(clasePremium,tipoc,nameP,apellidoP,documentoP, equipajeP);
        }


    }

    return true;

};


void vcontrasenia() {
    bienvenida();
    bool ok = false;
    cout<< "Ingrese la contrasenia para listar la informacion"<<endl;
    cout<<" >:";
    cin >>vpass;
    if(vpass != pass){
        while (ok==false) {
            bienvenida();
            cout<<vpass<<" No es correcto, Ingrese la contrasenia para listar la informacion "<<endl;
            cin >> vpass;
            if(vpass == pass){
                ok = true;
            }else{
                ok = false;

            }

        }


    }

};


bool continuarp(){
    bienvenida();
    cout<<" Desea continuar en el programa?"<<endl;
    cout<<"Si.....1"<<endl;
    cout<<"No.....0"<<endl;
    cout <<" >: ";
    cin >>reservar;
    vr(reservar);
    if(reservar == "1"){
        terminar=false;
        return false;
    }
    if (reservar == "0") {
        terminar =true;
        return true;
    }

};

bool  listarcamarotes(){
       bienvenida();
       cout << "Desea listar la informacion? "<<endl;
       cout<<"Si.....1"<<endl;
       cout<<"No.....0"<<endl;
       cout <<" >: ";
       cin >> reservar;
       vr(reservar);
       if(reservar == "1"){
           vcontrasenia();
           bienvenida();
           cout << "Camarotes  ocupados clase Economica"<<endl;
           for ( i=1;i<=50;i++){
               if (claseEconomica [i] == true ){
                   cout<< i <<"E, "<< " A nombre de "<<nameE[i]<<" "<<apellidoE[i]<< " Cc. "<<documentoE[i]<<" Equipaje "<<equipajeE[i]<< endl;

               }      
           }
           cout << "\n\nCamarotes  ocupados clase Turista"<<endl;
           for ( i=1;i<=50;i++){
               if (claseTurista [i] == true ){
                   cout<< i <<"T, "<< " A nombre de "<<nameT[i]<<" "<<apellidoT[i]<< " Cc. "<<documentoT[i]<<" Equipaje "<<equipajeT[i]<< endl;
               }
           }
           cout << "\n\nCamarotes  ocupados clase Premium"<<endl;
           for ( i=1;i<=50;i++){
               if (clasePremium [i] == true ){
                   cout<< i <<"P, "<< " A nombre de "<<nameP[i]<<" "<<apellidoP[i]<< " Cc. "<<documentoP[i]<<" Equipaje "<<equipajeP[i]<< endl;
               }
           }
           cout<<" \n"<<endl;
           system("\npause");
           continuarp();
           return  true;
       }
       if (reservar == "0"){          
           continuarp();
           return  true;
       }
};



void reserve(string  opc){
    string clase;
    if(opc =="1"){
        bienvenida();
        cout<<"Escoja la clase en la que desea viajar"<<endl;
        cout<<"Economica......1"<<endl;
        cout<<"Turista........2"<<endl;
        cout<<"Premium........3"<<endl;
        cout <<" >: ";
        cin >> clase;
        vc(clase );
    }
    if(opc == "0"){
        listarcamarotes();
    }
};


int main (){
    for (i = 0; i < 50; ++i){
        clasePremium [i] = false;
        claseTurista [i] = false;
        claseEconomica [i] = false;
    }
    while (terminar== false) {
        bienvenida();
        cout<<"Desea reservar camarote?"<<endl;
        cout<<"Si.....1"<<endl;
        cout<<"No.....0"<<endl;
        cout <<" >: ";
        cin >> reservar;
        vr(reservar);
        reserve(reservar);
    }
    cout << "\nSaliendo del programa. . .\n\n";
    system("pause");
};
