#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int busqueda(string);//Buscar dato en arreglo
int conversion(string);//Obtener índex
int conversion2(string);//Obtener índex
void agregar(ofstream &,int,string,int);//Añadir datos
void iniciar(ofstream &);//Iniciar el archivo



int conversion(string n){
    int ascii, cont, index;
    ascii = 0, cont = 1, index = 0;
    for(int i=0; i<n.length(); i++){
        ascii = n[i] * cont;
        index = (index + ascii) % 10;
        cont++;
    }

    return cont;
}

void iniciar(ofstream &arch){//Funcion iniciar
    arch.open("Directorio.txt", ios::out);

	if(arch.fail()){
		cout << "No se puede abrir el archivo";
		exit(1);	}

    arch<< " Indice: "<<"\t"<< " n: " <<"\t"<< " Telefono: " <<" \n";

	arch.close();
}


void agregar(ofstream &arch, int index, string n, int tel){//Funcion para agregar a la tabla
    arch.open("Directorio.txt", ios::app);

	if(arch.fail()){
		cout << "No se puede abrir el archivo";
		exit(1);	}

    arch<< " " << index <<"\t\t "<< n <<"\t\t"<< tel <<" \n";

	arch.close();
}

//Funcion buscar
int busqueda(string n){
    int index = 0;
    index = conversion2(n);
    return index;


}


int conversion2(string n){
    int ascii, cont, index;
    ascii = 0, cont = 1, index = 0;
    for(int i=0; i<n.length(); i++){
        ascii = n[i] * cont;
        index = (index + ascii) % 14;
        cont++;
    }

    return cont;
}


int main()
{
    int vector1[9],vector2[13];
    //Limpiando ambos vectortores
    for(int i=0; i<10; i++){
        vector1[i] = 0;
    }

    for(int i=0; i<14; i++){
        vector2[i] = 0;
    }
    string n0, n1, n2, n3, n4;    //Elaboracion de los nombres aleatorios
    string n5, n6, n7, n8, n9;
    //Telefonos
    int tel0, tel1, tel2, tel3, tel4, tel5, tel6, tel7, tel8, tel9;
    //Nombres
    n0 = "Adrian"; n1 = "Tony"; n2 = "Edgar"; n3 = "Lola"; n4 = "Rocio"; n5 = "Alejandro"; n6 = "Vicky"; n7 = "Rene"; n8 = "Osvaldo"; n9 = "Benjamin";
    //Declaración de los teléfonos
    tel0 = 3310; tel1 = 1042; tel2 = 7933; tel3 = 3845; tel4 = 3198;
    tel5 = 5678; tel6 = 5321; tel7 = 8967; tel8 = 6390; tel9 = 9532;
    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\tEstudiantes:"<<endl;
    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\n nombre y telefono: "<<endl;
    cout<< " nombre: "<< "\t" << "Telefono: "<<endl;
    cout<< " " << n0 << "\t" << tel0 <<endl;
    cout<< " " << n1 << "\t" << tel1 <<endl;
    cout<< " " << n2 << "\t" << tel2 <<endl;
    cout<< " " << n3 << "\t" << tel3 <<endl;
    cout<< " " << n4 << "\t" << tel4 <<endl;
    cout<< " " << n5 << "\t" << tel5 <<endl;
    cout<< " " << n6 << "\t" << tel6 <<endl;
    cout<< " " << n7 << "\t" << tel7 <<endl;
    cout<< " " << n8 << "\t" << tel8 <<endl;
    cout<< " " << n9 << "\t" << tel9 <<endl;

    system("pause");
    system("cls");

    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\tIndices de cada estudiante:"<<endl;
    cout<< "\t\n--------------------------------------"<<endl;
    cout<< " Adrian= "<< "\t" <<conversion(n0)<<endl;
    cout<< " Tony= "<< "\t" <<conversion(n1)<<endl;
    cout<< " Edgar= "<< "\t" <<conversion(n2)<<endl;
    cout<< " Lola= "<< "\t" <<conversion(n3)<<endl;
    cout<< " Rocio= "<< "\t" <<conversion(n4)<<endl;
    cout<< " Alejandro= "<< "\t" <<conversion(n5)<<endl;
    cout<< " Vicky= "<< "\t" <<conversion(n6)<<endl;
    cout<< " Rene= "<< "\t" <<conversion(n7)<<endl;
    cout<< " Osvaldo="<< "\t" <<conversion(n8)<<endl;
    cout<< " Benjamin= "<< "\t" <<conversion(n9)<<endl;

        vector1[conversion(n0)] = tel0;//Guardando arreglo con colisiones
        vector1[conversion(n1)] = tel1;
        vector1[conversion(n2)] = tel2;
        vector1[conversion(n3)] = tel3;
        vector1[conversion(n4)] = tel4;
        vector1[conversion(n5)] = tel5;
        vector1[conversion(n6)] = tel6;
        vector1[conversion(n7)] = tel7;
        vector1[conversion(n8)] = tel8;
        vector1[conversion(n9)] = tel9;

    system("pause");
    system("cls");


    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\tMostrar vectortor:"<<endl;
    cout<< "\t\n--------------------------------------"<<endl;
        for(int i=0; i<10; i++){
            cout<< " Campo ["<<i<< "] = " <<vector1[i]<<endl;
        }
        vector2[conversion2(n0)] = tel0;
        vector2[conversion2(n1)] = tel1;
        vector2[conversion2(n2)] = tel2;
        vector2[conversion2(n3)] = tel3;
        vector2[conversion2(n4)] = tel4;
        vector2[conversion2(n5)] = tel5;
        vector2[conversion2(n6)] = tel6;
        vector2[conversion2(n7)] = tel7;
        vector2[conversion2(n8)] = tel8;
        vector2[conversion2(n9)] = tel9;

    system("pause");
    system("cls");

    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\tColisiones solucionadadas:"<<endl;
    cout<< "\t\n--------------------------------------"<<endl;
    cout<< " Adrian     = "<< "\t" <<conversion2(n0)<<endl;
    cout<< " Tony  = "<< "\t" <<conversion2(n1)<<endl;
    cout<< " Lola      = "<< "\t" <<conversion2(n2)<<endl;
    cout<< " Edgar     = "<< "\t" <<conversion2(n3)<<endl;
    cout<< " Rocio  = "<< "\t" <<conversion2(n4)<<endl;
    cout<< " Alejandro   = "<< "\t" <<conversion2(n5)<<endl;
    cout<< " Vicky   = "<< "\t" <<conversion2(n6)<<endl;
    cout<< " Rene     = "<< "\t" <<conversion2(n7)<<endl;
    cout<< " Osvaldo      = "<< "\t" <<conversion2(n8)<<endl;
    cout<< " Benjamin    = "<< "\t" <<conversion2(n9)<<endl;
    system("pause");
    system("cls");
    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\tMostrando vectortor:"<<endl;
    cout<< "\t\n--------------------------------------"<<endl;
    cout<< " El vectortor (ahora aumentado para la solucion) con los datos guardados queda asi: "<<endl;
        for(int i=0; i<14; i++){
            cout<< " Campos ["<<i<< "] = " <<vector2[i]<<endl;
        }

    system("pause");
    system("cls");

    cout<< "\t\n--------------------------------------"<<endl;
    cout<< "\tBusqueda:"<<endl;
    cout<< "\t\n--------------------------------------"<<endl;//Funcion de busqueda
    string clave;
    cout<< " Insertar clave: "<<endl;
    cout<< " " <<n0;
    clave = n0;
    cout<< "\n El numero de telefono es: "<<vector2[busqueda(clave)]<<endl;

    //Agregando directorio a un archivo
    ofstream archivo;
    iniciar(archivo);
    agregar(archivo,conversion2(n0),n0,tel0);
    agregar(archivo,conversion2(n1),n1,tel1);
    agregar(archivo,conversion2(n2),n2,tel2);
    agregar(archivo,conversion2(n3),n3,tel3);
    agregar(archivo,conversion2(n4),n4,tel4);
    agregar(archivo,conversion2(n5),n5,tel5);
    agregar(archivo,conversion2(n6),n6,tel6);
    agregar(archivo,conversion2(n7),n7,tel7);
    agregar(archivo,conversion2(n8),n8,tel8);
    agregar(archivo,conversion2(n9),n9,tel9);
    system("pause");
    system("cls");
    return 0;
}

