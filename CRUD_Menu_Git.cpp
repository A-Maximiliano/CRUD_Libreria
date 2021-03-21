#include <iostream>
#include <cstring>
#include <string.h>
#define maxchar 50



using namespace std;

struct nodo{
	
	int codigo;
	char nombres[maxchar];
	char descripcion[maxchar];
	char editorial[maxchar];
	struct nodo *siguiente;
	
};

typedef struct nodo *Tlibro;

//CODIGO PARA REGISTRAR LIBRO
void registrar_libros(Tlibro &lista){
	system ("cls");
	system ("color F2");
	
	Tlibro t,q = new (struct nodo);
	cout<< "\n\n\t\t[Registro de Libros]\n";
	cout<< "\t\t ---------------------\n";
	cout << "\n\tDatos de libros";
	cin.ignore();
	cout<<"\n\n\tCodigo: ";
	cin>>q->codigo;
	cin.ignore();cout<<"\n\tNombre: ";
	cin.getline(q->nombres,maxchar);
	cin.ignore();cout<<"\tDescripcion: ";
	cin.getline(q->descripcion,maxchar);
	cin.ignore();cout<<"\tEditorial: ";
	cin.getline(q->editorial,maxchar);
	
	system("cls"); system ("color 0A");
	q->siguiente = NULL;
	
	if (lista == NULL){
		
		lista = q;
	}else{
		t = lista;
		while(t->siguiente !=NULL){
			t= t->siguiente;
		}
		t->siguiente =q;
	}	
}

//CODIGO PARA MOSTRAR LIBRO
void mostrar_libros(Tlibro mostrar){
	int i =1;
	while(mostrar!=NULL){
		cout<< "Mostrar libro";
		cout<< "Datos del libro "<<i<<"";
		cout << "Codigo: "<<mostrar->codigo<<endl;
		cout << "Codigo: "<<mostrar->nombres<<endl;
		cout << "Codigo: "<<mostrar->descripcion<<endl;
		cout << "Codigo: "<<mostrar->editorial<<endl;	
		
		mostrar= mostrar->siguiente,
		i++;
	}
}

//CODIGO PARA ELIMINAR LIBRO
void eliminar_libros (Tlibro eliminar){
	int cod;
	Tlibro t,q;
	q=eliminar;
	cout<< "Eliminar libro";
	cout<< "Digitar codigo del libro: ";
	cin>>cod;
		while(q!=NULL){
		if(q->codigo==cod){
			if(q==eliminar)
				eliminar=eliminar->siguiente;
			else
				t->siguiente=q->siguiente;
				delete(q);
				cout<<"Se elimino";	
				return;
			}else{
				t=q;
				q=q->siguiente;
			}
		}
		if(q==NULL)
		cout<<"Codigo incorrecto";
}

void buscar_libros(Tlibro buscar){
	int cod;
	Tlibro q;
	q=buscar;
	cout<<"\n\n\n\tBUSCAR LIBRO EN LA BIBLIOTECA";
    cout<<"\n\n\tINGRESE EL CODIGO:"; cin>>cod;
    while(q!=NULL){
    if(q->codigo==cod){
                system("cls");
                cout<<"\n\tDATOS DEL LIBRO  ";
                cout<<"\n\t--------------------";
                cout<<"\n\n\tCODIGO   : "<<q->codigo<<endl;
                cout<<"\n\tNOMBRE  : "<<q->nombres<<endl;
                cout<<"\tDESCRIPCION: "<<q->descripcion<<endl;
                cout<<"\tEDITORIAL: "<<q->editorial<<endl;
                cout<<"\n";
                break;
    
            }else {
                q=q->siguiente;
                //cout<<"\nLibro no encontrado\n"; break;
        }
}
    
	
}



//FUNCION PARA ACTUALIZAR UN DATO DEL LIBRO
/*void menu_actualizar(void){
 
    cout<<"\n\t\t[    ESPECIFIQUE EL CAMPO A ACTUALIZAR    ]\n";
    cout<<"\t\t-------------------------------\n\n";
    cout<<" 1. NOMBRE                        "<<endl;
    cout<<" 2. DESCRIPCION                   "<<endl;
    cout<<" 3. EDITORIAL                     "<<endl;
    cout<<" 4. SALIR                         "<<endl;
 
    cout<<"\n Ingrese opcion : ";
}*/

/*-------------------- FUNCION ACTUALIZAR LIBROS -------------------

void actualizar_libros (TLibro lista){
    int cod, x;
    TLibro q;
    q=lista;
 
    cout<<"\n\n\n\tACTUALIZAR LIBRO DE LA BIBLIOTECA";
    cout<<"\n\n\tINGRESE EL CODIGO:"; cin>>cod;
    //mostrar_libros(TLibro cod);
 
    while(q!=NULL){
 
            if(q->codigo==cod){// 
                system("cls");
                cout<<"\n\tDATOS DEL LIBRO  ";
                cout<<"\n\t--------------------";
                cout<<"\n\n\tCODIGO   : "<<q->codigo<<endl;
                cout<<"\n\tNOMBRE  : "<<q->nombres<<endl;
                cout<<"\tDESCRIPCION: "<<q->descripcion<<endl;
                cout<<"\tEDITORIAL: "<<q->editorial<<endl;
                menu_actualizar();
                cin>>x;
                switch(x){
 
                    case 1: cout<<"\n\n\tINGRESE EL NOMBRE:";
                            cin.ignore(); cin.getline(q->nombres,maxchar);
                            break;
                    case 2: cout<<"\n\n\tINGRESE LA DESCRIPCION:";
                            cin.ignore(); cin.getline(q->descripcion,maxchar);
                            break;
                    case 3: cout<<"\n\n\tINGRESE LA EDITORIAL:";
                            cin.ignore(); cin.getline(q->editorial,maxchar);
                            break;
                    default: cout<<"\nINGRESE UNA OPCION VALIDA\n"; break;
 
                }
                cout<<"\n\n\tLIBRO ACTUALIZADO\n";
                return;
 
            }else {
                q=q->siguiente;
        }
    }
    if(q==NULL)
        cout<<"\n\tCODIGO INCORRECTO\n";
}*/

void menu_opcion(void){
		system ("color 9");//Para dar color al fondo de pantalla y los caracteres.
	//cout<<"          같같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	cout<< "        MENU PRINCIPAL BIBLIOTECA"<< endl;
	cout<<"       같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;        
	
		cout<<"	1. Registrar libros"<<endl;
		cout<<"	2. Mostrar libros"<<endl;
		cout<<"	3. Actualizar libros"<<endl;
		cout<<"	4. Eliminar libros"<<endl;
		cout<<"	5. Buscar libros"<<endl;
		cout<<"	6. Salir"<<endl;
		cout<<"  	-------------------------"<< endl;
		cout<<" "<<endl;
		
		cout<<"	Ingrese una opcion:"<<endl;
}

int main(void){
	Tlibro lista =NULL;
	Tlibro mostrar =NULL;
	int opc;
	system ("color 9");//Para dar color al fondo de pantalla y los caracteres.

		do{
		menu_opcion();
		cin >>opc;
		
		switch(opc){
			case 1: registrar_libros(lista);
				cout<<"El libro "/*<<guardar_libro<<*/" se guardo con exito!!"<<endl; // SE DEBE GUARDAR EN DB
				//cout<<" "<<endl;
				system("pause");
				break;
		}
		
		switch(opc){
			case 2: mostrar_libros(lista);
			system("pause");	
			break;
		}
		
		switch(opc){
			case 3: //actualizar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 4:eliminar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 5: buscar_libros(lista);
			system("pause");
				break;
		}
		
		switch(opc){
			case 6:
				//SALIR
				break;
		}
		
	}while(opc!=6);
	
	return 0;
}
