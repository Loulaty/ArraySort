#include <iostream>
#include <ctime>

using namespace std;

void bubbleSort(int tab[10]) {
	//tri_�_bulles(Tableau T)
		//pour i allant de(taille de T) - 1 � 1 => decrementation
			//pour j allant de 0 � i - 1 => incrementation
				//si T[j + 1] < T[j]
					//�changer(T[j + 1], T[j])
}


int main() {
	srand(time(NULL));

	int tab[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		bool alreadyIn = false;
		int random = rand() % 10 + 1;
		for (int j = 0; j < 10; j++) {
			if (random == tab[j]) {
				alreadyIn = true;
				break;
			}
		}
		if (alreadyIn) i--;
		else tab[i] = random;
	}

	for (int i = 0; i < 10; i++) {
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}
	return 0;
}