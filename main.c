#include <stdio.h>
#include <stdlib.h>
#include "WT.h"

int main(int argc, char *argv[]) {

	char seq[5][301]={
"CAGTTAGCCCTAATGCCTCCGGGGTTGTGAAAAGTTTAACCACAATTTGCTGGCTTGGGTTACACCATAGATTTAGACCACTCACCTGATTTTGGGTGAGCGATATGCGTGTGTGTTATGGGAGTAGATTGAATCTCATAGTCTGATACAAGAACTCCCTTCTACATCGCTTGATTTAAGGTTGTTACCCTGACCTGGCATGGCGCGGAGACGAGACGAACTGGGGAGAGATTGTCAAAAGTGAGGGTACGCTGCAGGTAGGTTTTAACATGAGCGAACTTGGACATCTAGACGGGAACG",
"TTCCACTTGGAGCAACCCGAACACGTGTACAGACATAACTATCGATCTATGCCCGGTATCTGGGGATGGCTCAATGCGCGAGACTACTTTTAAAGCGGCATAACTCTTGAGAAGCTCCTTCTACAGTGCCCGCTGCCTGCGTGCTCCCCACCTGCGCTGCATAGGTCGGCGCATGCGCGCCTATGAGAAACAAGAAAATCGGGTTTCTGTGCAACAGCTTGATTGATGTACGGCCCCTACGCTTATGGAGCATCATCGCGAGCCAAATCAATATCACGGGAATACGATACGGTACGACCA",
"GCGGCTACGTATTCTGTCGGAGTAGCGGCCGTCTGCCCAGACGACCTATAGAAAGCGGCGGACAGGCTGAGCGAGGTACTACTTCTACAAATACTGTCGATGGTAATCTCCTACCGCACGGCGTCTAAAGCATGGTAAAGAAAATCTCTAGTCTCTGATTCAGCATCTGTGCCGTGTATTAGAACCGTGGGGCCCCCGGAGGTTTCATACCAGTTCGACTATCCGAGATGATCTCCATATCGTCTAATACACTCATCTAGACAGTGCCATAGTGAAAATAGACTAACGGCCCGCCCTTGA",
"AGCAAGAATTGCCATCCCCCTCTTGCCACACTCACATTATTGGATGTCTACGGACATGATAAATTCGCTCCTATCAATGTACTCCATATGTCTAGACATTATCGGTTGTGAGATTCGGACCCCCACCCGATTGGGTATAGAGAGTATTATATTAGTCGGACTCCGCATTAATATCTCGTGTATAGTGTACCGGTCTATGCGCTTGGGGGGTGATACTCGATTGCGCATTGTTGGAAACTGCCAACTAGAATAGATTTACTTCTACATATTCTGGGCAGCTTGGGGTCTTAGGTCCGAATG",
"CCTGGGTTGATGTATAATTTTAGTACGGGAGACGTGTGTGTTCGCGCCGCAAGAAGGTCTCTGCAAAAAACCTGTCTCTTCTACACACTGGAAAGTGAAGGGTGAGCGGCGGACATAGGTGTGTCTTGCCTATACGACAGGCGGTTTTGGAACATGCGGCCCCATGTAGCCTGGCCCACAGCCTTTAAAATGGCTTAGCAAAAATGGTACGGCCCTGCCTGAAGTTCGGAGGAGTACCGCCGGGTCGATTTGTGATGTGGTTTCGGGTGTACTTGTGTCAATTGGATTCCGCGAAACCCA"
};
	char passe[6];
	Noeud *racine = nouveauNoeud();
	
	int i = 0,j = 0, k = 0, l = 0;
	

	for(j=0; j < 5 ; j++) {

		for (i = 0; i < 296 ; i++) {
			k = i;
			for (l=0; l < 5 ; l++) {
				passe[l] = seq[j][k];
				k++;
			}
		passe[5] = '\0';
		ajouteMotArbre(racine, passe, j);

		}
	}

/*
	for (i = 0; i < 296 ; i++) {
			k = i;
			for (l=0; l < 5 ; l++) {
				passe[l] = seq[0][k];
				k++;
			}
		passe[5] = '\0';
		if (chercheMotArbre(racine, passe) == 1) {
			printf("%s\n",passe);
		}
	}
*/
	
	printf("%d\n", chercheMotArbre(racine, "AAAAAAAAAA"));
	printf("%d\n",chercheMotArbre(racine, "AAGAA"));
  printf("present dans la liste 1 :%d\n",chercheMotArbre(racine, "CCGGGG"));

	commun(racine);



	return 0;



}