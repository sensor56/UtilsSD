/*
 * Copyright (c) - Mars 2013 - by Xavier HINAULT - support@mon-club-elec.fr
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 3
 * or the GNU Lesser General Public License version 3, both as
 * published by the Free Software Foundation.
 */

/* Cette librairie implémente toute une série de fonctions 
 * en surcouche de la librairie SD 
 * et qui rendent la manipulation de la carte SD 
 * plus « naturelle » pour l'utilisateur
*/

#ifndef UtilsSD_h
#define UtilsSD_h

#include "Arduino.h"



class UtilsSD {

  private : // variables internes
  
  public :

  //String paramString; 
  
  public :
    UtilsSD(); // constructeur
  
	void getContentDirSerial(char* dirIn, int numTabsIn); 
	int getNumberOfLines(char* nomFichierIn, boolean debug); 
	String getLine(char* nomFichierIn, int lineNumberIn, boolean debug); 
	int getFileSize(char* nomFichierIn, boolean debug); 
	void readSerial(char* nomFichierIn, boolean debug); 
	void writeFile(char* nomFichierIn, String toWriteIn, boolean debug);
	void createFile(char* nomFichierIn, boolean debug);
	

  private : // fonctions internes


}; // fin classe 


#endif
