#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define SIZEOFALPHABET 26 // Alphabet �� ����
#define SIZEOFDIGIT 10 // digit �� ����

ofstream os;	// ��� ��Ʈ��

class Morse {
	string alphabet[SIZEOFALPHABET]; // ���ĺ��� �� ��ȣ ����
	string digit[SIZEOFDIGIT]; // ������ �� ��ȣ ����
	string slash, question, comma, period, plus, equal; // Ư�� ������ �� ��ȣ ����
public:
	Morse(); // alphabet[], digit[] �迭 �� Ư�� ������ �� ��ȣ �ʱ�ȭ
	void text2Morse(string text, string& morse); // ���� �ؽ�Ʈ�� �� ��ȣ�� ��ȯ
	bool morse2Text(string morse, string& text); // �� ��ȣ�� ���� �ؽ�Ʈ�� ��ȯ
};


Morse::Morse() {

	/* A ~ Z */
	alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-..";
	alphabet[4] = "."; alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "....";
	alphabet[8] = ".."; alphabet[9] = ".---"; alphabet[10] = "-.-"; alphabet[11] = ".-..";
	alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---"; alphabet[15] = ".--.";
	alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
	alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-";
	alphabet[24] = "-.--"; alphabet[25] = "--..";

	/* 0 ~ 9 */
	digit[0] = "-----"; digit[1] = ".----"; digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-";
	digit[5] = "....."; digit[6] = "-...."; digit[7] = "--..."; digit[8] = "----.."; digit[9] = "----.";


	/* /    ?        ,             .        +                 =  */
	slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-"; plus = ".-.-."; equal = "-...-";
}

void Morse::text2Morse(string text, string& morse)
{
	int len=text.length();

	for (int i = 0; i < len; i++)
	{
		int j=text[i];

		if(j==32)
			morse+="   ";

		if (j >= 97 && j < 122)
			morse += this->alphabet[j-97] + ' ';

		else if (j >= 48 && j < 57)
			morse += this->digit[j - 48] + ' ';

		else if (j == 47)
			morse += this->slash + ' ';

		else if (j == 63)
			morse += this->question + ' ';

		else if (j == 44)
			morse += this->comma + ' ';

		else if (j == 46)
			morse += this->period + ' ';

		else if (j == 43)
			morse += this->plus + ' ';

		else if (j == 61)
			morse += this->equal + ' ';
	}
}

bool Morse::morse2Text(string morse, string& text)
{
	return 1;
}

int main()
{
	Morse morse;
	string input = "c programing final exam 123.";
	string result;

	os.open("log.txt");
	if (os.fail())
	{
		cerr << "���� ���� ����"<<endl;
		exit(1);
	}

	os << "c programing final exam 123. ������ �� ��ȣ�� ��ȯ�մϴ�." << endl;
	
	morse.text2Morse(input, result);

	os<<result<<endl<<endl;

	os << "�� ��ȣ�� �ٽ� ���� �ؽ�Ʈ�� �ٲߴϴ�." << endl;

	morse.morse2Text(result, input);

	os<<input<<endl;

	os.close();

	return 0;
}