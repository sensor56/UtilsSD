UtilsSD
=======

Ma librairie UtilsSD implémente toute une série de fonctions en surcouche de la librairie SD et qui rendent la manipulation de la carte SD plus « naturelle » pour l'utilisateur 

Les fonctions disponibles sont notamment : 
* void getContentDirSerial(char* dirIn, int numTabsIn) : renvoie le contenu d'un répertoire
* int getNumberOfLines(char* nomFichierIn, boolean debug) : renvoie le nombre de ligne d'un fichier
* String getLine(char* nomFichierIn, int lineNumberIn, boolean debug) : renvoie une ligne à partir de son numéro
* int getFileSize(char* nomFichierIn, boolean debug) : renvoie la taille d'un fichier
* void readSerial(char* nomFichierIn, boolean debug) : lit et affiche sur le port série le contenu d'un fichier
* void writeFile(char* nomFichierIn, String toWriteIn, boolean debug) : ajoute une ligne + saut de ligne à la fin du fichier
* void createFile(char* nomFichierIn, boolean debug) : crée un fichier 

Cette librairie est utilisée notamment dans mon projet "The Open Datalogger Project" : 
https://github.com/sensor56/TheOpenDataloggerProject 

