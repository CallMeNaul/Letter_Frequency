#include <iostream>
using namespace std;
int main()
{
	// Đọc file từ tập tin
	FILE* f;
	string s;
	char c;

	fopen_s(&f, "Mono-alphabetic ciphertext.txt", "r");
	while ((c = fgetc(f)) != EOF) {
		s += c;
	}
	fclose(f);
	cout << "Cipher Text:\n\n-------------------------------------------\n" << s;
	cout << "\n-------------------------------------------\n";

	//Tính tần suất của chữ cái
	int letFre[26], temp, letCount = 0;
	for (int i = 0; i < 26; i++)
	{
		letFre[i] = 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			letCount++;
			temp = ((int)s[i]) - 97;
			letFre[temp]++;
		}
	}
	cout << "\tRatio of letters in the paragraph:";
	cout << "\n\t\t______________\n\t\t";
	for (int i = 0; i < 26; i++)
	{
		cout << "|" << char(i + 97) << ": " << (double)letFre[i] * 100 / letCount << "%" << "\n\t\t";
	}
	cout << "|_____________\n\t\t";

	return 0;
}
