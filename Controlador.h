/*
 * Controlador.h
 *
 *  Created on: 29/06/2021
 *      Author: Admin
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include <climits>
#include "Modelos/MListaExpediente.h"
#include "Modelos/MCensoPersonas.h"
#include "Modelos/MEstado.h"
#include "General/VGeneral.h"
#include "Interfaces/IEstado.h"
#include "Interfaces/IMunicipio.h"
#include "Interfaces/ICubiculo.h"
#include "Interfaces/ICentinela.h"
#include "Interfaces/IAlmacen.h"

class Controlador {
private:
	MEstado estado;
	MListaExpediente listaExpedientes;
	MCensoPersonas listaPersonas;
	VGeneral vGeneral;
	IEstado ie;
	IMunicipio im;
	ICubiculo ic;
	ICentinela icen;
	IPersona ip;
	bool estanDatosCargados;
public:
	Controlador();
	void cargarDatos();
	void guardarDatos();
	void recibirVacunas();
	void agregarMunicipio();
	void agregarCentinela();
	void agregarCubiculo();

	void eliminarCubiculo();
	void EliminarCentinela();

    void buscarExpediente(string cedula,string &vacuna, int &cant, MExpedienteVacunacion me, MListaExpediente le);
	void procesar();
	void procesar2();
	void procesarAdmin();
	void menuEliminar();
	void menuAgregar();
	void menuModificar();

	void consultarPersona();
	void consultarMunicipios();
	void consultarCentinelas();
	void consultarCubiculos();
	void consultarColas();
	void consultarVacunas();
	void incluirPacienteACola();
	void SacarPacienteDeCola();
	void procesarPaciente();

};


#endif /* CONTROLADOR_H_ */
