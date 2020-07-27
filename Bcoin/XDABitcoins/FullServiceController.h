#pragma once
#include "blockchain_actors/FullService.h"
#include "FullServiceView.h"
#include "Graphics.h"
#include <allegro5/allegro.h>
#include "myGUIEventsData.h"
#include "Controller.h"

class FullServiceController : public Controller
{
public:
	FullServiceController(FullService& node_, FullServiceView& view_, Graphics& graphics_);
	~FullServiceController();
	/*
	* parseMouseEvent
	*
	* M�todo que parsea el evento de mouse
	*/
	void parseMouseEvent(myGUIEventsData* ev_); // chequeo si el evento est� dentro del c�rculo
	void parseKeyboardEvent(myGUIEventsData* ev_);
	void parseCloseEvent(myGUIEventsData *  newEvent);

	/*
	* getNode
	*
	* M�todo que devuelve el modelo del nodo
	*/
	FullService* getNode(void);
	FullServiceView* getNodeView(void);

private:
	FullService& node;
	FullServiceView& nodeView;
	Graphics& graphics;

};

