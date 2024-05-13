:: Rückgabewert eines Progs
:: https://sites.google.com/site/batchprogrammierung/
:: https://de.wikibooks.org/wiki/Batch-Programmierung
:: http://openbook.rheinwerk-verlag.de/c_von_a_bis_z/009_c_funktionen_017.htm
@echo off

:: Parameter anzeigen, mit der die batch-Datei aufgerufen wurde
echo --------------------------------------------------------------------------
echo Ausgaben der batch-Datei
echo Parameter 1: %1
echo Parameter 2: %2
echo Parameter 3: %3
echo Parameter 4: %4
echo Parameter 5: %5
echo --------------------------------------------------------------------------
@echo.
echo C-Programm wird gestartet
echo Ende der batch-Datei
@echo.
:: Programm starten
prog_parameter.exe %1 %2 %3 %4 %5
@echo.
echo Ab hier erfolgen wieder Ausgaben der batch-Datei
::errorlevel auswerten
echo %errorlevel%
if %errorlevel% == 0 goto ok1
if %errorlevel% NEQ 1 goto nichtok
:: if %errorlevel% == 3 goto ok2

:: errorlevel x
:ok2
	echo mehr als 2 Werte übergeben
	echo zurück gegebener Werte ist: %errorlevel%
	goto ende

:: errorlevel 0
:ok1
	echo Rückgabewert ist %errorlevel%, also i.O.
	goto ende

:: errorlevel 1
:nichtok
	echo Rückgabewert ist %errorlevel%, also FEHLER
	goto ende

:ende
    echo Rückgabewert ist %errorlevel%
	echo FERTIG mit Ausgabe