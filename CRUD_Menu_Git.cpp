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

/*void mostrar_libros(Tlibros mostrar){
	
	do{
		cout<< "Mostrar libro";
		cout << "Codigo: "<<mostrar->codigo>>endl;
		cout << "Codigo: "<<mostrar->codigo>>endl;
		cout << "Codigo: "<<mostrar->codigo>>endl;
		cout << "Codigo: "<<mostrar->codigo>>endl;
		
	}
	cout<<  <<endl;

}*/


void menu_opcion(void){
		system ("color 9");//Para dar color al fondo de pantalla y los caracteres.
	//cout<<"          같같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	cout<< "        MENU PRINCIPAL BIBLIOTECA"<< endl;
	cout<<"       같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	
//	int opc;            
	
		cout<<"	1. Registrar libros"<<endl;
		cout<<"	2. Mostrar libros"<<endl;
		cout<<"	3. Actualizar libros"<<endl;
		cout<<"	4. Eliminar libros"<<endl;
		cout<<"	5. Buscar libros"<<endl;
		cout<<"	6. Salir"<<endl;
		cout<<"  	-------------------------"<< endl;
		cout<<" "<<endl;
		
		cout<<"	Ingrese una opcion:"<<endl;
		//cin>>opc;
}

int main(void){
	Tlibro lista =NULL;
	Tlibro mostrar =NULL;
	int opc;
	system ("color 9");//Para dar color al fondo de pantalla y los caracteres.
/*	//cout<<"          같같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	cout<< "        MENU PRINCIPAL BIBLIOTECA"<< endl;
	cout<<"       같같같같같같같같같같같같같"<< endl;
	cout<<" "<< endl;
	
	int opc;            
	
	do{
		cout<<"	1. Registrar libros"<<endl;
		cout<<"	2. Mostrar libros"<<endl;
		cout<<"	3. Actualizar libros"<<endl;
		cout<<"	4. Eliminar libros"<<endl;
		cout<<"	5. Buscar libros"<<endl;
		cout<<"	6. Salir"<<endl;
		cout<<"  	-------------------------"<< endl;
		cout<<" "<<endl;
		
		cout<<"	Ingrese una opcion:"<<endl;
		cin>>opc;*/
		do{
		menu_opcion();
		cin >>opc;
		
		switch(opc){
			case 1: registrar_libros(lista);
				/*char guardar_libro[50];
				cout<<"Introduce el titulo del libro a guardar"<<endl;
				cin>>guardar_libro;*/
				
				cout<<lista<<endl;
				cout<<"El libro "/*<<guardar_libro<<*/" se guardo con exito!!"<<endl; // SE DEBE GUARDAR EN DB
				//cout<<" "<<endl;
				system("pause");
				break;
		}
		
		switch(opc){
			case 2: //mostrar_libros();
				//CODIGO PARA MOSTAR LIBRO
				//cout<<  <<endl;
				
				
				break;
		}
		
		switch(opc){
			case 3:
				//CODIGO PARA ACTUALIZAR LIBRO
				break;
		}
		
		switch(opc){
			case 4:
				//CODIGO PARA ELIMINAR LIBRO
				break;
		}
		
		switch(opc){
			case 5:
				//CODIGO PARA BUSCAR LIBRO
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
