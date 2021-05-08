/*
 * TAD_PATOTA.c
 *
 *  Created on: 6 may. 2021
 *      Author: utnso
 */

#ifndef TAD_PATOTA
#include "TAD_PATOTA.h"
#include <stdio.h>
#include <stdlib.h>
#include <commons/bitarray.h>
#include <commons/log.h>
#include <commons/string.h>
#include <commons/collections/list.h>
#include <commons/collections/queue.h>
#include <commons/temporal.h>
#include "TAD_TRIPULANTE.h"


struct Patota
{
	int id;
	t_list* tripulacion ;
	char* tarea;
};

void agregarTripulantes(int cantidad, Patota* patota ,t_list* listaTripulantes)
{
	int i=0;
	while (i < cantidad)
	{
		if(list_is_empty(listaTripulantes)!= true)
		{
			Tripulante* agregar =tripulanteCreate(i+1,(void*)list_remove(listaTripulantes,i),(void*)list_remove(listaTripulantes,i+1));
			list_add(patota->tripulacion,  agregar );

		}
		else
		{
<<<<<<< HEAD
			int pos =0;
			Tripulante* agregar =tripulanteCreate(i+1,pos,pos);
=======
			int pos [1][1]={{0},{0}};
			struct Tripulante* agregar =tripulanteCreate(i+1,pos);
>>>>>>> ec98f94176061a9d44e616bf10fde8c2c20f2ddc
			list_add(patota->tripulacion,  agregar );
		};
		i++;
	};
}
struct Patota* iniciarPatota(int cantTripulantes,int id,t_list* listaTripulantes, char* tareas )
{
	Patota* devolverPatota ;
	devolverPatota->id=id;
	devolverPatota->tarea=tareas;
	agregarTripulantes(cantTripulantes,devolverPatota,listaTripulantes );
	return devolverPatota;
};


#endif