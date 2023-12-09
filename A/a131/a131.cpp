#include <stdio.h>
#include <string.h>

char getEncode(char letter);
void printRow(char name[], char soundexCode[]);

int main(void)
{
	printf("         NAME                     SOUNDEX CODE\n");

	char name[21];
	while(scanf("%s", name) != EOF)
	{
		char result[] = {getEncode(name[0]), '0', '0', '0', '\0'};
		int nameLength = strlen(name);

		for (int i = 1, resultIndex = 1; i < nameLength && resultIndex < 4; i++)
		{
			if(getEncode(name[i]) == '0' || getEncode(name[i]) == getEncode(name[i - 1]))
				continue;

			result[resultIndex] = getEncode(name[i]);
			resultIndex++;
		}

		result[0] = name[0];
		printRow(name, result);
	}

	printf("                   END OF OUTPUT\n");
	return 0;
}

char getEncode(char letter)
{
	switch(letter)
	{
		case 'B':
		case 'P':
		case 'F':
		case 'V':
			return '1';
		case 'C':
		case 'S':
		case 'K':
		case 'G':
		case 'J':
		case 'Q':
		case 'X':
		case 'Z':
			return '2';
		case 'D':
		case 'T':
			return '3';
		case 'L':
			return '4';
		case 'M':
		case 'N':
			return '5';
		case 'R':
			return '6';
		default:
			return '0';
	}
	return '0';
}

void printRow(char name[], char soundexCode[])
{
	printf("         %s", name);
	for (int i = 10 + strlen(name); i < 35; i++)
		printf(" ");
	printf("%s\n", soundexCode);
}
/*
#include <bits/stdc++.h>
using namespace std;
void printIt(string name,string code){
    cout << "         " << name;
    for(int i=10+name.size();i<35;i++) cout << " ";
    cout << code;
}
int soundex(char a){
    if(a=='B' or a=='P' or a=='F' or a=='V')
        return 1;
    else if(a=='C' or a=='S' or a=='K' or a=='G' or a=='J' or a=='Q' or a=='X' or a=='Z')
        return 2;
    else if(a=='D' or a=='T')
        return 3;
    else if(a=='L')
        return 4;
    else if(a=='M' or a=='N')
        return 5;
    else if(a=='R')
        return 6;
    else return 0;
} 

int main(){
    cout << "         NAME                     SOUNDEX CODE\n";
    string name;
    while(cin >> name){
        string result=name[0]+"000";
        int l=name.size();

        for(int i=1,count=1;i<l && count<4;i++){
            if(soundex(name[i]) == '0' || soundex(name[i]) == soundex(name[i-1]))
                continue;
            
            result[count] = soundex(name[i]);
            count++;
        }

        printIt(name,result);
    }
    cout << "                   END OF OUTPUT\n";
}
*/

