#include<stdio.h>
#include<ctype.h>
char scn_1,scn_2;
int main() {
		scanf("%c", &scn_1);
		if (islower(scn_1)) {
			scn_2 = toupper(scn_1);
		}
		else {
			scn_2 = scn_1;
		}
		switch (scn_2)
		{
		case 'A': {
			printf("%c -> Alpha", scn_1);
			break;
		}
		case 'B': {
			printf("%c -> Bravo", scn_1);
			break;
		}
		case 'C': {
			printf("%c -> Charlie", scn_1);
			break;
		}
		case 'D': {
			printf("%c -> Delta", scn_1);
			break;
		}
		case 'E': {
			printf("%c -> Echo", scn_1);
			break;
		}
		case 'F': {
			printf("%c -> Foxtrot", scn_1);
			break;
		}
		case 'G': {
			printf("%c -> Golf", scn_1);
			break;
		}
		case 'H': {
			printf("%c -> Hotel", scn_1);
			break;
		}
		case 'I': {
			printf("%c -> India", scn_1);
			break;
		}
		case 'J': {
			printf("%c -> Juliett", scn_1);
			break;
		}
		case 'K': {
			printf("%c -> Kilo", scn_1);
			break;
		}
		case 'L': {
			printf("%c -> Lima", scn_1);
			break;
		}
		case 'M': {
			printf("%c -> Mike", scn_1);
			break;
		}
		case 'N': {
			printf("%c -> November", scn_1);
			break;
		}
		case 'O': {
			printf("%c -> Oscar", scn_1);
			break;
		}
		case 'P': {
			printf("%c -> Papa", scn_1);
			break;
		}
		case 'Q': {
			printf("%c -> Quebec", scn_1);
			break;
		}
		case 'R': {
			printf("%c -> Romeo", scn_1);
			break;
		}
		case 'S': {
			printf("%c -> Sierra", scn_1);
			break;
		}
		case 'T': {
			printf("%c -> Tango", scn_1);
			break;
		}
		case 'U': {
			printf("%c -> Uniform", scn_1);
			break;
		}
		case 'V': {
			printf("%c -> Victor", scn_1);
			break;
		}
		case 'W': {
			printf("%c -> Whiskey", scn_1);
			break;
		}
		case 'X': {
			printf("%c -> X-ray", scn_1);
			break;
		}
		case 'Y': {
			printf("%c -> Yankee", scn_1);
			break;
		}
		case 'Za': {
			printf("%c -> Zulu", scn_1);
			break;
		}
	}
}