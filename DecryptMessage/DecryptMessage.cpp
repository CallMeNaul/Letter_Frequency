#include <iostream>
using namespace std;
int main()
{
	// Đọc file từ tập tin
	FILE* f;
	string s;
	char c = ' ';

	fopen_s(&f, "Mono-alphabetic ciphertext.txt", "r");
	while ((c = fgetc(f)) != EOF) {
		s += c;
	}
	fclose(f);
	cout << "Cipher Text:\n\n-------------------------------------------\n" << s;
	cout << "\n-------------------------------------------\n";

	char decrypt[26], cypher[26];
	for (int i = 0; i < 26; i++)
	{
		decrypt[i] = char(i + 65);
		//cout << decrypt[i] << " ";
	}
	cypher[0] = 'v';
	cypher[1] = 'g';
	cypher[2] = 'a';
	cypher[3] = 'p';
	cypher[4] = 'n';
	cypher[5] = 'b';
	cypher[6] = 'r';
	cypher[7] = 't';
	cypher[8] = 'm';
	cypher[9] = 'o';
	cypher[10] = 's';
	cypher[11] = 'i';
	cypher[12] = 'c';
	cypher[13] = 'u';
	cypher[14] = 'x';
	cypher[15] = 'e';
	cypher[16] = 'j';
	cypher[17] = 'h';
	cypher[18] = 'q';
	cypher[19] = 'y';
	cypher[20] = 'z';
	cypher[21] = 'f';
	cypher[22] = 'l';
	cypher[23] = 'k';
	cypher[24] = 'd';
	cypher[25] = 'w';
	for (int i = 0; i < s.length(); i++)
	{
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			for (int j = 0; j < 26; j++)
			{
				if (s[i] == cypher[j])
				{
					s[i] = decrypt[j];
				}
			}
		}
	}
	cout << s;
	return 0;
}