#include <iostream>
void main() {
#pragma region exercicifinal1
	unsigned short resultat1; //declarades les variables que s'utilitzaran
	unsigned short resultat2;
	unsigned short resultat3;
	unsigned short resultat4;
	unsigned short resultat5;
	unsigned short resultat6;
	unsigned short resultat7;
	unsigned short resultat8;
	unsigned short resultat9;
	unsigned short resultat10;
	unsigned short resultatFinal = 0;
	std::cout << "Comensa l'examen." << std::endl;
	std::cout << "Primera pregunta: ¿Quina es la capital d'España?" << std::endl;
	std::cout << "Opcions: 1. Madrid	2.Barcelona		3.Sevilla	4.Singapur" << std::endl;
	std::cin >> resultat1;
	switch (resultat1){ // mostra resultat i opcio correcta de pregunta 1
	case 1:
		std::cout << "Resposta correcta" << std::endl;
	case 2:
		std::cout << "Resposta incorreta, la resposta correcta es la 1" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 1" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 1" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	resultatFinal = (resultat1 == 1) ? +1 : -1;
	std::cout << "Segona pregunta: ¿Cuántos continentes existen en el mundo?" << std::endl;
	std::cout << "Opcions: 1. 12	2. 8	3. 7	4. 6" << std::endl;
	std::cin >> resultat2;
	switch (resultat2) {// mostra resultat i opcio correcta de pregunta 2
	case 1:
		std::cout << "Resposta Resposta incorrecta, la resposta correcta es la 3" << std::endl;
	case 2:
		std::cout << "Resposta incorrecta, la resposta correcta es la 3" << std::endl;
	case 3:
		std::cout << "Resposta correcta" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	if (resultat1 == 1 && resultat2 == 2){
		resultatFinal + 2;
	}else if (resultat1 !=1 && resultat2 == 2) {
		resultatFinal + 1;
	}else if (resultat1 != 1 && resultat2 != 2){
		resultatFinal - 2;
	}else{
		resultatFinal - 1;
	}
	std::cout << "Tercera pregunta: ¿Qui va escriure Don Quijote de la Mancha?" << std::endl;
	std::cout << "Opcions: 1. Carlos Ruiz Zafón		2. Miguel De Cervantes		3. Miguel de Unamuno		4. Garcilaso de la Vega" << std::endl;
	std::cin >> resultat3;
	switch (resultat3) {// mostra resultat i opcio correcta de pregunta 3
	case 1:
		std::cout << "Resposta incorreta, la resposta correcta es la 2" << std::endl;
	case 2:
		std::cout << "Resposta correcta" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Cuarta pregunta: ¿En quin any va arribar Cristóbal Colón a América?" << std::endl;
	std::cout << "Opcions: 1. 2		2. 1492		3. 1489		4. 1490" << std::endl;
	std::cin >> resultat4;
	switch (resultat4) {// mostra resultat i opcio correcta de pregunta 4
	case 1:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	case 2:
		std::cout << "Resposta correcta" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Cinquena pregunta: ¿Cuants planetas hi ha en el sistema solar?" << std::endl;
	std::cout << "Opcions: 1. 7		2. 9		3. 8		4. 2" << std::endl;
	std::cin >> resultat5;
	switch (resultat5) {// mostra resultat i opcio correcta de pregunta 5
	case 1:
		std::cout << "Resposta incorrecta, la resposta correcta es la 3" << std::endl;
	case 2:
		std::cout << "Resposta incorreta, la resposta correcta es la 3" << std::endl;
	case 3:
		std::cout << "Resposta correcta" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 3" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Sisena pregunta: ¿Quin ocea está al este dels Estados Unidos?" << std::endl;
	std::cout << "Opcions: 1. Pacific	2. Antartic	3. Oceanic	4. Atlantic" << std::endl;
	std::cin >> resultat6;
	switch (resultat6) {// mostra resultat i opcio correcta de pregunta 6
	case 1:
		std::cout << "Resposta incorrecta, la resposta correcta es la 4" << std::endl;
	case 2:
		std::cout << "Resposta incorreta, la resposta correcta es la 4" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 4" << std::endl;
	case 4:
		std::cout << "Resposta correcta" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Setena pregunta: ¿Quin es el resultado de 8 + 5?" << std::endl;
	std::cout << "Opcions: 1. 13		2. 0		3. 99		4.12" << std::endl;
	std::cin >> resultat7;
	switch (resultat7) {// mostra resultat i opcio correcta de pregunta 7
	case 1:
		std::cout << "Resposta correcta" << std::endl;
	case 2:
		std::cout << "Resposta incorreta, la resposta correcta es la 1" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 1" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 1" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Vuitena pregunta: ¿Quin  instrument s'utiliza per medir la temperatura?" << std::endl;
	std::cout << "Opcions: 1. Verometre		2.Termometre		3. Menometre		4. Plubiometre " << std::endl;
	std::cin >> resultat8;
	switch (resultat8) {// mostra resultat i opcio correcta de pregunta 8
	case 1:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	case 2:
		std::cout << "Resposta correcta" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 2" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Novena pregunta: ¿Quina es la capital de Italia?" << std::endl;
	std::cout << "Opcions: 1. Roma		2. Monaco		3. Rusia		4. casa teva" << std::endl;
	std::cin >> resultat9;
	switch (resultat9) {// mostra resultat i opcio correcta de pregunta 9
	case 1:
		std::cout << "Resposta correcta" << std::endl;
	case 2:
		std::cout << "Resposta incorreta, la resposta correcta es la 1" << std::endl;
	case 3:
		std::cout << "Resposta incorrecta, la resposta correcta es la 1" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 1" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << "Desena pregunta: ¿Quina es la capital de Alemania?" << std::endl;
	std::cout << "Opcions: 1. MAnchester		2. Madrid		3. Berlin		4. Fotosintesis" << std::endl;
	std::cin >> resultat10;
	switch (resultat10) {// mostra resultat i opcio correcta de pregunta 10.
	case 1:
		std::cout << "Resposta incorrecta, la resposta correcta es la 3" << std::endl;
	case 2:
		std::cout << "Resposta incorreta, la resposta correcta es la 3" << std::endl;
	case 3:
		std::cout << "Resposta correcta" << std::endl;
	case 4:
		std::cout << "Resposta incorrecta, la resposta correcta es la 3" << std::endl;
	default:
		std::cout << "No es una opcio.";
		break;
	}
	std::cout << resultatFinal << std::endl;
#pragma endregion
}