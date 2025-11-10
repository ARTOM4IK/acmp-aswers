#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s[3]{ "", "", ""};
	cin >> s[0] >> s[1] >> s[2];
	string S[6][3]{
		{"black", "black", "green"},
		{"black", "black", "GREEN"},
		{"black", "yellow", "black"},
		{"red", "black", "black"},
		{"red", "yellow", "black"},
		{"black", "YELLOW", "black"}
	};
	int c = -1;
	for (int i = 0; i < 6; ++i)
	{
		if (S[i][0] == s[0] && S[i][1] == s[1] && S[i][2] == s[2])
		{
			c = i;
		}
	}
	if (c == -1)
	{
		cout << "error";
	}
	else
	{
		if (c != 5)
		{
			c = (c + 1) % 5;			
		}
		cout << S[c][0] << endl;
		cout << S[c][1] << endl;
		cout << S[c][2] << endl;
	}

	return 0;
}