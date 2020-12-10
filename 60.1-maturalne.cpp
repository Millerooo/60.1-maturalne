#include <iostream>
#include <fstream>

using namespace std;

	class files{
		fstream wejscie;
		ofstream wyjscie;

	public:
   files(); 
   ~files();
   void loop();
};
files::files()
{
   wejscie.open("liczby.txt");
   wyjscie.open("liczbyOut.txt");
}

files::~files()
{
   wejscie.close();
   wyjscie.close();
}

void files::loop()
{
	while (!wejscie.eof())
	{
		int pierwsza;
		int ostatnia;
		wejscie>>pierwsza;
		wejscie>>ostatnia;
			if(pierwsza,ostatnia<1000);
			wyjscie<<pierwsza;
			wyjscie<<ostatnia;
		
	}
}

main()
{
  files dane;
  dane.loop();
  return 1;
}
